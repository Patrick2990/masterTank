#ifndef PROJECT_MASTERTANKMARCH_H
#define PROJECT_MASTERTANKMARCH_H

#include <move_base_msgs/MoveBaseAction.h>
#include <actionlib/client/simple_action_client.h>
#include <functional>

class MasterTankMarch {
public:

    MasterTankMarch();
//    void moveTo(std::string frameID, float x, float y);
    void moveTo(move_base_msgs::MoveBaseGoal goal, std::function<void((int, int, MasterTankMarch *tankMoverPtr)) > doneExtern);
    bool waitForServer(float interval);
    void halt();
    bool readyToGo();
    void goHome();
    void rotate();
private:
    typedef actionlib::SimpleActionClient<move_base_msgs::MoveBaseAction> MoveBaseClient;
    MoveBaseClient moveClient;
    move_base_msgs::MoveBaseGoal currentMarchGoal;
//    void doneMarching_cb(const actionlib::SimpleClientGoalState& state, const move_base_msgs::MoveBaseResultConstPtr& result);
    void doneComingHome_cb(const actionlib::SimpleClientGoalState &state, const move_base_msgs::MoveBaseResultConstPtr &result);
    void doneRotate_cb(const actionlib::SimpleClientGoalState &state, const move_base_msgs::MoveBaseResultConstPtr &result);
    void doneFetching_cb(const actionlib::SimpleClientGoalState &state, const move_base_msgs::MoveBaseResultConstPtr &result);
    void activeMarch_cb();

    void feedbackMarch_cb(const move_base_msgs::MoveBaseFeedbackConstPtr& feedback);
    std::function<void(int, int, MasterTankMarch *tankMoverPtr) > doneExtern;
    int currentX;
    int currentY;


    unsigned char rotateCounter;

};


#endif //PROJECT_MASTERTANKMARCH_H
