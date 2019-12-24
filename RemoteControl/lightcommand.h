#ifndef LIGHTCOMMAND_H
#define LIGHTCOMMAND_H

#include "command.h"
#include "light.h"
#include <iostream>

//开灯
class LightOnCommand: public Command{
public:
    LightOnCommand(Light*l){
        this->__light = l;
    }
    ~LightOnCommand()override;

    void execute() override{
        this->__light->on();
    }

    void print()override{
        std::cout << *this->__light->getName() << " on command" << std::endl;
    }

private:
    Light* __light;
};

//关灯
class LightOffCommand: public Command{
public:
    LightOffCommand(Light* l){
        this->__light = l;
    }
    ~LightOffCommand()override;

    void execute() override{
        this->__light->off();
    }

    void print()override{
        std::cout << *this->__light->getName() << " off command" << std::endl;
    }

private:
    Light* __light;
};

#endif // LIGHTCOMMAND_H
