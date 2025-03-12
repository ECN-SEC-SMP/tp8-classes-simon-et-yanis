#include "ours.h"
#include "attaque.h"
#include "stdlib.h"

Ours::Ours(int maxX, int maxY): Animal(maxX, maxY) {}

void Ours::setAttaque(){
    TypeAttaque::Attaque(TypeAttaque::FEUILLE); // les ours n'attaquent qu'avec la feuille
}

void Ours::deplace(int maxX,int maxY ) {
    int case = rand() % 7;
    switch (case)
    {
    case 0:
        x -= 1
        y += 2
        break;
    case 1:
        x -= 2
        y -= 1
        break;
    case 2:
        x -= 2
        y += 1
        break;
    case case == 3:
        x -= 1
        y += 2
        break;
    case case == 4:
        x += 1
        y += 2
        break;
    case case == 5:
        x += 2
        y += 1
        break;
    case case == 6:
        x += 2
        y -= 1
        break;
    case case == 7:
        x += 1
        y -= 2
        break;
    
    default:
        break;
    }

}