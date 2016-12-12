#include "nearestNeighbors.h"
#include "euclidCluster.h"
#include "../../../devel/include/visionnode/PointCloud2Object.h"

nearestNeighbors::nearestNeighbors(ros::NodeHandle nh) {

    // Check if the data has already been saved to disk
    if (!boost::filesystem::exists(training_data_h5_file_name) || !boost::filesystem::exists(training_data_list_file_name)) {
        pcl::console::print_error("Could not find training data models files %s and %s!\n", training_data_h5_file_name.c_str(), training_data_list_file_name.c_str());
        exit(-1);
    } else {
        loadFileList(models, training_data_list_file_name);
        flann::load_from_file(data, training_data_h5_file_name, "training_data");
    }

    // Check if the tree index has already been saved to disk
    if (!boost::filesystem::exists(kdtree_idx_file_name)) {
        pcl::console::print_error("Could not find kd-tree index in file %s!", kdtree_idx_file_name.c_str());
        exit(-1);
    } else {
        index = new flann::Index<flann::ChiSquareDistance<float>>(data, flann::SavedIndexParams(kdtree_idx_file_name));
        index->buildIndex();
        pubObject = nh.advertise<visionnode::PointCloud2Object>("/vision/object", 20);
        pubCloud = nh.advertise<sensor_msgs::PointCloud2>("/vision/cloud", 20);
    }
}

nearestNeighbors::~nearestNeighbors() {
    delete(index);
}

inline void nearestNeighbors::nearestKSearch(Index<ChiSquareDistance<float>> *index, const pcl::PointCloud<pcl::VFHSignature308>::ConstPtr &model, int k, flann::Matrix<int> &indices, flann::Matrix<float> &distances) {

    // Query point
    flann::Matrix<float> p = flann::Matrix<float>(new float[308], 1, 308);
    memcpy(&p.ptr()[0], &model->points[0].histogram[0], p.cols * p.rows * sizeof (float));

    indices = flann::Matrix<int>(new int[k], 1, (size_t) k);
    distances = flann::Matrix<float>(new float[k], 1, (size_t) k);
    index->knnSearch(p, indices, distances, (size_t) k, flann::SearchParams(512));
    delete[] p.ptr();
}

bool nearestNeighbors::loadFileList(std::vector<std::string> &models, const std::string &filename) {

    // Get path to models & save to vector
    ifstream fs;
    fs.open(filename.c_str());
    if (!fs.is_open() || fs.fail())
        return (false);

    std::string line;
    while (!fs.eof()) {
        getline(fs, line);
        if (line.empty())
            continue;
        std::string m;
        m = line;
        models.push_back(m);
    }
    fs.close();
    return (true);
}

int nearestNeighbors::findNeighbors(int clusterIndex, pcl::PointCloud<pcl::VFHSignature308>::Ptr vfh, pcl::PointCloud<euclidCluster::PointT>::Ptr cloud) {

    int k = 6;

    flann::Matrix<int> k_indices;
    flann::Matrix<float> k_distances;

    // Do search
    nearestKSearch(index, vfh, k, k_indices, k_distances);

    // Output the results on screen
    pcl::console::print_info("The closest %d neighbors for cluster %d are:\n", k, clusterIndex);
    for (int i = 0; i < k; ++i) {
        const char *info;

        // If distance is below 100 treat as match, do TF and publish
        if (k_distances[0][i] < 90) {
            info = "Match!";

            // Copy PCL cloud to ROS msg
            sensor_msgs::PointCloud2 ros_cloud;
            pcl::toROSMsg(*cloud, ros_cloud);

            // Set cloud time and frame
            ros::Time now;
            ros_cloud.header.stamp = now.fromNSec(cloud->header.stamp);
            ros_cloud.header.frame_id = "camera_depth_optical_frame";
            //            ros_cloud.header.frame_id = "camera_link";


            // Set rotation and origin
           // tf::Quaternion q(cloud->sensor_orientation_.x(), - cloud->sensor_orientation_.y(), cloud->sensor_orientation_.z(), cloud->sensor_orientation_.w());
            tf::Transform transform;
            transform.setOrigin(tf::Vector3(cloud->points[0].x, cloud->points[0].y, cloud->points[0].z));
            tf::Quaternion q(tf::Vector3(cloud->points[0].x, cloud->points[0].y, cloud->points[0].z), 3.14);
            transform.setRotation(q);

            // Broadcast TF
            static tf::TransformBroadcaster br;
            br.sendTransform(tf::StampedTransform(transform, ros_cloud.header.stamp, "camera_depth_optical_frame", "object"));

            // Copy object cloud to custom message
            visionnode::PointCloud2Object pointCloud2Object;
            pointCloud2Object.data = ros_cloud.data;
            pointCloud2Object.header = ros_cloud.header;
            pointCloud2Object.height = ros_cloud.height;
            pointCloud2Object.fields = ros_cloud.fields;
            pointCloud2Object.is_bigendian = ros_cloud.is_bigendian;
            pointCloud2Object.is_dense = ros_cloud.is_dense;
            pointCloud2Object.point_step = ros_cloud.point_step;
            pointCloud2Object.row_step = ros_cloud.row_step;
            pointCloud2Object.width = ros_cloud.width;
            std::string model_name = models.at((unsigned long) k_indices[0][i]).c_str();


            std::size_t pos = model_name.find("data/");

            pcl::console::print_error("Got match with model: %s\n", model_name.substr(pos + 5, 4).c_str());
            pointCloud2Object.object = model_name.substr(pos + 5, 4).c_str();
            pubObject.publish(pointCloud2Object);
            pubCloud.publish(ros_cloud);
        } else
            info = "";
        pcl::console::print_highlight("%s with a distance of: %f %s\n", models.at((unsigned long) k_indices[0][i]).c_str(), k_distances[0][i], info);
    }

    return (0);
}