#ifndef SIMPLEPIZZAFACTORY_H
#define SIMPLEPIZZAFACTORY_H

#include "nystylechesspizza.h"
class SimplePizzaFactory{
public:
    Pizza* createPizza(const std::string &pname){
        if(pname == "NYSCPizza")
            return new NYStyleCheesePizza;
        else if(pname == "CSCPizza"){
            return  new ChicagoStyleCheesePizza;
        }
        else return nullptr;
    }
};

#endif // SIMPLEPIZZAFACTORY_H
