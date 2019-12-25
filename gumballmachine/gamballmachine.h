#ifndef GAMBALLMACHINE_H
#define GAMBALLMACHINE_H

#include "state.h"
class GamballMachine
{
public:
    GamballMachine(int count);
    void turnCrank();
    void ejectQuarter();
    void insertQuarter();
    void setState(State* );
    State* getSoldOutState();
    State* getSoldState();
    State* getHasQuarterState();
    State* getNoQuarterState();
    State* getWinnerState();
    void releaseBall();
    int getCount();
private:
    State* __soldOutState;
    State* __noQuarterState;
    State* __hasQuarterState;
    State* __soldState;
    State* __winnerState;
    State* __currentState;
    int __count;
};

#endif // GAMBALLMACHINE_H
