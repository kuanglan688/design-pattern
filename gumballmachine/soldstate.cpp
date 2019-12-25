#include "soldstate.h"
#include "gamballmachine.h"
SoldState::SoldState(GamballMachine *g){
    this->__gumballMachine = g;
}
void SoldState::dispense() {
    this->__gumballMachine->releaseBall();
    if(this->__gumballMachine->getCount()>0){
        this->__gumballMachine->setState(this->__gumballMachine->getNoQuarterState());
    }else{
        this->__gumballMachine->setState(this->__gumballMachine->getSoldOutState());
    }
}
void SoldState::turnCrank() {
    std::cout << "Turned twice doesn't get you another gumball. \n";
}
void SoldState::ejectQuarter() {
    std::cout << "Sorry You already turned the crank. \n";
}
void SoldState::insertQuarter() {
    std::cout << "Please wait, we already give you a gumball. \n";
}
