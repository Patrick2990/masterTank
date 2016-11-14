//
// Created by thor on 9/30/16.
//

#include "MasterTankObjectPlotter.h"
#include "MasterTankMain.h"
#include "MasterTankMarch.h"
#include <iostream>
using namespace std;

MasterTankObjectPlotter::MasterTankObjectPlotter(ros::NodeHandle *nh_ptr) : nh_ptr(nh_ptr),
objSub(nh_ptr->subscribe("/objectsStamped", 1, &MasterTankObjectPlotter::objectFound_cb, this)) {
    cout << "starting MasterTankObjectPlotter" << endl;

}

void MasterTankObjectPlotter::objectFound_cb(const find_object_2d::ObjectsStampedConstPtr &msg) {
    //    cout << "starting objectFound_cb" << endl;
    if (msg->objects.data.size()) {
        for (unsigned int i = 0; i < msg->objects.data.size(); i += 12) {
            // get data
            int id = (int) msg->objects.data[i];

            std::stringstream objectFrameId_ss;
            objectFrameId_ss << "object_" << id;
            std::string objectFrameId = objectFrameId_ss.str();

            tf::StampedTransform pose;
            tf::StampedTransform poseCam;
            try {
                // Get transformation from "object_#" frame to target frame "map"
                // The timestamp matches the one sent over TF
                tfListener_.lookupTransform("/map", objectFrameId, msg->header.stamp, pose);
                tfListener_.lookupTransform(msg->header.frame_id, objectFrameId, msg->header.stamp, poseCam);
            } catch (tf::TransformException & ex) {
                cout << (ex.what()) << endl;
                continue;
            }

            // Here "pose" is the position of the object "id" in "/map" frame.
            printf("Object_%d [x,y,z] [x,y,z,w] in \"%s\" frame: [%f,%f,%f] [%f,%f,%f,%f]",
                    id, "/map",
                    pose.getOrigin().x(), pose.getOrigin().y(), pose.getOrigin().z(),
                    pose.getRotation().x(), pose.getRotation().y(), pose.getRotation().z(), pose.getRotation().w());

            currentMarchGoal.target_pose.header.stamp = ros::Time::now();
            currentMarchGoal.target_pose.header.frame_id = "/map";
            currentMarchGoal.target_pose.pose.position.x = pose.getOrigin().x();
            currentMarchGoal.target_pose.pose.position.y = pose.getOrigin().y();
            currentMarchGoal.target_pose.pose.position.z = 0;
            currentMarchGoal.target_pose.pose.orientation.w = pose.getRotation().w();

            //            printf("Object_%d [x,y,z] [x,y,z,w] in \"%s\" frame: [%f,%f,%f] [%f,%f,%f,%f]",
            //                    id, msg->header.frame_id.c_str(),
            //                    poseCam.getOrigin().x(), poseCam.getOrigin().y(), poseCam.getOrigin().z(),
            //                    poseCam.getRotation().x(), poseCam.getRotation().y(), poseCam.getRotation().z(), poseCam.getRotation().w());
        }
    }
}

masterStates_e MasterTankObjectPlotter::fetchObjects(MasterTankMarch *tankMoverPtr) {
    cout << ("Fetching objects inside MasterTankObjectPlotter") << endl;
    cout << "Fetching objects. Sending goal - x: " << currentMarchGoal.target_pose.pose.position.x 
            << " y: " << currentMarchGoal.target_pose.pose.position.y
            << " w: " << currentMarchGoal.target_pose.pose.orientation.w
            << endl;
    tankMoverPtr->moveTo(currentMarchGoal);
    return FINISH;
}


