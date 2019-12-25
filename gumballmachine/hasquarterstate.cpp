#include "hasquarterstate.h"
#include "gamballmachine.h"
#include <cstdlib>
HasQuarterState::HasQuarterState(GamballMachine *g){
    this->__gumballMachine = g;
}
void HasQuarterState::dispense(){
    std::cout << "No gumball dispensed. \n";
}
void HasQuarterState::turnCrank() {
    std::cout << "You turned. \n";
    if(rand()%10==1)
        this->__gumballMachine->setState(this->__gumballMachine->getWinnerState());
    else
        this->__gumballMachine->setState(this->__gumballMachine->getSoldState());
}
void HasQuarterState::ejectQuarter() {
    std::cout << "Quarter returned. \n";
    this->__gumballMachine->setState(this->__gumballMachine->getNoQuarterState());
}
void HasQuarterState::insertQuarter() {
    std::cout << "You can't insert another quarter. \n";
}
