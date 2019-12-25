#ifndef WINNERSTATE_H
#define WINNERSTATE_H

#include "state.h"
class GamballMachine;
class WinnerState : public State
{
public:
    WinnerState(GamballMachine *g);
    void dispense() override;
    void turnCrank() override;
    void ejectQuarter() override;
    void insertQuarter() override;
private:
    GamballMachine *__gumballMachine;
};

#endif // WINNERSTATE_H
