#include "animal.h"

#include <stdlib.h>
#include <cassert>

Animal::Animal(int maxX, int maxY)
{
    //Generate random coords
    x = rand() % (maxX+1);
    y = rand() % (maxY+1);

    //An animal should be alive when created
    vivant = true;
}

Animal::Animal(int maxX, int maxY, int a, int b)
{
    //Check if supplied coords are in bound
    assert(a >= 0 && a <= maxX);
    assert(b >= 0 && b <= maxY);
    //Set the coords
    x = a;
    y = b;

    //An animal should be alive when created
    vivant = true;
}