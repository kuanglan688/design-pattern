#ifndef QUACKBEHAVIOR_H
#define QUACKBEHAVIOR_H

#include <iostream>
class QuackBehavior{
public:
    virtual void quack()=0;
    virtual ~QuackBehavior();
};

class Quack: public QuackBehavior{
public:
    void quack() override{
        std::cout << "我呱呱地叫!" <<std::endl;
    }
};

class Squeak: public QuackBehavior{
public:
    void quack() override{
        std::cout << "我吱吱地叫!" << std::endl;
    }
};

class MuteQuack: public QuackBehavior{
public:
    void quack() override{
        std::cout << "我不会叫!" << std::endl;
    }
};

#endif // QUACKBEHAVIOR_H
