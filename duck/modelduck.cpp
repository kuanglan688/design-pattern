#include "modelduck.h"

ModelDuck::~ModelDuck(){
    delete flyBehavior;
    delete quackBehavior;
}
