#ifndef MENUITEM_H
#define MENUITEM_H

#include <string>
#include <iostream>
class MenuItem{
public:
    MenuItem(std::string name, std::string description, bool v, double price){
        this->__name = name;
        this->__description = description;
        this->__vegetarian = v;
        this->__price = price;
    }

    std::string getName(){return this->__name;}
    std::string getDescription(){return this->__description;}
    double getPrice(){return this->__price;}
private:
    std::string __name;
    std::string __description;
    bool __vegetarian;
    double __price;
};

#endif // MENUITEM_H
