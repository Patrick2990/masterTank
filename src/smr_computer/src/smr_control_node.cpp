#include <ros/ros.h>
#include <std_msgs/String.h>
#include <geometry_msgs/Twist.h>
#include <nav_msgs/Odometry.h>
#include <rosgraph_msgs/Clock.h>
#include <tf/transform_broadcaster.h>
#include <boost/tokenizer.hpp>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <unistd.h>
#include <signal.h>
#include <sys/ioctl.h>
#include <sys/socket.h>
#include <sys/time.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <fcntl.h>

extern "C" {
    #include "rhd.h"
}
#define WHEEL_BASE 0.26
#define M_PER_ENC 0.00010245
#define VELSCALEL 100
#define VELSCALER 100

#define ROBOTPORT 8000
#define RHD_ADDRESS "localhost"

typedef struct{ //input signals
    int left_enc,right_enc; // encoderticks
    // parameters
    double w;   // wheel separation
    double cr,cl;   // meters per encodertick
    //output signals
    double right_pos,left_pos;
    double right_pos_old,left_pos_old;
    double dist_driven;
    // internal variables
    int left_enc_old, right_enc_old;
} odotype;


class SMRControlNode
{
    //Ros objects
    ros::NodeHandle nh_;
    
    // Subscriptions
    ros::Subscriber smrcl_cmd_subscriber_;
    ros::Subscriber cmd_vel_subscriber_;

    // Pubs
    ros::Publisher smr_odo_pub;
    ros::Publisher smr_clock_pub;

    // Transform broadcaster
    tf::TransformBroadcaster tf;
    
    int watchdog_;
    const static float PI = 3.14159265;
    bool first;

public:
    double Vth;

    void cmdVelHandler( const geometry_msgs::Twist::ConstPtr& vel )
    {
        double dx = vel->linear.x;
        double dth = vel->angular.z;
        Vth = dth;
        double v_left = dx - WHEEL_BASE/2 * dth;
        double v_right = dx + WHEEL_BASE/2 * dth;

        watchdog_ = 100; // Timeout = 10 seconds

        //char command[64];
        //sprintf(command, "motorcmds %4.2f %4.2f", v_left, v_right );
        speedl->data[0] = VELSCALEL * v_left;
        speedl->updated = 1;
        speedr->data[0] = VELSCALER * v_right;
        speedr->updated = 1;
    }
    
    ros::Publisher get_smr_odo_pub()
    {
        return(smr_odo_pub);
    }
    
    ros::Publisher get_smr_clock_pub()
    {
        return(smr_clock_pub);
    }
    
    tf::TransformBroadcaster get_tf()
    {
        return(tf);
    }
    
    double get_vth()
    {
        return(Vth);
    }

    /////////RHD CODE BELOW///////////

    symTableElement * getinputref(const char *sym_name, symTableElement * tab)
    {
        int i;
        for (i=0; i< getSymbolTableSize('r'); i++){
            if (strcmp (tab[i].name,sym_name) == 0) {
                return &tab[i];
            }
        }
        return 0;
    }

    symTableElement * getoutputref(const char *sym_name, symTableElement * tab)
    {
        int i;
        for (i=0; i< getSymbolTableSize('w'); i++){
            if (strcmp (tab[i].name,sym_name) == 0){
                return &tab[i];
            }
        }
        return 0;
    }

    void reset_odo(odotype * p) {
        p->right_pos = p->left_pos = 0.0;
        p->right_enc_old = p->right_enc;
        p->left_enc_old = p->left_enc;
    }

    void update_odo(odotype *p)
    {
        int delta;

        delta = p->right_enc - p->right_enc_old;
        if (delta > 0x8000) delta -= 0x10000;
        else if (delta < -0x8000) delta += 0x10000;
        p->right_enc_old = p->right_enc;
        p->right_pos_old = p->right_pos;
        p->right_pos += delta * p->cr;
        
        delta = p->left_enc - p->left_enc_old;
        if (delta > 0x8000) delta -= 0x10000;
        else if (delta < -0x8000) delta += 0x10000;
        p->left_enc_old = p->left_enc;
        p->left_pos_old = p->left_pos;
        p->left_pos += delta * p->cl;

        p->dist_driven = ((p->right_pos - p->right_pos_old) + (p->left_pos - p->left_pos_old))/2;
          
    }

    symTableElement *  inputtable,*outputtable;
    symTableElement *lenc,*renc,*linesensor,*irsensor, *speedl,*speedr,*resetmotorr,*resetmotorl;
    odotype odo;

    void setupRHD(){
        if (rhdConnect('w',RHD_ADDRESS,ROBOTPORT)!='w'){
            printf("Can't connect to rhd \n");
            exit(EXIT_FAILURE); 
        } 
        
        printf("connected to robot \n");
        
        if ((inputtable=getSymbolTable('r'))== NULL){
            printf("Can't connect to rhd \n");
            exit(EXIT_FAILURE); 
        }
        if ((outputtable=getSymbolTable('w'))== NULL){
            printf("Can't connect to rhd \n");
            exit(EXIT_FAILURE); 
        }
        // connect to robot I/O variables
        lenc=getinputref("encl",inputtable);
        renc=getinputref("encr",inputtable);
        linesensor=getinputref("linesensor",inputtable);
        irsensor=getinputref("irsensor",inputtable);
             
        speedl=getoutputref("speedl",outputtable);
        speedr=getoutputref("speedr",outputtable);
        resetmotorr=getoutputref("resetmotorr",outputtable);
        resetmotorl=getoutputref("resetmotorl",outputtable);
    }

    public:
    SMRControlNode(ros::NodeHandle& nh) :
        nh_(nh),
        cmd_vel_subscriber_( nh_.subscribe<geometry_msgs::Twist>("/cmd_vel", 1, &SMRControlNode::cmdVelHandler, this) ),
        smr_odo_pub(nh_.advertise<nav_msgs::Odometry> ("/odom", 1)),
        smr_clock_pub(nh_.advertise<rosgraph_msgs::Clock> ("/clock", 1)),
        first( true )
    {
        setupRHD();
        rhdSync(); // Load sensor and actuators
        odo.w=WHEEL_BASE;
        odo.cr=M_PER_ENC;
        odo.cl=M_PER_ENC;
        odo.left_enc=lenc->data[0];
        odo.right_enc=renc->data[0];
        reset_odo(&odo);
    }

    void run(int argc, char** argv)
    {
        // Initialize ROS
        std::string data;
        ros::Rate r(10);
        while (nh_.ok()) {
            
            ros::spinOnce();
            if( watchdog_ == 0 )
        {
            //TODO: Send stop command
            watchdog_ = 100;
        } else{
            --watchdog_;
        }
            r.sleep();
        }
    }

};

typedef struct{ //input signals
    double x;
    double x_old;
    double y;
    double y_old;
    double th;
    double th_old;
    double th_raw;
    double th_raw_old;
    double dth;
    double vx;
    double vth;
} odometry;

void calcOdometry(odometry * odom, odotype * raw, double dt){
    // Move previous values
    odom->x_old = odom->x;
    odom->y_old = odom->y;
    odom->th_old = odom->th;
    odom->th_raw_old = odom->th_raw;
    // Calculate theta
    odom->th_raw = ((raw->right_pos - raw->left_pos)/WHEEL_BASE);
    odom->dth = odom->th_raw - odom->th_raw_old;
    odom->th += odom->dth;
    while(odom->th > M_PI){
        odom->th -= 2*M_PI;
    }
    while(odom->th < -M_PI){
        odom->th += 2*M_PI;
    }
    double avg_th = (odom->th + odom->th_old)/2;
    //Calculate x and y pos
    odom->x += raw->dist_driven * cos(avg_th);
    odom->y += raw->dist_driven * sin(avg_th);
    odom->vx = raw->dist_driven/dt;
    odom->vth = (odom->dth)/dt;
}

void *odometry_thread(void *var)
{
    std::string out;
    SMRControlNode *node = (SMRControlNode *) var;
    ros::Time ros_time;
    double last_time = 0.0, vForward = 0.0;
    ROS_INFO("Starting odometry thread");
    printf("Time, x, y, th, Vx, Vth\n");
    ros::Rate loop_rate(1/0.06);
    odometry odom;
    while(ros::ok())
    {
        rhdSync();
        ros_time = ros::Time::now();
        node->odo.left_enc=node->lenc->data[0];
        node->odo.right_enc=node->renc->data[0];
        node->update_odo(&(node->odo));
        calcOdometry(&odom, &(node->odo), loop_rate.expectedCycleTime().toSec());        
        //printf("%f, %f, %f, %f, %f, %f\n",ros_time.toSec(), odom.x, odom.y, odom.th, odom.vx, odom.vth);

        //Send transform
        tf::Transform txOdom( tf::createQuaternionFromYaw(odom.th), tf::Point(odom.x, odom.y, 0.0) );
        node->get_tf().sendTransform( tf::StampedTransform(txOdom, ros_time, "odom", "base_link") );

        nav_msgs::Odometry odom_message;
        tf::poseTFToMsg(txOdom, odom_message.pose.pose);

        // Set position
        odom_message.pose.pose.position.x = odom.x;
        odom_message.pose.pose.position.y = odom.y;
        //set the motor speed
        odom_message.twist.twist.linear.x = odom.vx;
        odom_message.twist.twist.linear.y = 0.0;
        odom_message.twist.twist.linear.z = 0.0;
        odom_message.twist.twist.angular.x = 0.0;
        odom_message.twist.twist.angular.y = 0.0;
        odom_message.twist.twist.angular.z = odom.vth;
        // Header ID and time
        odom_message.header.stamp = ros_time;
        odom_message.header.frame_id = "odom";
        odom_message.child_frame_id = "base_link";

        // Publish odometry message
        node->get_smr_odo_pub().publish(odom_message);

        // Publish sim clock
        rosgraph_msgs::Clock klokke;
        klokke.clock = ros_time;
        node->get_smr_clock_pub().publish(klokke);
        loop_rate.sleep();
    }
    
    pthread_exit(NULL);
}

int main(int argc, char** argv)
{
    ros::init(argc, argv, "smr_control_node");
    ros::NodeHandle nh;
    pthread_t odometry_thread_handle;
    pthread_attr_t attr;
    SMRControlNode control(nh);
    
    pthread_attr_init(&attr);
    if(pthread_create(&odometry_thread_handle, &attr, odometry_thread, &control))
    {
        ROS_INFO("Failed to create odometry thread");
    }
    else
    {
        control.run(argc, argv);
    }
      
    return 0;
}

