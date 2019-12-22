#include <iostream>
#include "pizzastore.h"
using namespace std;

int main()
{
    SimplePizzaFactory *sfactory = new SimplePizzaFactory;
    PizzaStore *pstore = new PizzaStore(sfactory);
    pstore->orderPizza("NYSCPizza");
    pstore->orderPizza("CSCPizza");
    pstore->orderPizza("HotDogPizza");
    cout << "Hello World!" << endl;
    return 0;
}
