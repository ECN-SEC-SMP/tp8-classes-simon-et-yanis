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

//GETTERS

std::string Animal::getNom() const
{
    return nom;
}

int Animal::getX() const
{
    return x;
}

int Animal::getY() const
{
    return y;
}

bool Animal::getVivant() const
{
    return vivant;
}

//SETTERS

void Animal::setVivant(bool v)
{
    vivant = v;
}

bool Animal::attaque(Animal &a)
{
    //TODO: After attaque is implemented
    return false;
}
