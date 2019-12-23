#ifndef CHOCOLATEBOILER_H
#define CHOCOLATEBOILER_H

#include <iostream>
class ChocolateBoiler{
private:
    bool __empty;
    bool __boiled;
    ChocolateBoiler(){
        this->__empty = true;
        this->__boiled = false;
    }
public:
    static ChocolateBoiler* getinstance(){
        static ChocolateBoiler *__chocolateboiler;
        if(__chocolateboiler==nullptr){
            __chocolateboiler = new ChocolateBoiler;
        }
        return __chocolateboiler;
    }

    void fill(){
        if(this->isEmpty()){
            std::cout << "巧克力炉被注满巧克力 -.-" << std::endl;
            this->__empty = false;
        }else {
            std::cout << "巧克力炉子已经满了 -.-" << std::endl;
        }

    }
    void boil(){
        if(!this->isEmpty() && !this->isBoiled()){
            std::cout << "巧克力正被煮沸 ~~~" << std::endl;
            this->__boiled = true;
        }else{
            std::cout << "炉子是空的或者已经煮熟了 不能再煮了哦 -.-" << std::endl;
        }
    }
    void drain(){
        if(!this->isEmpty() && this->isBoiled()){
            std::cout << "巧克力出炉了." << std::endl;
            this->__empty = true;
            this->__boiled = false;
        }else{
            std::cout << "巧克力炉子不熟  还不能取出哦-.-" << std::endl;
        }
    }

    bool isEmpty(){
        return this->__empty;
    }

    bool isBoiled(){
        return this->__boiled;
    }


};

#endif // CHOCOLATEBOILER_H

