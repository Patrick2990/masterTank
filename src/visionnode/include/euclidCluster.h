#ifndef PROJECT_EUCLIDCLUSTER_H
#define PROJECT_EUCLIDCLUSTER_H

#include <pcl/ModelCoefficients.h>
#include <pcl/io/pcd_io.h>
#include <pcl/point_types.h>
#include <pcl/filters/extract_indices.h>
#include <pcl/filters/passthrough.h>
#include <pcl/features/normal_3d.h>
#include <pcl/sample_consensus/method_types.h>
#include <pcl/sample_consensus/model_types.h>
#include <pcl/segmentation/sac_segmentation.h>
#include <sensor_msgs/PointCloud2.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/filters/voxel_grid.h>
#include <pcl/segmentation/extract_clusters.h>
#include <pcl/console/parse.h>
#include <pcl/console/print.h>
#include <chrono>

class euclidCluster {

    public:
        typedef pcl::PointXYZRGBA PointT;
        bool sceneReady = false;
        std::vector<pcl::PointCloud<PointT>::Ptr> getCluster();

        euclidCluster(ros::NodeHandle nh);
        virtual ~euclidCluster();

        void runThread();

    private:
        ros::NodeHandle nh;
        pcl::PointCloud<euclidCluster::PointT>::Ptr cloud;
        pcl::PointCloud<euclidCluster::PointT>::Ptr cloudWorking;

        void getRosImage(const sensor_msgs::PointCloud2ConstPtr ros_cloud);
};

#endif //PROJECT_EUCLIDCLUSTER_H
