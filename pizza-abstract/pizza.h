#ifndef PIZZA_H
#define PIZZA_H
#include <vector>
#include <iostream>

#include "pizzaingredient.h"

class Pizza{
public:
    virtual ~Pizza();
    virtual void prepare()=0;
    virtual void setPizzaName(const std::string &name)=0;
    virtual void bake(){ //烘烤
        std::cout <<"Bake the " <<__name <<
                    " for 25 minutes at 350" << std::endl;
    }
    virtual void cut(){ //切片
        std::cout << "Cutting the " << __name <<
                     " into diagonal slices" << std::endl;
    }
    virtual void box(){ //包装
        std::cout << "Place " << __name <<
                     " in official PizaaStore box" << std::endl;
    }
protected:
    std::string __name; //批萨种类
    Dough __dough;
    Sauce __sauce;
    std::vector<Veggies> __veggises;
    Cheese __cheese;
    Pepperoni __pepperoni;
    Clams __clam;

    
};

#endif // PIZZA_H
