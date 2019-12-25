#ifndef ITERATOR_H
#define ITERATOR_H

#include "menuitem.h"
class Iterator{
public:
    virtual ~Iterator();
    virtual bool hasNext() = 0;
    virtual void* next() = 0;
};

#endif // ITERATOR_H
