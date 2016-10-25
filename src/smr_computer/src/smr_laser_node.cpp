#include <ros/ros.h>
#include <tf/transform_broadcaster.h>
#include <sensor_msgs/LaserScan.h>
#include "pugixml.hpp"
#include "connection_laser.cpp"
#define LASER_ADDRESS "127.0.0.1"
#define LASER_PORT 20000

class SMRLaserNode
{
      //Ros objects
      ros::NodeHandle nh_;
      ros::Publisher scan_publisher_;
      tf::TransformBroadcaster tf;
      sensor_msgs::LaserScan laser_data;
      std::string laser_xml;
      Connection conn;
      bool laser_xml_started;
      const static float PI = 3.14159265;

  static inline double rad( const double angle )
  {
    return (angle / 180.0) * PI;
  }

public:
  SMRLaserNode(ros::NodeHandle& nh) :
    nh_(nh),
    scan_publisher_(nh_.advertise<sensor_msgs::LaserScan> ("/base_scan", 1)),
    conn( 3500 )
  {
    ROS_INFO("Started SMR Laser Node");

    bool result = conn.connect(LASER_ADDRESS,LASER_PORT);
    if(result)
      ROS_INFO("Connected to %s", LASER_ADDRESS);
    else
    {
      ROS_INFO("Unable to connect");
      ros::shutdown();
    }

    // todo: read all this from server
    laser_data.header.frame_id="/base_laser";
    laser_data.scan_time = 0.1;
    laser_data.time_increment = 0.0;
    laser_data.range_min = 0.0;
    laser_data.range_max = 15.0;
  }

  int intValue(char character)
  {
    if (character > 'f')
    {
      ROS_INFO("character error: %c", character);
    }
    if( character <= '9' )
    {
      return( (int)character - (int)'0');
    }
    else
    {
      return( (int)character - (int)'a' + 10);
    }
  }

  void parse( const std::string& line )
  {
    double max = 0;
    
    if( line.find("<scanGet") != std::string::npos )
    {
      laser_xml = line;
      laser_xml_started = true;
    }
    else if ( laser_xml_started )
    {
      laser_xml.append( line );
      //printf("%s", line.c_str());
    }

    if ( line.find("</scanGet>") != std::string::npos && laser_xml_started )
    {
      pugi::xml_document doc;
      pugi::xml_parse_result result = doc.load_buffer( laser_xml.c_str(), laser_xml.size() );
      if( result.status == pugi::status_ok )
      {
        // Read Time from laser scanner
        double time = atof( doc.first_child().attribute("tod").value() );
        ros::Time ros_time;
        ros_time.fromSec(time);

        laser_data.header.stamp = ros_time;

        // Read other laser info....
        laser_data.angle_increment = rad( atof( doc.first_child().attribute("interval").value() ) );
        laser_data.angle_min = rad( atof( doc.first_child().attribute("min").value() ) );
        laser_data.angle_max = rad( atof( doc.first_child().attribute("max").value() ) );
        int count = atoi( doc.first_child().attribute("count").value() );

        // Read Laser Data
        const char* data = doc.first_child().child("bin").child_value();
        laser_data.ranges.clear();
        if( data != 0 && data[0] != 0 )
        {
          for( int i = 0; i < count; i++ )
          {
            int dec = 0;
            // Test for error flags in most significant
            if (intValue(data[2]) & 0xC)
            {
              //printf("Error in reading\n");
            }else {
              dec = intValue(data[1])           +
                    intValue(data[0]) * 16      +
                    intValue(data[3]) * 16 * 16 +
                    intValue(data[2]) * 16 * 16 * 16;
            }
            float distance = dec * 0.001;
            if(distance<0.05) {
              distance = 50;
            } else if(distance > 40)
            {
              //ROS_INFO("Not possible: %f, Numbers: %d, %d, %d, %d",distance, intValue(data[1]),intValue(data[0]),intValue(data[3]),intValue(data[2]));

            }
            if (distance > max && distance < 50) {
              max = distance;
            }
            laser_data.ranges.push_back(distance);
            data += 4;
          }
        }
        else
        {
          ROS_INFO("scanGet XML parse error, no data?");
        }
        scan_publisher_.publish(laser_data);

        // Transform
        double x = atof( doc.first_child().child("pos3d").attribute("x").value() );
        double y = atof( doc.first_child().child("pos3d").attribute("y").value() );
        double z = atof( doc.first_child().child("pos3d").attribute("z").value() );
        double rx = atof( doc.first_child().child("rot3d").attribute("Omega").value() );
        double ry = atof( doc.first_child().child("rot3d").attribute("Phi").value() );
        double rz = atof( doc.first_child().child("rot3d").attribute("Kappa").value() );

        // broadcast laser transform
        tf::Transform txLaser( tf::createQuaternionFromRPY(ry, rx, rz), tf::Point(y, x, z) );
        tf.sendTransform( tf::StampedTransform(txLaser, ros_time, "base_link", "base_laser") );
      }
      else
      {
        ROS_INFO("scanGet XML parse error");
      }

      laser_xml_started = false;
      laser_xml.clear();
    }


  }

  void run(int argc, char** argv)
  {
    // Initialize ROS
    ros::Rate r(1/0.06);

    conn.sendLine("scanSet width=180");
    usleep(2000000);
    conn.clearBuffer();
    conn.sendLine("scanGet");
    r.sleep();
    int i = 0;
    while (nh_.ok())
    {
      std::string data;
      int bytes = conn.receiveData();
      printf("Reading #: %d, Received bytes: %d\n", i++, bytes);
      while( conn.popLine(data) )
      {
        parse( data );
      }
      ros::spinOnce();
      conn.sendLine("scanGet");
      r.sleep();
    }
  }

};

int main(int argc, char** argv)
{
  ros::init(argc, argv, "smr_laser_node");
  ros::NodeHandle nh;
  SMRLaserNode component(nh);

  component.run(argc, argv);
  return 0;
}

