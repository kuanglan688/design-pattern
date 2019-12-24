#ifndef HOMETHEATER_H
#define HOMETHEATER_H
#include "popper.h"
#include "screen.h"

class HomeTheater{
public:
    HomeTheater(Popper* p, Screen* s){
        this->__popper = p;
        this->__screen = s;
    }
    void start(){
        std::cout << "开始观看电影" << std::endl;
        this->__popper->on();
        this->__screen->on();
    }
    void end(){
        std::cout << "结束观看电影" << std::endl;
        this->__popper->off();
        this->__popper->off();
    }
private:
    Popper* __popper;
    Screen* __screen;
};

#endif // HOMETHEATER_H
