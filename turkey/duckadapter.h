#ifndef DUCKADAPTER_H
#define DUCKADAPTER_H

#include "duck.h"
#include "turkey.h"
class DuckAdapter: public Duck{

public:
    DuckAdapter(Turkey * turkey){
        this->__turkey = turkey;
    }
    ~DuckAdapter()override;
    void fly() override{
        for (int i=0;i<3;i++) {
            this->__turkey->fly();
        }
    }
    void quack() override{
        this->__turkey->quack();
    }

private:
    Turkey * __turkey;
};

#endif // DUCKADAPTER_H
