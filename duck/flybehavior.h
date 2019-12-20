#ifndef FLYBEHAVIOR_H
#define FLYBEHAVIOR_H
#include <iostream>
class FlyBehavior{
public:
    virtual void fly()=0;
    virtual ~FlyBehavior();
};

class FlyWithWings: public FlyBehavior{
    void fly() override{
        std::cout << "我逍遥地飞!" << std::endl;
    }
};

class FlyNoWay: public FlyBehavior{
    void fly() override{
        std::cout << "我不会飞 -.-" << std::endl;
    }
};

class FlyRocketPowered: public FlyBehavior{
    void fly() override{
        std::cout << "我骑火箭飞!" <<std::endl;
    }
};

#endif // FLYBEHAVIOR_H
