#include "ours.h"
#include "attaque.h"
#include "stdlib.h"

Ours::Ours(int maxX, int maxY): Animal(maxX, maxY) {}

void Ours::setAttaque(){
    typeAttaque = TypeAttaque::FEUILLE; // les ours n'attaquent qu'avec la feuille
}

void Ours::deplace(int maxX,int maxY ) {
    int cell = rand() % 7;
    switch (cell)
    {
    case 0:
        x -= 1;
        y += 2;
        break;
    case 1:
        x -= 2;
        y -= 1;
        break;
    case 2:
        x -= 2;
        y += 1;
        break;
    case 3:
        x -= 1;
        y += 2;
        break;
    case 4:
        x += 1;
        y += 2;
        break;
    case 5:
        x += 2;
        y += 1;
        break;
    case 6:
        x += 2;
        y -= 1;
        break;
    case 7:
        x += 1;
        y -= 2;
        break;
    
    default:
        break;
    }

}

char Ours::getLetter() const
{
    return 'O';
}