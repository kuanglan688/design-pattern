#include "soldoutstate.h"
SoldOutState::SoldOutState(GamballMachine *g){
    this->__gumballMachine = g;
}
void SoldOutState::dispense(){
    std::cout << "No gumball dispensed. \n";
}
void SoldOutState::turnCrank(){
    std::cout << "You turned, but there are no gumballs. \n";
}
void SoldOutState::ejectQuarter(){
    std::cout << "You can't eject, you haven't inserted a quarter yet. \n";
}
void SoldOutState::insertQuarter(){
    std::cout << "You Can't insert a quarter, the machine is sold out. \n";
}
