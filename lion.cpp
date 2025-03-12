#include "lion.h"
#include "attaque.h"
#include "stdlib.h"

Lion::Lion(int maxX, int maxY): Animal(maxX, maxY) {}

void Lion::setAttaque(){
    int att = rand() % 2;
    switch (att)
    {
    case 0:
        typeAttaque = TypeAttaque::FEUILLE;
        break;
    case 1:
        typeAttaque = TypeAttaque::CISEAUX;
        break;
    default:
        break;
    }
}


void Lion::deplace(int maxX,int maxY ) {
    int cell = rand() % 3;
    switch (cell)
    {
    case 0:
        x += 1;
        y += 1;
        break;
    case 1:
        x -= 1;
        y += 1;
        break;
    case 2:
        x += 1;
        y -= 1;
        break;
    case 3:
        x -= 1;
        y -= 1;
        break;
    
    default:
        break;
    }

}

char Lion::getLetter() const
{
    return 'L';
}
