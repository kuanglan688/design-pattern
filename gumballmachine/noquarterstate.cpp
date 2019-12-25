#include "noquarterstate.h"
#include "gamballmachine.h"
NoQuarterState::NoQuarterState(GamballMachine *g){
    this->__gumballMachine = g;
}
void NoQuarterState::dispense() {
    std::cout << "You need to pay first. \n";
}
void NoQuarterState::turnCrank(){
    std::cout << "You turned, but there is no quarter. \n";
}
void NoQuarterState::ejectQuarter(){
    std::cout << "You haven't inserted a quarter. \n";
}
void NoQuarterState::insertQuarter(){
    std::cout << "You insert a quarter .\n";
    this->__gumballMachine->setState(this->__gumballMachine->getHasQuarterState());
}
