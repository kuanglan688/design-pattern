#include <iostream>
#include "waitress.h"
#include "dinermenu.h"
#include "pancakehousemenu.h"
using namespace std;

int main()
{
    DinerMenu *diner = new DinerMenu;
    PancakeHouseMenu *breakfirst = new PancakeHouseMenu;
    Waitress *waitress = new Waitress(diner, breakfirst);
    waitress->printMenu();
}
