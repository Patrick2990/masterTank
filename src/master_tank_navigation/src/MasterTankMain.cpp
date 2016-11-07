#include <ros/ros.h>
#include <MasterTankExplore.h>
#include <bits/signum.h>
#include <signal.h>
#include <MasterTankObjectPlotter.h>
#include <MasterTankMarch.h>
#include <MasterTankMain.h>

using namespace std;

MasterTankExplore *tankExplorePtr;
MasterTankMarch *tankMoverPtr;
MasterTankObjectPlotter *tankObjectPlotterPtr;

masterStates_e masterTankState = INITALISING;

masterStates_e init() {
    if (tankExplorePtr->readyToGo() && tankMoverPtr->readyToGo()) {
        tankExplorePtr->setSimpleExploreSquare(20.0);
        tankExplorePtr->goExplore();
        return EXPLORING;
    }
    return INITALISING;
}

void stateMachineGunFire() {
    switch (masterTankState) {

        case INITALISING:
            masterTankState = init();
            break;
        case EXPLORING:

            break;
        case FECHING_OBJECT:

            break;

        default:

            break;
    }

}

void heartbeat(const ros::TimerEvent &event) {
//    cout << "heartbeat!!!" << endl;
    stateMachineGunFire();
}

void shutdownSignal(int sig) {
    cout << "\nCaught signal!! Stopping action clients and canceling all goals" << endl;
    tankExplorePtr->abort();
    tankMoverPtr->halt();
    cout << "Killing node " << endl;
    ros::shutdown();
}


//==================== MAIN ==========================
//****************************************************
//====================================================

int main(int argc, char **argv) {

    std::cout << "Starrting node  .." << std::endl;
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
    ros::Timer timer = nh.createTimer(ros::Duration(0.5), &heartbeat);
    cout << "All is up! Start spinning... " << endl;
    ros::spin();
    cout << "Exiting main func.\nGoodbye!" << endl;
    return 0;
}

