#include "darkroast.h"

DarkRoast::DarkRoast()
{
    this->__description = "Darkroast";
}
float DarkRoast::cost()
{
    return 0.95f;
}

Espresso::Espresso()
{
    this->__description = "Espresso";
}
float Espresso::cost()
{
    return 0.56f;
}
