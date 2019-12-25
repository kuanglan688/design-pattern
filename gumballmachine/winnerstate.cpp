#include "winnerstate.h"
#include "gamballmachine.h"
WinnerState::WinnerState(GamballMachine *g){
    this->__gumballMachine = g;
}
void WinnerState::dispense() {
    std::cout << "YOU ARE A WINNER! You get two gumball!\n";
    this->__gumballMachine->releaseBall();
    if(this->__gumballMachine->getCount()==0){
        std::cout<< "抱歉,虽然你获得了两颗糖,但是这里面只剩下一颗糖了\n";
        this->__gumballMachine->setState(this->__gumballMachine->getSoldOutState());
    }else{
        this->__gumballMachine->releaseBall();
        if(this->__gumballMachine->getCount()==0){
            this->__gumballMachine->setState(this->__gumballMachine->getSoldOutState());
        }else {
            this->__gumballMachine->setState(this->__gumballMachine->getNoQuarterState());
        }
    }
}
void WinnerState::turnCrank() {
    std::cout << "Turned twice doesn't get you another gumball. \n";
}
void WinnerState::ejectQuarter() {
    std::cout << "Sorry You already turned the crank. \n";
}
void WinnerState::insertQuarter() {
    std::cout << "Please wait, we already give you a gumball. \n";
}
