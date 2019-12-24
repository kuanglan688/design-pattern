#ifndef LIGHT_H
#define LIGHT_H
#include <iostream>
#include <string>
class Light{
public:
    Light(std::string s){
        this->__name = &s;
    }
    void on(){
        std::cout << "Light on ..." << std::endl;
    }
    void off(){
        std::cout << "Light off..." << std::endl;
    }

    std::string * getName(){
        return this->__name;
    }

private:
    std::string* __name;
};
#endif // LIGHT_H
