#include "euclidCluster.h"

void euclidCluster::getRosImage(const sensor_msgs::PointCloud2ConstPtr ros_cloud) {
    pcl::fromROSMsg(*ros_cloud, *cloud);
    sceneReady = true;
}

euclidCluster::euclidCluster(ros::NodeHandle nh) : cloud(new pcl::PointCloud<euclidCluster::PointT>()),
                                                   cloudWorking(new pcl::PointCloud<euclidCluster::PointT>()) {
    this->nh = nh;
    // selecting GPU and prining info
    int device = 0;
/*    pcl::gpu::setDevice (device);
    pcl::gpu::printShortCudaDeviceInfo (device);*/
}

euclidCluster::~euclidCluster() {
    delete(&cloud);
    delete(&cloudWorking);
}

void euclidCluster::runThread() {
    ros::Subscriber cloud_subscriber = nh.subscribe("/camera/depth_registered/points", 10, &euclidCluster::getRosImage, this);

    while (ros::ok()) {
        ros::spinOnce();
    }
}

std::vector<pcl::PointCloud<euclidCluster::PointT>::Ptr> euclidCluster::getCluster() {
   // pcl::PointCloud<PointT>::Ptr cloud_filtered(new pcl::PointCloud<PointT>);
    // Copy PointCloud to work-copy
    copyPointCloud(*cloud, *cloudWorking);

    // Print initial cloud size DEBUG
    std::cout << "\nPointCloud before filtering has: " << cloudWorking->points.size() << " data points." << std::endl;


    /*
    // Create the filtering object: downsample the dataset using a leaf size of 1cm
    pcl::VoxelGrid<PointT> vg;
    vg.setInputCloud(cloudWorking);
    vg.setLeafSize(0.01f, 0.01f, 0.01f);
    vg.filter(*cloud_filtered);
    */

    // Build a passthrough filter to remove spurious NaNs
    pcl::PointCloud<PointT>::Ptr cloud_filtered(new pcl::PointCloud<PointT>);
    pcl::PassThrough<PointT> pass;
    pass.setInputCloud(cloudWorking);
    pass.setFilterFieldName("z");
    pass.setFilterLimits(0, 1.5);
    pass.filter(*cloud_filtered);

    // Save time to cloud
    ros::Time now = ros::Time::now();
    cloud_filtered->header.stamp = now.toNSec();

    std::cout << "\nPointCloud after filtering has: " << cloud_filtered->points.size() << " data points." << std::endl;
    //std::vector<int> MappingIndex;
    //pcl::removeNaNFromPointCloud(*cloud_filtered, *cloud_filtered, MappingIndex);

    pcl::search::KdTree<PointT>::Ptr tree(new pcl::search::KdTree<PointT>());
    /*
        // Estimate point normals
        pcl::PointCloud<pcl::Normal>::Ptr cloud_normals(new pcl::PointCloud<pcl::Normal>);
        pcl::NormalEstimation<PointT, pcl::Normal> ne;
        ne.setSearchMethod(tree);
        ne.setInputCloud(cloud_filtered);
        ne.setKSearch(50);
        ne.compute(*cloud_normals);
   */
/*    pcl::gpu::Feature::PointCloud cloud_d;
    cloud_d.create(cloud_filtered->width * cloud_filtered->height);
    std::vector<pcl::gpu::Feature::PointType> points;
    pcl::console::print_error("Ehhh1\n");
    for (size_t i = 0; i < cloud_filtered->points.size(); ++i) {
        pcl::gpu::Feature::PointType *pt = new pcl::gpu::Feature::PointType();
        pt->x = cloud_filtered->points[i].x;
        pt->y = cloud_filtered->points[i].y;
        pt->z = cloud_filtered->points[i].z;
        points.push_back(*pt);
    }
    pcl::console::print_error("Converted points\n");
    cloud_d.upload(points);

    pcl::console::print_error("Uploaded points to GPU\n");

    pcl::gpu::Feature::Normals normals;
    normals.create(cloud_filtered->width * cloud_filtered->height);
    pcl::gpu::NormalEstimation ne;
    ne.setInputCloud(cloud_d);
    ne.setViewPoint(0,0,0);
    ne.setRadiusSearch(0.03, 50);
    ne.compute(normals);

    pcl::console::print_error("Computed normals on GPU\n");

    pcl::PointCloud<pcl::Normal>::Ptr cloud_normals(new pcl::PointCloud<pcl::Normal>());
    cloud_normals->width = cloud_filtered->width;
    cloud_normals->height = cloud_filtered->height;
    cloud_normals->resize(cloud_normals->width * cloud_normals->height);
    cloud_d.download((pcl::gpu::Octree::PointType*) &(cloud_normals->points[0]));

    pcl::console::print_error("Downloaded %d normals from GPU\n", cloud_normals->points.size());
*/

    // Print cloud size after filter DEBUG
    std::cout << "PointCloud after filtering has: " << cloud_filtered->points.size() << " data points." << std::endl;

    // Create the segmentation object for the planar model and set all the parameters
    pcl::SACSegmentation<PointT> seg;
    pcl::PointIndices::Ptr inliers_plane(new pcl::PointIndices);
    pcl::ModelCoefficients::Ptr coefficients_plane(new pcl::ModelCoefficients);
    seg.setOptimizeCoefficients(true);
    seg.setModelType(pcl::SACMODEL_PLANE);
    //seg.setNormalDistanceWeight(0.1);
    seg.setMethodType(pcl::SAC_RANSAC);
    seg.setMaxIterations(100);
    seg.setDistanceThreshold(0.03);
    seg.setInputCloud(cloud_filtered);
   // seg.setInputNormals(cloud_normals);

    // Obtain the plane inliers and coefficients
    seg.segment(*inliers_plane, *coefficients_plane);
    std::cout << "Planar inliers size is: " << inliers_plane->indices.size() << std::endl;
    std::cout << "Planar coefficients size is: " << coefficients_plane->values.size() << std::endl;

    pcl::PointCloud<pcl::PointXYZRGBA>::Ptr cloud_f(new pcl::PointCloud<pcl::PointXYZRGBA>);

    // Remove the planar inliers, extract the rest
    pcl::ExtractIndices<PointT> extract_normals;
//    pcl::search::KdTree<PointT>::Ptr tree(new pcl::search::KdTree<PointT>());

    extract_normals.setInputCloud(cloud_filtered);
    extract_normals.setIndices(inliers_plane);
    extract_normals.setNegative(true);
    extract_normals.filter(*cloud_f);
    *cloud_filtered = *cloud_f;

    // Creating the KdTree object for the search method of the extraction
    tree->setInputCloud(cloud_filtered);

    // Extract clusters
    std::vector<pcl::PointIndices> cluster_indices;
    pcl::EuclideanClusterExtraction<PointT> ec;
    ec.setClusterTolerance(0.01);
    ec.setMinClusterSize(600);
    ec.setMaxClusterSize(10000);
    ec.setSearchMethod(tree);
    ec.setInputCloud(cloud_filtered);
    ec.extract(cluster_indices);

    // Save clusters to vector
    std::vector<pcl::PointCloud<PointT>::Ptr> clusterVector;
    int j = 0;
    for (std::vector<pcl::PointIndices>::const_iterator it = cluster_indices.begin(); it != cluster_indices.end(); ++it) {
        pcl::PointCloud<PointT>::Ptr cloud_cluster(new pcl::PointCloud<PointT>);
        for (std::vector<int>::const_iterator pit = it->indices.begin(); pit != it->indices.end(); ++pit)
            cloud_cluster->points.push_back(cloud_filtered->points[*pit]);
        cloud_cluster->width = (uint32_t) cloud_cluster->points.size();
        cloud_cluster->height = 1;
        cloud_cluster->is_dense = true;
        //cloud_cluster->header.stamp = cloud_filtered->header.stamp;

        std::cout << "PointCloud representing the Cluster: " << cloud_cluster->points.size() << " data points." << std::endl;
        clusterVector.push_back(cloud_cluster);
        j++;
    }

    return clusterVector;
}

