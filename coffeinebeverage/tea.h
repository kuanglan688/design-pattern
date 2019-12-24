#ifndef TEA_H
#define TEA_H

#include "coffeinebeverage.h"
class Tea: public CoffeineBeverage{
public:
    void brew() override{
        std::cout << "用沸水浸泡茶叶" << std::endl;
    }

    void addCondiments() override{
        std::cout << "加入柠檬" << std::endl;
    }
};

#endif // TEA_H
