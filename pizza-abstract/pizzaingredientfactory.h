#ifndef PIZZAINGREDIENTFACTORY_H
#define PIZZAINGREDIENTFACTORY_H

#include <vector>
#include "pizzaingredient.h"

class PizzaIngredientFactory{ //原料工厂
public:
    virtual ~PizzaIngredientFactory();
    virtual Dough createDough()=0;
    virtual Sauce createSauce()=0;
    virtual Cheese createCheese()=0;
    virtual std::vector<Veggies> createVeggies()=0;
    virtual Pepperoni createPepperoni()=0;
    virtual Clams createClam()=0;
};

#endif // PIZZAINGREDIENTFACTORY_H
