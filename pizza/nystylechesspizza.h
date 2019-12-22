#ifndef NYSTYLECHESSPIZZA_H
#define NYSTYLECHESSPIZZA_H

#include "pizza.h"
//纽约店一种批萨
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
                    " for 10 minutes at 200" << std::endl;
    }
};
//纽约店另一种批萨
class NYStyleVeggiePizza: public Pizza{
public:
    virtual ~NYStyleVeggiePizza();
    NYStyleVeggiePizza(){
        this->name = "NYVeggieCPizza";
        this->dough = "Thin Crust Dough";
        this->sauce = "Marinara Sauce";
        topping.push_back("Grated");
        topping.push_back("Reggiano");
        topping.push_back("Cheese");
    }
    void bake(){ //烘烤
        std::cout <<"Bake the " <<name <<
                    " for 20 minutes at 400" << std::endl;
    }
};


//芝加哥店一种批萨
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
//芝加哥店另一种批萨
class ChicagoStyleClamPizza: public Pizza{
public:
    virtual ~ChicagoStyleClamPizza();
    ChicagoStyleClamPizza(){
        this->name = "CSClamPizza";
        this->dough = "Exact Thick Crust Dough";
        this->sauce = "Plum Tomato Sauce";
        topping.push_back("Shredded");
        topping.push_back("Mozzarella");
        topping.push_back("Cheese");
    }

    void cut(){ //切片
        std::cout << "Cutting the " << name <<
                     " into unsquare slices" << std::endl;
    }
};

#endif // NYSTYLECHESSPIZZA_H
