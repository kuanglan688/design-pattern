#include "mallardduck.h"

MallardDuck::~MallardDuck(){
    delete quackBehavior;
    delete flyBehavior;
}
