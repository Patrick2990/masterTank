#include <thread>
#include "estimateVFH.h"
#include "euclidCluster.h"

void runEuclid(euclidCluster * eCluster) {
    eCluster->runThread();
}

int main(int argc, char **argv) {
    ros::init(argc, argv, "visionnode");

    ros::NodeHandle nh;

    pcl::PCDWriter writer;
    euclidCluster * eCluster = new euclidCluster(nh);
    estimateVFH *eVFH = new estimateVFH();

    std::thread t1(runEuclid, eCluster);

    // Wait for Kinect-thread - sleep to save CPU
    pcl::console::print_error("\nWaiting for Kinect..\n");
    while(!eCluster->sceneReady){
        pcl_sleep(1);
    };

    // Get clusters
    std::vector<pcl::PointCloud<euclidCluster::PointT>::Ptr> clusters = eCluster->getCluster();

    // Write clusters to disk
    int i = 0;
    while (i < clusters.size()) {
        std::string filePCD = std::string("wine").append(std::to_string(i)).append(".pcd");
        std::string fileVFH = std::string("wine").append(std::to_string(i)).append("_vfh.pcd");
        writer.write(filePCD, *clusters[i], false);
        writer.write(fileVFH, *eVFH->getVFH(clusters[i]), false);
        i++;
    }

//    const char *command = "kill $(ps aux | grep ros | grep -v grep | awk '{print $2}')";
//    system(command);
    exit(EXIT_SUCCESS);
}