#include "beverage.h"

Beverage::Beverage()
{
    this->__description = "unknown beverage";
}

Beverage::~Beverage(){}
std::string Beverage:: getDescription()
{
    return this->__description;
}
