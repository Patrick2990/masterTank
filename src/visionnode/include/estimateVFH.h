#ifndef PROJECT_ESTIMATEVFH_H
#define PROJECT_ESTIMATEVFH_H

#include <pcl/point_types.h>
#include <pcl/features/vfh.h>
#include <pcl/io/pcd_io.h>
#include <pcl/io/pcd_io.h>
#include <pcl/features/normal_3d_omp.h>

class estimateVFH {

    private:
        typedef pcl::PointXYZRGBA PointT;
        typedef pcl::Normal NormalType;

    public:
        pcl::PointCloud<pcl::VFHSignature308>::Ptr getVFH(pcl::PointCloud<PointT>::Ptr cloud);
};
#endif //PROJECT_ESTIMATEVFH_H
