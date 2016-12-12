#ifndef PROJECT_NEAREST_NEIGHBORS_H
#define PROJECT_NEAREST_NEIGHBORS_H

#include <pcl/point_types.h>
#include <pcl/point_cloud.h>
#include <pcl/common/common.h>
#include <pcl/common/transforms.h>
#include <pcl/visualization/pcl_visualizer.h>
#include <pcl/console/parse.h>
#include <pcl/console/print.h>
#include <pcl/io/pcd_io.h>
#include <flann/flann.h>
#include <flann/io/hdf5.h>
#include <QtWidgets/QtWidgets>
#include <pcl/features/normal_3d_omp.h>
#include <pcl/features/shot_omp.h>
#include <pcl/features/board.h>
#include <pcl/keypoints/uniform_sampling.h>
//#include <pcl/filters/uniform_sampling.h>
#include <pcl/recognition/cg/hough_3d.h>
#include <pcl/recognition/cg/geometric_consistency.h>
#include <pcl_conversions/pcl_conversions.h>
#include <sensor_msgs/PointCloud2.h>
#include <std_msgs/String.h>
#include <tf/transform_broadcaster.h>

class nearestNeighbors {

    public:
        typedef pcl::PointXYZRGBA PointT;

        nearestNeighbors(ros::NodeHandle nh);
        virtual ~nearestNeighbors();

        int findNeighbors(int clusterIndex, pcl::PointCloud<pcl::VFHSignature308>::Ptr vfh, pcl::PointCloud<PointT>::Ptr cloud);

    private:
        std::string kdtree_idx_file_name = "kdtree.idx";
        std::string training_data_h5_file_name = "training_data.h5";
        std::string training_data_list_file_name = "training_data.list";

        ros::Publisher pubCloud;
        ros::Publisher pubObject;

        std::vector<std::string> models;
        flann::Matrix<float> data;
        Index<ChiSquareDistance<float>> *index;

        bool loadFileList(std::vector<std::string> &models, const std::string &filename);

        void nearestKSearch(Index<ChiSquareDistance<float>> *index, const pcl::PointCloud<pcl::VFHSignature308>::ConstPtr &model, int k, Matrix<int> &indices, Matrix<float> &distances);
};

#endif //PROJECT_NEAREST_NEIGHBORS_H
