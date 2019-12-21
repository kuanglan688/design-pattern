#ifndef MILK_H
#define MILK_H

#include "condimentdecorator.h"

//牛奶配料
class Milk: public CondimentDecorator
{
public:
    Milk(Beverage *b);
    float cost() override;
    std::string getDescription() override;
};

//豆浆配料
class Soy: public CondimentDecorator
{
public:
    Soy(Beverage *b);
    float cost() override;
    std::string getDescription() override;
};

#endif // MILK_H
