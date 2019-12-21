#include <iostream>
#include "darkroast.h"
#include "milk.h"
using namespace std;

int main()
{
    Beverage *dark = new DarkRoast; //豆浆牛奶咖啡
    dark = new Soy(dark);
    dark = new Milk(dark);
    std::cout << dark->getDescription() << " cost: " <<
                 dark->cost() << "$." << std::endl;

    Beverage *esp = new Espresso; //三重豆浆咖啡
    esp = new Soy(esp);
    esp = new Soy(esp);
    esp = new Soy(esp);
    std::cout << esp->getDescription() << " cost: " <<
                 esp->cost() << "$." << std::endl;

}
