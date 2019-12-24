#ifndef POPPER_H
#define POPPER_H

#include <iostream>
class Popper{
public:
    void on (){
        std::cout << "爆米花机已经开启" << std::endl;
    }
    void off(){
        std::cout << "爆米花机已经关闭" << std::endl;
    }
};

#endif // POPPER_H
