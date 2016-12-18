#include "MasterTankObjectPlotter.h"
#include "MasterTankMain.h"
#include "MasterTankMover.h"
#include <iostream>
#include <algorithm> 
#include <cmath> 
#include <functional>

using namespace std;
#define  PINGPONG_BOX 7
#define  BOOL_ELEKTRONICS 9
#define  BOOK_LINARCIRCUILTS 11

MasterTankObjectPlotter::MasterTankObjectPlotter(ros::NodeHandle *nh_ptr) : nh_ptr(nh_ptr),
//objSub3d(nh_ptr->subscribe("/vision/object", 1, &MasterTankObjectPlotter::objectFound3d_cb, this)),
objSub(nh_ptr->subscribe("/objectsStamped", 1, &MasterTankObjectPlotter::objectFound2d_cb, this))
{
    cout << "starting MasterTankObjectPlotter" << endl;
}

void MasterTankObjectPlotter::fetchObjects(float xRobotPos, float yRobotPos, MasterTankMarch *tankMoverPtr) {

    // find closest object from current robot position
    string closestObject = findClosestObject(xRobotPos, yRobotPos);

    if (!closestObject.empty()) {
        cout << "Found object to visit!" << endl;
        
        cout << "Objects contains:" << endl;
        for (auto& object : objects) {
            std::cout << object.first << ":" << endl << "{" << object.second.target_pose.pose.position.x << "," << object.second.target_pose.pose.position.y << "}" << endl;
        }
        
        move_base_msgs::MoveBaseGoal goal = objects.at(closestObject);
        cout << "Fetching object at: " << goal.target_pose.pose.position.x << " , " << goal.target_pose.pose.position.y << endl;
        // removes object when visited
        cout << "Removing: " << closestObject << endl;
        objects.erase(closestObject);

        tankMoverPtr->moveTo(goal, std::bind(&MasterTankObjectPlotter::doneFetching, this, std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
    } else {
        // no more objects
        cout << "Finished fetching objects!" << endl;
        stateMachineGunFire();
    }
}

void MasterTankObjectPlotter::doneFetching(int x, int y, MasterTankMarch *tankMoverPtr) {
    cout << "Done fetching. New robot position: " << x << " " << y << endl;
    fetchObjects(x, y, tankMoverPtr);
}

void MasterTankObjectPlotter::objectFound2d_cb(const find_object_2d::ObjectsStampedConstPtr &msg) {
    //    cout << "starting objectFound_cb" << endl;
    
    if(masterTankState != FECHING_OBJECT){
        return;
    }
    
    if (msg->objects.data.size()) {
        for (unsigned int i = 0; i < msg->objects.data.size(); i += 12) {
            // get data
            int id = (int) msg->objects.data[i];
            cout << "object2d id: " << id << endl;

            std::stringstream objectFrameId_ss;
            objectFrameId_ss << "object_" << id;
            std::string objectFrameId = objectFrameId_ss.str();

            tf::StampedTransform pose;
            tf::StampedTransform poseCam;
            try {
                // Get transformation from "object_#" frame to target frame "map"
                // The timestamp matches the one sent over TF

                tfListener_.lookupTransform("/map", objectFrameId, msg->header.stamp, pose);
                //                tfListener_.lookupTransform(msg->header.frame_id, objectFrameId, msg->header.stamp, poseCam);
            } catch (tf::TransformException & ex) {
                cout << "###### tfListener_.lookupTransform failed #####  \n" << (ex.what()) << endl;
                continue;
            }

            printf("Object [x,y,z] [x,y,z,w] in \"%s\" frame: [%f, %f,%f] [%f,%f,%f,%f]",
                    "/map",
                    pose.getOrigin().x(), pose.getOrigin().y(), pose.getOrigin().z(),
                    pose.getRotation().x(), pose.getRotation().y(), pose.getRotation().z(), pose.getRotation().w());

            cout << endl;

            move_base_msgs::MoveBaseGoal currentGoal;
            currentGoal.target_pose.pose.position.x = pose.getOrigin().x() - 0.9; // Adjust for not colliding with object. Temp solution
            currentGoal.target_pose.pose.position.y = pose.getOrigin().y();
            currentGoal.target_pose.header.stamp = ros::Time::now();
            currentGoal.target_pose.header.frame_id = "map";
            currentGoal.target_pose.pose.position.z = 0.0;
            currentGoal.target_pose.pose.orientation.w = 1.0;

            // insert goal in map
//            if (id <= PINGPONG_BOX) {
//                objects["pingPongBox"] = currentGoal;
//
//            } else if (id <= BOOL_ELEKTRONICS) {
//                objects["elektronics"] = currentGoal;
//
//            } else if (id <= BOOK_LINARCIRCUILTS) {
//                objects["linar"] = currentGoal;
//            }
            
            if (id == 70 || id == 71) {
                objects["linar"] = currentGoal;
                cout << "Updating linar" << endl;

            } else if (id == 69 || id == 68) {
                objects["elektronics"] = currentGoal;
                cout << "Updating elektronics" << endl;

            } else {
                objects["pingPongBox"] = currentGoal;
                cout << "Updating pingPongBox" << endl;
            }

        }
    }

}

void MasterTankObjectPlotter::objectFound3d_cb(const master_tank_navigation::PointCloud2ObjectConstPtr & msg) {
    
    if(masterTankState != FECHING_OBJECT){
        return;
    }
    
    cout << "Received from 3d: " << msg->object << endl;

    std::stringstream objectFrameId_ss;
    objectFrameId_ss << msg->header.frame_id;
    std::string objectFrameId = objectFrameId_ss.str();
    cout << "objectFrameId from 3d: " << objectFrameId << endl;

    tf::StampedTransform pose;
    try {
        tfListener_.lookupTransform("/map", objectFrameId, ros::Time::now(), pose);
    } catch (tf::TransformException & ex) {
        cout << "###### tfListener_.lookupTransform failed #####  \n" << (ex.what()) << endl;
    }

    printf("Object [x,y,z] [x,y,z,w] in \"%s\" frame: [%f, %f,%f] [%f,%f,%f,%f]",
            "/map",
            pose.getOrigin().x(), pose.getOrigin().y(), pose.getOrigin().z(),
            pose.getRotation().x(), pose.getRotation().y(), pose.getRotation().z(), pose.getRotation().w());

    cout << endl;

    move_base_msgs::MoveBaseGoal currentGoal;
    currentGoal.target_pose.pose.position.x = pose.getOrigin().x() - 0.9; // Adjust for not colliding with object. Temp solution
    currentGoal.target_pose.pose.position.y = pose.getOrigin().y();
    currentGoal.target_pose.header.stamp = ros::Time::now();
    currentGoal.target_pose.header.frame_id = "map";
    currentGoal.target_pose.pose.position.z = 0.0;
    currentGoal.target_pose.pose.orientation.w = 1.0;

    // insert goal in map
    objects[msg->object] = currentGoal;
}

/**
 * 
 * @param xRobotPos
 * @param yRobotPos
 * @return the name of the closest object
 */
string MasterTankObjectPlotter::findClosestObject(float xRobotPos, float yRobotPos) {

    // find closest object to research
    string closestObject;
    float lowestDistance = 10000;
    for (auto& object : objects) {
        float deltaX = xRobotPos - object.second.target_pose.pose.position.x;
        float deltaY = yRobotPos - object.second.target_pose.pose.position.y;
        float distance = sqrt(deltaX * deltaX + deltaY * deltaY);

        std::cout << "Distance from " << object.first << " is: " << distance << endl;

        if (distance < lowestDistance) {
            lowestDistance = distance;
            closestObject = object.first;
        }
    }
    cout << "Closest object: " << closestObject << endl;
    return closestObject;
}




