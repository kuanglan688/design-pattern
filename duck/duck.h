#ifndef DUCK_H
#define DUCK_H

#include <flybehavior.h>
#include <quackbehavior.h>

//class FlyBehavior;
//class QuackBehavior;
class Duck{
public:

    virtual ~Duck();

    void swim(){
        std::cout << "我自在地游~" << std::endl;
    }
    virtual void display() =0;
    void performQuack(){
        quackBehavior->quack();
    }
    void performFly(){
        flyBehavior->fly();
    }

    void setFlyBehavior(FlyBehavior *fb){
        //先将原来的飞行行为删除 以免内存泄漏
        if(flyBehavior!=nullptr)
            delete flyBehavior;

        flyBehavior = fb;
    }
    void setQuackBehavior(QuackBehavior *qb){
        //先将原来的呱呱叫行为删除 以免内存泄漏
        if(quackBehavior!=nullptr)
            delete quackBehavior;

        quackBehavior = qb;
    }


protected:
    FlyBehavior *flyBehavior;
    QuackBehavior *quackBehavior;

//private:
//    FlyBehavior *flyBehavior;
//    QuackBehavior *quackBehavior;
};

#endif // DUCK_H
