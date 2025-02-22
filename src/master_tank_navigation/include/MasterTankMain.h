#ifndef PROJECT_MASTERTANKMAIN_H
#define PROJECT_MASTERTANKMAIN_H

#include <string.h>

//#define TEST_MODE_ENABLED

enum masterStates_e {
    INITALISING,
    EXPLORING,
    FECHING_OBJECT,
    GO_HOME,
    FINISH,
    ALL_STATE_COUNT
};

std::string enumToString(masterStates_e masterState);

void stateMachineGunFire();
extern masterStates_e masterTankState;

#endif //PROJECT_MASTERTANKMAIN_H
