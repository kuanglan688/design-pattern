#ifndef MALLARDDUCK_H
#define MALLARDDUCK_H
#include "duck.h"
#include <iostream>
class Mallardduck :public Duck{
public:
    void fly() override{
        std::cout << "鸭子飞很远 = =" << std::endl;
    }
    void quack() override{
        std::cout << "鸭子呱呱挂地叫" << std::endl;
    }
};

#endif // MALLARDDUCK_H
