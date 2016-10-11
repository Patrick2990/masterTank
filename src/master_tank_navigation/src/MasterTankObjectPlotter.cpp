//
// Created by thor on 9/30/16.
//

#include "MasterTankObjectPlotter.h"
MasterTankObjectPlotter::MasterTankObjectPlotter(ros::NodeHandle *nh_ptr) : nh_ptr(nh_ptr),
                                                                            objSub(nh_ptr->subscribe("/objectsStamped", 10, &MasterTankObjectPlotter::objectFound_cb, this))
{

}

void MasterTankObjectPlotter::objectFound_cb(const find_object_2d::ObjectsStamped &object) {

}


