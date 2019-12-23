#ifndef NYPIZZASTORE_H
#define NYPIZZASTORE_H

#include "pizzastore.h"
#include "nypizzaingredientfactory.h"
#include "cheesepizza.h"
//纽约店
class NYPizzaStore: public PizzaStore
{
public:
    Pizza * createPizza(const std::string &pname) override{ //工厂方法 在此创建实例
        Pizza *pizza = nullptr;
        PizzaIngredientFactory *pizzaingredientfactory = new NYPizzaIngredientFactory;
        if(pname == "CheesePizza"){
            pizza = new CheesePizza(pizzaingredientfactory);
            pizza->setPizzaName("NewYork"+pname);
        }
        return pizza;
    }
};

//芝加哥店
//class ChicagoPizzaStore: public PizzaStore
//{
//public:
//    Pizza * createPizza(const std::string &pname) override{ //工厂方法 在此创建实例
//        if(pname == "CSCPizza")
//            return new ChicagoStyleCheesePizza;
//        else if (pname == "CSClamPizza") {
//            return new ChicagoStyleClamPizza;
//        }else
//            return nullptr;
//    }
//};

#endif // NYPIZZASTORE_H
