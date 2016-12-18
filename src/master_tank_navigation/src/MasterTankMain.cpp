#include <ros/ros.h>
#include <MasterTankExplore.h>
#include <bits/signum.h>
#include <signal.h>
#include <MasterTankObjectPlotter.h>
#include <MasterTankMover.h>
#include <MasterTankMain.h>
using namespace std;


// ### Private variables ###
MasterTankExplore *tankExplorePtr;
MasterTankMarch *tankMoverPtr;
MasterTankObjectPlotter *tankObjectPlotterPtr;
ros::Timer timer;
masterStates_e masterTankState = INITALISING;


// ### Private prototypes ###
void test();
void shutdownSignal(int sig);

std::string enumToString(masterStates_e masterState) {
    switch (masterState) {
        case INITALISING:
            return "INITALISING";
        case EXPLORING:
            return "EXPLORING";
        case FECHING_OBJECT:
            return "FECHING_OBJECT";
        case GO_HOME:
            return "GO_HOME";
        case FINISH:
            return "FINISH";
        case ALL_STATE_COUNT:
            return "ALL_STATE_COUNT";
        default:
            return "INVALID ENUM";
    }
}

float exploreSize = 10.5240;

masterStates_e init() {
    if (tankExplorePtr->readyToGo() && tankMoverPtr->readyToGo()) {
        cout << "Ready to go" << endl;

        tankExplorePtr->setSimpleExploreSquare(exploreSize);
        tankExplorePtr->goExplore();
        return EXPLORING;
    }
    return INITALISING;
}

void stateMachineGunFire() {

    cout << "Current state: " << enumToString(masterTankState) << endl;

    switch (masterTankState) {

        case INITALISING:
            masterTankState = EXPLORING;
            tankMoverPtr->rotate(); //this should be in init map state
            //            
            break;
        case EXPLORING:
            masterTankState = FECHING_OBJECT;
            tankExplorePtr->setSimpleExploreSquare(exploreSize);
            tankExplorePtr->goExplore();
            break;
        case FECHING_OBJECT:
            masterTankState = GO_HOME;
            tankObjectPlotterPtr->fetchObjects(0, 0, tankMoverPtr);
            // State is changed inside MasterTankExplore doneExploreTask_cb 
            break;
        case GO_HOME:
            masterTankState = FINISH;
            tankMoverPtr->goHome();
            // State is changed inside MasterTankObjectPlotter
            break;
        case FINISH:
            //            timer.stop();
            shutdownSignal(0);
            break;
        default:
            cout << "ERROR!! Unknown state in statemachine. Current state: " << masterTankState << endl;
            break;
    }
}

//void heartbeat(const ros::TimerEvent &event) {
//    stateMachineGunFire();
//    //    cout << "Heartbeat!!!" << endl;   
//}

void shutdownSignal(int sig) {
    cout << "Caught signal!! Stopping action clients and canceling all goals" << endl;
    tankExplorePtr->abort();
    tankMoverPtr->halt();
    cout << "Killing node " << endl;
    ros::shutdown();
}


//==================== MAIN ==========================
//****************************************************
//====================================================

int main(int argc, char **argv) {

    std::cout << "Starting node  .." << std::endl;
    ros::init(argc, argv, "MasterTankMain");
    ros::NodeHandle nh;
    MasterTankExplore tankExploreInst;
    MasterTankMarch tankMoverInst;
    MasterTankObjectPlotter tankObjectPlotterInst(&nh);

    tankExplorePtr = &tankExploreInst;
    tankMoverPtr = &tankMoverInst;
    tankObjectPlotterPtr = &tankObjectPlotterInst;

    signal(SIGINT, shutdownSignal);

    //    boost::thread kepressThread(&kepressThread);
    //    timer = nh.createTimer(ros::Duration(0.5), &heartbeat);


#ifdef TEST_MODE_ENABLED
    test();
#endif
    while (!(tankExplorePtr->readyToGo() && tankMoverPtr->readyToGo())) {//initilising 
    }
    cout << "Ready to go" << endl;
    stateMachineGunFire();

    cout << "All is up! Start spinning... " << endl;
    ros::spin();
    cout << "Exiting main func.\nGoodbye!" << endl;
    return 0;
}

void test() {

    move_base_msgs::MoveBaseGoal currentGoal;
    move_base_msgs::MoveBaseGoal currentGoal1;
    move_base_msgs::MoveBaseGoal currentGoal2;
    move_base_msgs::MoveBaseGoal currentGoal3;
    currentGoal.target_pose.pose.position.x = 1;
    currentGoal.target_pose.pose.position.y = 1;

    currentGoal1.target_pose.pose.position.x = 10;
    currentGoal1.target_pose.pose.position.y = 10;


    currentGoal2.target_pose.pose.position.x = 5;
    currentGoal2.target_pose.pose.position.y = 5;


    currentGoal3.target_pose.pose.position.x = -21;
    currentGoal3.target_pose.pose.position.y = 1;


    // insert goal in map
    tankObjectPlotterPtr->objects["Test"] = currentGoal;
    tankObjectPlotterPtr->objects["Test1"] = currentGoal1;
    tankObjectPlotterPtr->objects["Test2"] = currentGoal2;
    tankObjectPlotterPtr->objects["Test3"] = currentGoal3;

    // Beginning state of test
    masterTankState = FECHING_OBJECT;
}

