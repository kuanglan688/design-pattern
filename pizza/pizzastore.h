#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include "pizza.h"
class PizzaStore{
public:
    virtual ~PizzaStore();
    virtual Pizza *createPizza(const std::string &pname){};

    void orderPizza(const std::string& pname){
        Pizza *pizza = createPizza(pname);
        if(pizza==nullptr){
            std::cout << "No such type pizza: " <<
                         pname << std::endl;
        }else {
            pizza->prepare();
            pizza->bake();
            pizza->cut();
            pizza->box();
        }
        std::cout << std::endl;
    }
};

#endif // PIZZASTORE_H
