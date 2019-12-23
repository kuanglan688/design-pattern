#include <iostream>
#include "chocolateboiler.h"
using namespace std;

int main()
{

    ChocolateBoiler *choco = ChocolateBoiler::getinstance();
    choco->fill();
    choco->boil();
    choco->fill();
    choco->drain();
    choco->boil();
    choco->fill();
}
