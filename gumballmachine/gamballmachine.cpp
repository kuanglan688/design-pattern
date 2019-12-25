#include "gamballmachine.h"

#include "soldstate.h"
#include "soldoutstate.h"
#include "hasquarterstate.h"
#include "noquarterstate.h"
#include "winnerstate.h"
GamballMachine::GamballMachine(int count){

    this->__count = count;
    this->__soldState = new SoldState(this);
    this->__soldOutState = new SoldOutState(this);
    this->__noQuarterState = new NoQuarterState(this);
    this->__hasQuarterState = new HasQuarterState(this);
    this->__winnerState = new WinnerState(this);
    if(this->__count>0)
        this->__currentState = this->__noQuarterState;
    else
        this->__currentState = this->__soldOutState;
}
State* GamballMachine::getSoldOutState(){
    return this->__soldOutState;
}
State* GamballMachine::getSoldState(){
    return this->__soldState;
}
State* GamballMachine::getHasQuarterState(){
    return this->__hasQuarterState;
}
State* GamballMachine::getNoQuarterState(){
    return this->__noQuarterState;
}
State* GamballMachine::getWinnerState(){
    return this->__winnerState;
}

void GamballMachine::turnCrank(){
    this->__currentState->turnCrank();
    this->__currentState->dispense();
}
void GamballMachine::ejectQuarter(){
    this->__currentState->ejectQuarter();
}
void GamballMachine::insertQuarter(){
    this->__currentState->insertQuarter();
}
void GamballMachine::setState(State* s){
    this->__currentState = s;
}
void GamballMachine::releaseBall(){
    std:: cout << "A gumball roulling out...\n";
    if(this->__count!=0)
        this->__count--;
}
int GamballMachine::getCount(){
    return this->__count;
}
