#ifndef DINERMENUITERATOR_H
#define DINERMENUITERATOR_H

#include "iterator.h"
#include <array>

const int MAXITEMS = 5;
class DinerMenuIterator : public Iterator
{
public:
    DinerMenuIterator(std::array<MenuItem*,MAXITEMS> menuitems){
        this->__menuitems = menuitems;
    }
    ~DinerMenuIterator()override;
    void* next() override{
        return __menuitems[__position++];
    }
    bool hasNext() override{
        if(__position >= MAXITEMS-1 || __menuitems[__position] == nullptr)
            return false;
        return true;
    }
private:
    unsigned long __position = 0;
    std::array<MenuItem*,MAXITEMS> __menuitems;
};

#endif // DINERMENUITERATOR_H
