#include <iostream>
#include "hometheater.h"
using namespace std;

int main()
{
    Popper *p = new Popper;
    Screen *s = new Screen;
    HomeTheater *ht = new HomeTheater(p ,s);
    ht->start();
    ht->end();


//    p->on(); //也可单独使用
//    p->off();

}
