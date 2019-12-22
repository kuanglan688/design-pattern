#ifndef NYSTYLECHESSPIZZA_H
#define NYSTYLECHESSPIZZA_H

#include "pizza.h"
class NYStyleCheesePizza: public Pizza{
public:
    virtual ~NYStyleCheesePizza();
    NYStyleCheesePizza(){
        this->name = "NYSCPizza";
        this->dough = "Thin Crust Dough";
        this->sauce = "Marinara Sauce";
        topping.push_back("Grated");
        topping.push_back("Reggiano");
        topping.push_back("Cheese");
    }
    void bake(){ //烘烤
        std::cout <<"Bake the " <<name <<
                    " for 45 minutes at 150" << std::endl;
    }

};

class ChicagoStyleCheesePizza: public Pizza{
public:
    virtual ~ChicagoStyleCheesePizza();
    ChicagoStyleCheesePizza(){
        this->name = "CSCPizza";
        this->dough = "Exact Thick Crust Dough";
        this->sauce = "Plum Tomato Sauce";
        topping.push_back("Shredded");
        topping.push_back("Mozzarella");
        topping.push_back("Cheese");
    }

    void cut(){ //切片
        std::cout << "Cutting the " << name <<
                     " into square slices" << std::endl;
    }
};

#endif // NYSTYLECHESSPIZZA_H
