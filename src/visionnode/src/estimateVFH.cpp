#include "euclidCluster.h"
#include "estimateVFH.h"

pcl::PointCloud<pcl::VFHSignature308>::Ptr estimateVFH::getVFH(pcl::PointCloud<PointT>::Ptr cloud) {

    pcl::PointCloud<pcl::Normal>::Ptr normals(new pcl::PointCloud<pcl::Normal>());

    pcl::NormalEstimationOMP<PointT, NormalType> norm_est;
    norm_est.setRadiusSearch(0.03);
    //norm_est.setKSearch(10);
    norm_est.setInputCloud(cloud);
    norm_est.compute(*normals);

    // Create the VFH estimation class, and pass the input dataset+normals to it
    pcl::VFHEstimation<PointT, pcl::Normal, pcl::VFHSignature308> vfh;
    vfh.setInputCloud(cloud);
    vfh.setInputNormals(normals);
    // alternatively, if cloud is of type PointNormal, do vfh.setInputNormals (cloud);

    // Create an empty kdtree representation, and pass it to the FPFH estimation object.
    // Its content will be filled inside the object, based on the given input dataset (as no other search surface is given).
    pcl::search::KdTree<PointT>::Ptr tree(new pcl::search::KdTree<PointT>());
    vfh.setSearchMethod(tree);

    // Output datasets
    pcl::PointCloud<pcl::VFHSignature308>::Ptr vfhs(new pcl::PointCloud<pcl::VFHSignature308>());

    // Compute the features
    vfh.compute(*vfhs);

    return(vfhs);
}