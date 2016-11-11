//
// Created by thor on 9/30/16.
//


#include "MasterTankExplore.h"

#define SQARE_BOUNDARY_POINTS 4

using namespace std;

MasterTankExplore::MasterTankExplore() : exploreClient("explore_server", true) {

}


// Called once when the goal completes
void MasterTankExplore::doneExploreTask_cb(const actionlib::SimpleClientGoalState &state,
                                           const frontier_exploration::ExploreTaskResultConstPtr &result) {
    cout << "Exploration finished in state " << state.toString() << endl;
//    cout << "Explored " << result. << endl;
}

// Called once when the goal becomes active
void MasterTankExplore::activeExploring_cb() {
    cout << ("Exploration goal just went active ") << endl;
}

// Called every time feedback is received for the goal
void MasterTankExplore::feedbackFromExplore_cb(const frontier_exploration::ExploreTaskFeedbackConstPtr &feedback) {
//    cout << "Got Feedback: x pos: " << feedback->base_position.pose.position.x << endl;
//    cout << "Got Feedback: y pos: " << feedback->base_position.pose.position.y << endl;
//    cout << "Got Feedback: z pos: " << feedback->base_position.pose.position.z << endl;

}


void MasterTankExplore::goExplore() {
    //Sanity check
    if (currentExploreArea.explore_boundary.polygon.points.size() < 4) {
        cout
                << "\033[1;31mNo explore boundaries!! Did you forget to set call \"setSimpleExploreSquare\" somewhere? \033[0m\n"
                << endl;
        return;
    }

//    cout << "In explore func" << endl;
//    frontier_exploration::ExploreTaskGoal goal;
//    geometry_msgs::PolygonStamped boundary;
//    geometry_msgs::Point32 p[SQARE_BOUNDARY_POINTS];
//
//    p[0].x = 30.0;
//    p[0].y = 30.0;
//    p[0].z = .0;
//
//    p[1].x = 30.0;
//    p[1].y = -30.0;
//    p[1].z = .0;
//
//    p[2].x = -30.0;
//    p[2].y = -30.0;
//    p[2].z = .0;
//
//    p[3].x = -30;
//    p[3].y = 30.0;
//    p[3].z = .0;
//
//    boundary.polygon.points.reserve(4);
//    boundary.header.seq = 0;
//    boundary.header.stamp = ros::Time::now();
//    boundary.header.frame_id = "map";
//
//    for (int i = 0; i < SQARE_BOUNDARY_POINTS; i++) {
//        boundary.polygon.points.push_back(p[i]);
//    }
//
//    geometry_msgs::PointStamped start_point;
//    start_point.point.x = start_point.point.y = start_point.point.z = 0.0;
//
//    goal.explore_center = start_point;
//    goal.explore_boundary = boundary;

    exploreClient.sendGoal(currentExploreArea, boost::bind(&MasterTankExplore::doneExploreTask_cb, this, _1, _2),
                           boost::bind(&MasterTankExplore::activeExploring_cb, this),
                           boost::bind(&MasterTankExplore::feedbackFromExplore_cb, this, _1));

//    exploreClient.waitForResult();
//    printf("Current State: %s\n", exploreClient.getState().toString().c_str());
//    if (exploreClient.getState() == actionlib::SimpleClientGoalState::SUCCEEDED)
//        cout << ("Exploreation succesfull") << endl;
//    else
//        cout << ("Exploration failed") << endl;

}

void MasterTankExplore::setSimpleExploreSquare(geometry_msgs::Point32 topRight, geometry_msgs::Point32 butLeft) {
    geometry_msgs::PolygonStamped squareBoundary;
    geometry_msgs::Point32 p[SQARE_BOUNDARY_POINTS];

    p[0] = topRight;

    p[1].x = topRight.x;
    p[1].y = butLeft.y;
    p[1].z = 0.00247192;

    p[2] = butLeft;

    p[3].x = butLeft.x;
    p[3].y = topRight.y;
    p[3].z = 0.00247192;

    squareBoundary.polygon.points.reserve(4);
    squareBoundary.header.seq = 0;
    squareBoundary.header.stamp = ros::Time::now();
    squareBoundary.header.frame_id = "map";


    for (int i = 0; i < SQARE_BOUNDARY_POINTS; i++) {
        squareBoundary.polygon.points.push_back(p[i]);
    }

    geometry_msgs::PointStamped start_point;
    start_point.point.x = start_point.point.y = start_point.point.z = 0.00247192;

    currentExploreArea.explore_center = start_point;
    currentExploreArea.explore_boundary = squareBoundary;

}


void MasterTankExplore::setSimpleExploreSquare(float squareAreaSize) {
    cout << "Setting simple explore square" << endl;
    geometry_msgs::Point32 topRight, butLeft;
    topRight.x = topRight.y = squareAreaSize;
    butLeft.x = butLeft.y = squareAreaSize * (-1);
    butLeft.z = topRight.z = 0.00247192;
    setSimpleExploreSquare(topRight, butLeft);
}

void MasterTankExplore::abort() {
    exploreClient.cancelAllGoals();
}

bool MasterTankExplore::waitForServer(float interval) {
    return exploreClient.waitForServer(ros::Duration(interval));
}

bool MasterTankExplore::readyToGo() {
    return exploreClient.isServerConnected();
}
