#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H

#include "duck.h"
#include <iostream>
class MallardDuck: public Duck{
public:

    virtual ~MallardDuck() override;

    MallardDuck(){
        quackBehavior = new Quack; //呱呱地叫
        flyBehavior = new FlyWithWings; //飞
    }

    void display() override{
        std::cout << "我是一只野鸭子 -.-"<< std::endl;
    }
};

#endif // MALLARDDUCK_H
