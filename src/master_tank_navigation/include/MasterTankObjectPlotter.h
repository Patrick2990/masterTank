//
// Created by thor on 9/30/16.
//

#ifndef PROJECT_MASTERTANKOBJECTPLOTTER_H
#define PROJECT_MASTERTANKOBJECTPLOTTER_H


#include <ros/ros.h>
#include <find_object_2d/ObjectsStamped.h>
#include <tf/transform_listener.h>
#include <move_base_msgs/MoveBaseAction.h>
#include "MasterTankMain.h"
#include "MasterTankMarch.h"
#include <map>
#include "../../devel/include/master_tank_navigation/PointCloud2Object.h"



class MasterTankObjectPlotter {
public:
    MasterTankObjectPlotter(ros::NodeHandle* nh_ptr);
    masterStates_e fetchObjects(MasterTankMarch *tankMoverPtr);

private:
    ros::NodeHandle* nh_ptr;
    ros::Subscriber objSub;
    ros::Subscriber objSub3d;
    void objectFound_cb(const find_object_2d::ObjectsStampedConstPtr &object);
    void objectFound3d_cb(const master_tank_navigation::PointCloud2ObjectConstPtr &msg);
    tf::TransformListener tfListener_;
    move_base_msgs::MoveBaseGoal currentMarchGoal;
    std::map<int,move_base_msgs::MoveBaseGoal> objects;
};

#endif //PROJECT_MASTERTANKOBJECTPLOTTER_H
