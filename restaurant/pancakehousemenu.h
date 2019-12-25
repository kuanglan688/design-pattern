#ifndef PANCAKEHOUSEMENU_H
#define PANCAKEHOUSEMENU_H

#include <list>
#include "menuitem.h"
#include "pancakehousemenuiterator.h"
class PancakeHouseMenu{
public:
    PancakeHouseMenu(){
        this->addItem("K&B","Pancake with scrambled eggs", true, 7.99);
        this->addItem("RPB","Pancake scrambled eggs", false, 5.99);
        this->addItem("BP","Pancake with fresh blueberries", true, 12.99);
    }
    void addItem(std::string name, std::string description, bool v, double price){
        MenuItem *menuitem = new MenuItem(name, description,v,price);
        __menuitems.push_back(menuitem);
    }

    Iterator* createItertor(){
        return new PancakeHouseIterator(this->__menuitems);
    }

private:
    std::list<MenuItem*> __menuitems;
};

#endif // PANCAKEHOUSEMENU_H



