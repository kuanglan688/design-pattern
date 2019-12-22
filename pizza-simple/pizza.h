#ifndef PIZZA_H
#define PIZZA_H
#include <string>
#include <vector>
#include <iostream>
class Pizza{
public:
    virtual ~Pizza();
    void prepare(){
        std::cout << "Preparing " << name << std::endl;
        std::cout << "Tossing " << dough << std::endl; //揉面团
        std::cout << "Adding " << sauce << std::endl; //加酱料

        std::cout << "Adding toppings"; //加酱料
        for (auto &l : topping) {
            std::cout << "  " << l;
        }
        std::cout << std::endl;
    }
    virtual void bake(){ //烘烤
        std::cout <<"Bake the " <<name <<
                    " for 25 minutes at 350" << std::endl;
    }
    virtual void cut(){ //切片
        std::cout << "Cutting the " << name <<
                     " into diagonal slices" << std::endl;
    }
    virtual void box(){ //包装
        std::cout << "Place " << name <<
                     " in official PizaaStore box" << std::endl;
    }
protected:
    std::string name; //批萨种类
    std::string dough = "dough"; //面团
    std::string sauce = "sauce"; //酱料
    std::vector<std::string> topping; //调料

};

#endif // PIZZA_H
