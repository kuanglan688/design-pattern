#ifndef CONDIMENTDECOTAROE_H
#define CONDIMENTDECOTAROE_H

#include "beverage.h"
class CondimentDecorator : public Beverage
{
public:
    CondimentDecorator(Beverage *b);
protected:
    Beverage *__beverage;
};

#endif // CONDIMENTDECOTAROE_H
