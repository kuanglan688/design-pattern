#include <iostream>

#include "tea.h"
#include "coffee.h"
using namespace std;

int main()
{
    cout << "开始泡茶" << endl;
    Tea *tea = new Tea;
    tea->prepareRecipe();

    cout << "开始泡咖啡" << endl;
    Coffee *coffee = new Coffee;
    coffee->prepareRecipe();

    return 0;
}
