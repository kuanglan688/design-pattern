#ifndef NOQUARTERSTATE_H
#define NOQUARTERSTATE_H

#include "state.h"
//#include "gamballmachine.h"
class GamballMachine;
class NoQuarterState : public State
{
public:
    NoQuarterState(GamballMachine *g);
    void dispense() override;
    void turnCrank() override;
    void ejectQuarter() override;
    void insertQuarter() override;
private:
    GamballMachine *__gumballMachine;
};

#endif // NOQUARTERSTATE_H
