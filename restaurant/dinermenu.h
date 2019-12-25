#ifndef DINERMENU_H
#define DINERMENU_H

#include <array>
#include "menuitem.h"
#include "dinermenuiterator.h"

extern const int MAXITEMS;
class DinerMenu{
public:
    DinerMenu(){
        this->addItem("BLT", "Bacon with lettuce & tomato", true, 2.99);
        this->addItem("SOD", "Soup of the day", false, 5.99);
        this->addItem("HD", "Hot Dog", true, 3.99);
    }
    bool addItem(std::string name, std::string desc, bool v, double p){
        if(__numberOfItems<(MAXITEMS-1)){
            MenuItem *menuitem = new MenuItem(name,desc,v,p);
            this->__menuitems[this->__numberOfItems] = menuitem;
            this->__numberOfItems++;
            return true;
        }else {
            return false;
        }
    }

    Iterator* createIterator(){
        return new DinerMenuIterator(__menuitems);
    }

private:

    unsigned long __numberOfItems = 0;
    std::array<MenuItem*, MAXITEMS> __menuitems;
};


#endif // DINERMENU_H
