#ifndef COFFEE_H
#define COFFEE_H
#include "coffeinebeverage.h"

class Coffee: public CoffeineBeverage{
public:
    void brew() override{
        std::cout << "用沸水冲泡咖啡粉" << std::endl;
    }

    void addCondiments() override{
        std::cout << "加入糖和牛奶" << std::endl;
    }
};

#endif // COFFEE_H
