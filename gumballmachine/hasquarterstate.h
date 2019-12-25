#ifndef HASQUARTERSTATE_H
#define HASQUARTERSTATE_H

#include "state.h"
class GamballMachine;
class HasQuarterState : public State
{
public:
    HasQuarterState(GamballMachine *g);
    void dispense() override;
    void turnCrank() override;
    void ejectQuarter() override;
    void insertQuarter() override;
private:
    GamballMachine *__gumballMachine;
};

#endif // HASQUARTERSTATE_H
