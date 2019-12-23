#include <iostream>
#include "nypizzastore.h"
using namespace std;

int main()
{
    NYPizzaStore *nypizzastore = new NYPizzaStore;
    nypizzastore->orderPizza("CheesePizza");
    return 0;
}
