#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>
class Screen{
public:
    void on (){
        std::cout << "投影仪已经开启" << std::endl;
    }
    void off(){
        std::cout << "投影仪已经关闭" << std::endl;
    }
};

#endif // SCREEN_H
