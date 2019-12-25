#ifndef SOLDOUTSTATE_H
#define SOLDOUTSTATE_H

#include "state.h"
class GamballMachine;
class SoldOutState : public State
{
public:
    SoldOutState(GamballMachine *g);
    void dispense() override;
    void turnCrank() override;
    void ejectQuarter() override;
    void insertQuarter() override;
private:
    GamballMachine *__gumballMachine;
};

#endif // SOLDOUTSTATE_H
