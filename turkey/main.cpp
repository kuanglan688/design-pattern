#include <iostream>
#include "duckadapter.h"
#include "mallardduck.h"
using namespace std;

int main()
{
    std::cout << "野鸡开始表演---------" <<std::endl;
    Turkey *turkey = new Turkey;
    turkey->fly();
    turkey->quack();

    std::cout << "野鸭开始表演---------" <<std::endl;
    Duck *mallard = new Mallardduck;
    mallard->fly();
    mallard->quack();

    std::cout << "被野鸡冒充的野鸭开始表演----------" <<std::endl;
    DuckAdapter *da = new DuckAdapter(turkey);
    da->fly();
    da->quack();
}
