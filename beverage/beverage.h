#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <string>
class Beverage
{
public:
    Beverage();
    virtual ~Beverage();
    virtual float cost()=0;
    virtual std::string getDescription();
protected:
    std::string __description;
};

#endif // BEVERAGE_H
