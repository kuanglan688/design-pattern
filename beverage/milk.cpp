#include "milk.h"

Milk::Milk(Beverage *b):CondimentDecorator(b)
{
    this->__description = "Milk";
}
float Milk::cost()
{
    return 0.35f + __beverage->cost();
}
std::string Milk::getDescription()
{
    return this->__description + " " + __beverage->getDescription();
}


Soy::Soy(Beverage *b):CondimentDecorator(b)
{
    this->__description = "Soy";
}
float Soy::cost()
{
    return 0.2f + __beverage->cost();
}
std::string Soy::getDescription()
{
    return this->__description + " " + __beverage->getDescription();
}
