//
// Created by thor on 9/30/16.
//

#ifndef PROJECT_MASTERTANKEXPLORE_H
#define PROJECT_MASTERTANKEXPLORE_H


#include <geometry_msgs/Point32.h>
#include <actionlib/client/simple_action_client.h>
#include "frontier_exploration/ExploreTaskAction.h"

class MasterTankExplore {
public:
    MasterTankExplore();
    void goExplore();
    void setSimpleExploreSquare(geometry_msgs::Point32 topRight, geometry_msgs::Point32 butLeft);
    void setSimpleExploreSquare(float squareAreaSize);
    void abort();
    bool waitForServer(float interval);
    bool readyToGo();
private:
    typedef actionlib::SimpleActionClient<frontier_exploration::ExploreTaskAction> ExploreClient;
    ExploreClient exploreClient;
    frontier_exploration::ExploreTaskGoal currentExploreArea;
    void doneExploreTask_cb(const actionlib::SimpleClientGoalState &state,
                            const frontier_exploration::ExploreTaskResultConstPtr &result);
    void activeExploring_cb();
    void feedbackFromExplore_cb(const frontier_exploration::ExploreTaskFeedbackConstPtr &feedback);

    void setSimpleExploreSquare(geometry_msgs::Point32 squareAreaSize);
};


#endif //PROJECT_MASTERTANKEXPLORE_H
