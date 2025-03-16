#include "ours.h"
#include "attaque.h"
#include "stdlib.h"

Ours::Ours(int maxX, int maxY): Animal(maxX, maxY) {}

void Ours::setAttaque(){
    typeAttaque = TypeAttaque::FEUILLE; // les ours n'attaquent qu'avec la feuille
}

void Ours::deplace(int maxX,int maxY ) {
    int cell = rand() % 8;
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

    //Make sure the coords are in bounds
    if(x>=maxX) x -= maxX;
    if(x<0) x = maxX + x;

    if(y>=maxY) y = maxY;
    if(y<0) y = maxY + y;

}

char Ours::getLetter() const
{
    return 'O';
}