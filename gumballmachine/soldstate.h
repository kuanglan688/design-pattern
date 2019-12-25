#ifndef SOLDSTATE_H
#define SOLDSTATE_H

#include "state.h"
class GamballMachine;
class SoldState : public State
{
public:
    SoldState(GamballMachine *g);
    void dispense() override;
    void turnCrank() override;
    void ejectQuarter() override;
    void insertQuarter() override;
private:
    GamballMachine *__gumballMachine;
};

#endif // SOLDSTATE_H
