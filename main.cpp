#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "plateau.h"

int main()
{
    srand(time(NULL)); //Init the random generator
    std::cout << "Le jeu commence :" << std::endl;

    Plateau p;

    //Print the initial board
    p.affichage();

    //Execute new turn if 'q' isn't pressed
    while (getchar() != 'q')
    {
        //Print separator between every turns
        std::cout << "==============================================" << std::endl;

        p.simulerTour();
        p.affichage();
    }
    

    return 0;
}