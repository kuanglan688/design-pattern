#ifndef COFFEINEBEVERAGE_H
#define COFFEINEBEVERAGE_H

#include <iostream>
class CoffeineBeverage{
public:

    virtual ~CoffeineBeverage();
    void prepareRecipe(){ //模板方法
        boilWater(); //把水煮沸
        brew(); //冲泡咖啡因饮料
        pourInCup(); //倒入杯中
        addCondiments(); //加入配料
    }
    void boilWater(){
        std::cout << "水已经煮沸了-.-" << std::endl;
    }

    void pourInCup(){
        std::cout << "咖啡因饮料被倒入杯子中" << std::endl;
    }

    virtual void brew()=0;
    virtual void addCondiments()=0;

};

#endif // COFFEINEBEVERAGE_H
