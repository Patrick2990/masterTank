//
// Created by thor on 9/30/16.
//

#ifndef PROJECT_MASTERTANKOBJECTPLOTTER_H
#define PROJECT_MASTERTANKOBJECTPLOTTER_H


#include <ros/ros.h>
#include <find_object_2d/ObjectsStamped.h>


class MasterTankObjectPlotter {
public:
    MasterTankObjectPlotter(ros::NodeHandle* nh_ptr);

private:
    ros::NodeHandle* nh_ptr;
    ros::Subscriber objSub;
    void objectFound_cb(const find_object_2d::ObjectsStamped &object);
};


#endif //PROJECT_MASTERTANKOBJECTPLOTTER_H
