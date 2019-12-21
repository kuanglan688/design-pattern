#ifndef DARKROAST_H
#define DARKROAST_H

#include "beverage.h"

//一种咖啡
class DarkRoast: public Beverage
{
public:
    DarkRoast();
    float cost() override;
};

//另一种咖啡
class Espresso: public Beverage
{
public:
    Espresso();
    float cost() override;
};

#endif // DARKROAST_H
