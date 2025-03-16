#include "pierre.h"
#include "attaque.h"
#include "stdlib.h"

Pierre::Pierre(int maxX, int maxY): Animal(maxX, maxY) {}

void Pierre::setAttaque(){
    typeAttaque = TypeAttaque::PIERRE;
}


void Pierre::deplace(int maxX,int maxY ) {
    return; // No movement for rocks
}

char Pierre::getLetter() const
{
    return 'P';
}