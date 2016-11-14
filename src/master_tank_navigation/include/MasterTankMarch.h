//
// Created by thor on 9/30/16.
//

#ifndef PROJECT_MASTERTANKMARCH_H
#define PROJECT_MASTERTANKMARCH_H

#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>


class MasterTankMarch {
public:

    MasterTankMarch();
    void moveTo(std::string frameID,float x,float y);
    void moveTo(move_base_msgs::MoveBaseGoal goal);
    bool waitForServer(float interval);
    void halt();
    bool readyToGo();

private:
    typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;
    MoveBaseClient moveClient;
    move_base_msgs::MoveBaseGoal currentMarchGoal;
    void doneMarching_cb(const actionlib::SimpleClientGoalState& state, const move_base_msgs::MoveBaseResultConstPtr& result);
    void activeMarch_cb();
    void feedbackMarch_cb(const move_base_msgs::MoveBaseFeedbackConstPtr& feedback);
};


#endif //PROJECT_MASTERTANKMARCH_H
