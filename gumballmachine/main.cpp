#include <iostream>
#include "gamballmachine.h"
using namespace std;

int main()
{
    GamballMachine *g = new GamballMachine(100);
    g->insertQuarter();
    g->ejectQuarter();
    g->ejectQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();

    //测试winnerstate
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
    g->insertQuarter();
    g->turnCrank();
}
