#include <iostream>
#include "nypizzastore.h"
using namespace std;

int main()
{
    NYPizzaStore *nystore = new NYPizzaStore;
    nystore->orderPizza("NYSCPizza");
    nystore->orderPizza("NYVeggieCPizza");
    ChicagoPizzaStore *chstore = new ChicagoPizzaStore;
    chstore->orderPizza("CSCPizza");
    chstore->orderPizza("CSClamPizza");
    return 0;
}
