#ifndef REMOTECONTROL_H
#define REMOTECONTROL_H

#include <array>
#include <iostream>
#include "command.h"
#include "lightcommand.h"
class RemoteControl
{
public:
    RemoteControl(){
        for (auto &i:__onCommand) {
            i = nullptr;
        }
        for (auto &i:__offCommand) {
            i = nullptr;
        }
    }

    void setCommand(int slot, Command* on, Command* off){
        if(slot <__num){
            __onCommand[static_cast<unsigned long>(slot)] = on;
            __offCommand[static_cast<unsigned long>(slot)] = off;
        }
    }

    void onButtonWasPushed(int slot){
        if(slot <__num){
            if(__onCommand[static_cast<unsigned long>(slot)]!=nullptr)
                __onCommand[static_cast<unsigned long>(slot)]->execute();
        }
    }

    void offButtonWasPushed(int slot){
        if(slot <__num){
            if(__offCommand[static_cast<unsigned long>(slot)]!=nullptr)
                __offCommand[static_cast<unsigned long>(slot)]->execute();
        }
    }

    friend std::ostream& operator<< (std::ostream& o, RemoteControl* rc){
        o << "--onCommand:" << std::endl;
        for (auto &l:rc->__onCommand) {
            if(l!=nullptr)
                l->print();
        }
        o << "--offCommand:" << std::endl;
        for (auto &l:rc->__offCommand) {
            if(l!=nullptr)
                l->print();
        }
        return o;
    }

private:
    static const int __num = 7;
    std::array<Command*,__num> __onCommand;
    std::array<Command*,__num> __offCommand;
};

#endif // REMOTECONTROL_H
