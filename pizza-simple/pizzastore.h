#ifndef PIZZASTORE_H
#define PIZZASTORE_H
#include "simplepizzafactory.h"
#include "pizza.h"
class PizzaStore{
public:
    PizzaStore(SimplePizzaFactory *f):__factory(f){

    }
    void orderPizza(const std::string& pname){
        Pizza *pizza = __factory->createPizza(pname);
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

protected:
    SimplePizzaFactory *__factory;
};

#endif // PIZZASTORE_H
