#include <cassert>
#include <stdlib.h>
#include <iostream>

#include "animal.h"

Animal::Animal(int maxX, int maxY)
{
    //Generate random coords
    x = rand() % (maxX);
    y = rand() % (maxY);

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

Attaque Animal::getAttaque() const
{
    return typeAttaque;
}

//SETTERS

void Animal::setVivant(bool v)
{
    vivant = v;
}

bool Animal::attaque(Animal &a)
{
    std::cout << "dhsidhqsiudhqsiudhqsiu" << std::endl;

    //Generate attacks
    setAttaque();
    a.setAttaque();

    //If this animal wins the fight
    if(typeAttaque.resoudreAttaque(a.getAttaque())) {
        //Kill the other animal
        a.setVivant(false);
        return true;
    } else {
        //Kill ourselves
        setVivant(false);
        return false;
    }
}
