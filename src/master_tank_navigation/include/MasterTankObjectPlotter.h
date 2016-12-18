#ifndef PROJECT_MASTERTANKOBJECTPLOTTER_H
#define PROJECT_MASTERTANKOBJECTPLOTTER_H

#include <ros/ros.h>
#include <find_object_2d/ObjectsStamped.h>
#include <tf/transform_listener.h>
#include <move_base_msgs/MoveBaseAction.h>
#include "MasterTankMain.h"
#include "MasterTankMover.h"
#include <map>
#include "../../devel/include/master_tank_navigation/PointCloud2Object.h"
#include <string.h>

class MasterTankObjectPlotter {
public:
    MasterTankObjectPlotter(ros::NodeHandle* nh_ptr);
    void fetchObjects(float xRobotPos, float yRobotPos, MasterTankMarch *tankMoverPtr);
    void doneFetching(int x, int y, MasterTankMarch *tankMoverPtr);

    // #### TESTING - Should be private later? #### // 
    std::map<std::string, move_base_msgs::MoveBaseGoal> objects;
    // #### TESTING - Should be private later? #### // 

private:
    ros::NodeHandle* nh_ptr;
    ros::Subscriber objSub;
    ros::Subscriber objSub3d;
    //    void objectFound_cb(const find_object_2d::ObjectsStampedConstPtr &object);
    void objectFound3d_cb(const master_tank_navigation::PointCloud2ObjectConstPtr &msg);
    void objectFound2d_cb(const find_object_2d::ObjectsStampedConstPtr &msg);
    tf::TransformListener tfListener_;
    std::string findClosestObject(float xRobotPos, float yRobotPos);



};

#endif //PROJECT_MASTERTANKOBJECTPLOTTER_H
