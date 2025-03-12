#include "loup.h"
#include "attaque.h"
#include "stdlib.h"

Loup::Loup(int maxX, int maxY): Animal(maxX, maxY) {}

void Loup::setAttaque(){
    int att = rand() % 3;
    switch (att)
    {
    case 0:
        typeAttaque = TypeAttaque::FEUILLE;
        break;
    case 1:
        typeAttaque = TypeAttaque::CISEAUX;
        break;
    case 2:
        typeAttaque = TypeAttaque::PIERRE;
        break;
    default:
        break;
    }
}


void Loup::deplace(int maxX,int maxY ) {
    x = rand() % (maxX+1);
    y = rand() % (maxY+1);
}