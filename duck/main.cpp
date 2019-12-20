#include <iostream>
#include "mallardduck.h"
#include "modelduck.h"
using namespace std;

int main()
{
    Duck *duck = new MallardDuck;
    duck->display();
    duck->swim();
    duck->performFly();
    duck->performQuack();
    cout << "---改造后的野鸭子" <<endl;
    duck->setFlyBehavior(new FlyNoWay);
    duck->performFly();
    duck->setQuackBehavior(new Squeak);
    duck->performQuack();

    cout << endl;
    Duck *duck2 = new ModelDuck;
    duck2->display();
    duck2->swim();
    duck->performFly();
    duck->performQuack();
    cout << "---变异后的模型鸭子" <<endl;
    duck->setFlyBehavior(new FlyRocketPowered);
    duck->performFly();
    duck->setQuackBehavior(new Quack);
    duck->performQuack();
    return 0;
}
