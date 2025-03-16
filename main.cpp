#include <iostream>
#include <stdlib.h>
#include <cstring>
#include "plateau.h"

int main()
{
    srand(time(NULL)); //Init the random generator
    std::cout << "Le jeu commence :" << std::endl;

    Plateau p;

    p.affichage();

    while (getchar() != 'q')
    {
        /* code */
        std::cout << "==============================================" << std::endl;

        p.simulerTour();
        p.affichage();
    }
    

    return 0;
}