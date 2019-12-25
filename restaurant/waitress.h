#ifndef WAITRESS_H
#define WAITRESS_H

#include "dinermenu.h"
#include "pancakehousemenu.h"
class Waitress{
public:
    Waitress(DinerMenu* dinermenu, PancakeHouseMenu* breakmenu){
        this->__dinerMenu = dinermenu;
        this->__breakfirstMenu = breakmenu;
    }

    void printMenu(){
        Iterator* breakIterator = this->__breakfirstMenu->createItertor();
        std::cout << "Breakfirst\n";
        this->printMenu(breakIterator);

        Iterator* dinerIterator = this->__dinerMenu->createIterator();
        std::cout << "Lunch\n";
        this->printMenu(dinerIterator);
    }

    void printMenu(Iterator *i){
        while (i->hasNext()) {
            MenuItem *m =static_cast<MenuItem*>(i->next());
            std::cout << m->getName() << ", " <<
                         m->getDescription() << ". " <<
                         m->getPrice() << "\n";
        }
    }

private:
    DinerMenu* __dinerMenu;
    PancakeHouseMenu* __breakfirstMenu;
};

#endif // WAITRESS_H
