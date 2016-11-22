#include "MasterTankMarch.h"

using namespace std;

MasterTankMarch::MasterTankMarch() : moveClient("move_base", true) {

}

void MasterTankMarch::moveTo(std::string frameID, float x, float y) {
    std::stringstream objectFrameID_ss;

    currentMarchGoal.target_pose.header.stamp = ros::Time::now();

    currentMarchGoal.target_pose.pose.position.x = x;
    currentMarchGoal.target_pose.pose.position.y = y;
    currentMarchGoal.target_pose.pose.orientation.w = 1.0;

    cout << ("Sending goal") << endl;
    moveClient.sendGoal(currentMarchGoal, boost::bind(&MasterTankMarch::doneMarching_cb, this, _1, _2),
            boost::bind(&MasterTankMarch::activeMarch_cb, this),
            boost::bind(&MasterTankMarch::feedbackMarch_cb, this, _1));


}

void MasterTankMarch::moveTo(move_base_msgs::MoveBaseGoal goal, std::function<void(int, int, MasterTankMarch *tankMoverPtr) > donefunk) {
    // Remember last position
    currentMarchGoal = goal;
    doneExtern = donefunk;
    
    // test - below sending goal must be outcommented for testing
//    doneExtern(4, 2, this);

    cout << ("Sending object goal") << endl;
    moveClient.sendGoal(goal, boost::bind(&MasterTankMarch::doneMarching_cb, this, _1, _2),
            boost::bind(&MasterTankMarch::activeMarch_cb, this),
            boost::bind(&MasterTankMarch::feedbackMarch_cb, this, _1));
}

bool MasterTankMarch::waitForServer(float interval) {
    return false;
}

void MasterTankMarch::doneMarching_cb(const actionlib::SimpleClientGoalState &state,
        const move_base_msgs::MoveBaseResultConstPtr &result) {
    cout << "doneMarching_cb" << endl;
    doneExtern(currentX, currentY, this);
}

void MasterTankMarch::activeMarch_cb() {
    cout << ("activeMarch_cb") << endl;
}

int feedbackDevider = 0;

void MasterTankMarch::feedbackMarch_cb(const move_base_msgs::MoveBaseFeedbackConstPtr &feedback) {
    if (++feedbackDevider > 10) {
        cout << ("feedbackMarch_cb x:") << feedback->base_position.pose.position.x <<
                " y " << feedback->base_position.pose.position.y << endl;



        feedbackDevider = 0;
    }
    currentX = feedback->base_position.pose.position.x;
    currentY = feedback->base_position.pose.position.y;
}

void MasterTankMarch::halt() {
    moveClient.cancelAllGoals();
}

bool MasterTankMarch::readyToGo() {
    return moveClient.isServerConnected();
}
