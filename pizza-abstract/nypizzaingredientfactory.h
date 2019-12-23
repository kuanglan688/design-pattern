#ifndef NYPIZZAINGREDIENTFACTORY_H
#define NYPIZZAINGREDIENTFACTORY_H

#include "pizzaingredientfactory.h"


class NYPizzaIngredientFactory: public PizzaIngredientFactory{
public:
    Dough createDough() override{
        return "ThinCrustDough";
    }

    Sauce createSauce() override{
        return "MarinaraSauce";
    }

    Cheese createCheese() override{
        return "ReggianoCheese";
    }

    std::vector<Veggies> createVeggies() override{
        std::vector<Veggies> ret = {"garlic", "Onion", "Mushroom", "RedPepper"};
        return ret;
    }

    Pepperoni createPepperoni() override{
        return "SlicedPepperoni";
    }

    Clams createClam() override{
        return "FreshClams";
    }
};

#endif // NYPIZZAINGREDIENTFACTORY_H
