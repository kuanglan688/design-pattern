#ifndef CHEESEPIZZA_H
#define CHEESEPIZZA_H

#include "pizza.h"
#include "pizzaingredientfactory.h"

class CheesePizza: public Pizza{
public:
    CheesePizza(PizzaIngredientFactory *ingredientFactory){
        this->__ingredientFactory = ingredientFactory;
    }
    virtual ~CheesePizza() override;
    void setPizzaName(const std::string &name)override{
        this->__name = name;
    }
    void prepare() override{
        std::cout << "Preparing " + this->__name << std::endl;
        this->__clam = this->__ingredientFactory->createClam();
        this->__dough = this->__ingredientFactory->createDough();
        this->__sauce = this->__ingredientFactory->createSauce();
        this->__cheese = this->__ingredientFactory->createCheese();
        this->__veggises = this->__ingredientFactory->createVeggies();
        this->__pepperoni = this->__ingredientFactory->createPepperoni();
        std::cout << "Clam: " << this->__clam << std::endl;
        std::cout << "Doughs: " << this->__dough << std::endl;
        std::cout << "Sauce: " << this->__sauce << std::endl;
        std::cout << "Cheese: " << this->__cheese << std::endl;
        std::cout << "Pepperoni: " << this->__pepperoni << std::endl;

        std::cout << "Veggises: ";
        for (auto &l:this->__veggises) {
            std::cout << "  " <<l;
        }
        std::cout << std::endl;
    }
private:
    PizzaIngredientFactory *__ingredientFactory;
};

#endif // CHEESEPIZZA_H
