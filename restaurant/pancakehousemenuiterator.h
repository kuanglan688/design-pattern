#ifndef PANCAKEHOUSEMENUITERATOR_H
#define PANCAKEHOUSEMENUITERATOR_H

#include <list>
#include "iterator.h"
#include "menuitem.h"
class PancakeHouseIterator: public Iterator{
public:
    PancakeHouseIterator(std::list<MenuItem*> menuitems){
        this->__menuitems = menuitems;

    }
    virtual ~PancakeHouseIterator()override;
    void* next() override{
        MenuItem* ret = new MenuItem(*(*__menuitems.begin()));
        this->__menuitems.pop_front();
        return ret;

    }
    bool hasNext() override{
        return !this->__menuitems.empty();
    }
private:
    std::list<MenuItem*> __menuitems;
};
#endif // PANCAKEHOUSEMENUITERATOR_H
