#ifndef MODELDUCK_H
#define MODELDUCK_H

#include "duck.h"
class ModelDuck : public Duck
{
public:
    ModelDuck(){
        flyBehavior = new FlyNoWay;
        quackBehavior = new Quack;
    }
    virtual ~ModelDuck() override;

    void display() override{
        std::cout << "我是一直模型鸭 -.-" << std::endl;
    }
};

#endif // MODELDUCK_H
