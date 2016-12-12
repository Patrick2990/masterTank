#include "nearestNeighbors.h"
#include "estimateVFH.h"
#include "euclidCluster.h"
#include <std_msgs/Float32.h>
#include <chrono>
#include <thread>

float throttle = 0;

void runEuclid(ros::NodeHandle nh, euclidCluster * eCluster) {
    eCluster->runThread();
}

void getRosMsg(const std_msgs::Float32ConstPtr ros_msg) {
    throttle = ros_msg->data;
}


int main(int argc, char **argv) {
    using namespace std::chrono;

    auto epoch = std::chrono::high_resolution_clock::from_time_t(0);

    ros::init(argc, argv, "visionnode");
    ros::NodeHandle nh;

    ros::Subscriber cloud_subscriber = nh.subscribe("/vision/throttle", 10, &getRosMsg);

    euclidCluster * eCluster = eCluster = new euclidCluster(nh);
    nearestNeighbors * NearestNeighbors = new nearestNeighbors(nh);
    estimateVFH *eVFH = new estimateVFH();

    // Start Kinect-thread
    std::thread t1(runEuclid, nh, eCluster);

    // Wait for Kinect-thread - sleep to save CPU
    pcl::console::print_error("\nWaiting for Kinect..\n");
    while(!eCluster->sceneReady){
        pcl_sleep(1);
    };

    long mseconds = duration_cast<milliseconds>(std::chrono::high_resolution_clock::now() - epoch).count();
    pcl::console::print_error("Started: %d\n", mseconds);

    while(ros::ok()) {

        if (throttle >= 0) {
            // Get clusters
            std::vector<pcl::PointCloud<euclidCluster::PointT>::Ptr> clusters = eCluster->getCluster();
            mseconds = duration_cast<milliseconds>(std::chrono::high_resolution_clock::now() - epoch).count();
            pcl::console::print_error("Got clusters from Kinect/PointCloud: %d\n", mseconds);

            int i = 0;
            while (i < clusters.size()) {

                // Get VFH from cluster
                pcl::PointCloud<pcl::VFHSignature308>::Ptr vfh = eVFH->getVFH(clusters[i]);
                mseconds = duration_cast<milliseconds>(std::chrono::high_resolution_clock::now() - epoch).count();
                pcl::console::print_error("Got VFH: %d\n", mseconds);

                // Get nearest neighbors
                NearestNeighbors->findNeighbors(i, vfh, clusters[i]);
                i++;
            }
            ros::Duration(throttle).sleep();
        }
        ros::Duration(0.01).sleep();
    }

   // const char *command = "kill $(ps aux | grep ros | grep -v grep | awk '{print $2}')";
   // system(command);
    exit(EXIT_SUCCESS);
}
