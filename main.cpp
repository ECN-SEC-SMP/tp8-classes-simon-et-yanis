#include <iostream>
#include <stdlib.h>

#include "animal.h"
#include "loup.h"
#include "lion.h"
#include "ours.h"
#include "pierre.h"

#define MAXX 10
#define MAXY 10

#define ANIMALS_TYPES 4

#define MAX_ANIMALS_NBR (MAXX*MAXY)/4
#define ANIMALS_PER_TYPE MAX_ANIMALS_NBR/ANIMALS_TYPES

int main()
{
    srand(time(NULL)); //Init the random generator
    std::cout << "Le jeu commence :" << std::endl;

    Animal* animaux[MAXX][MAXY];
    //Generate each type of animals
    for (size_t i = 0; i < ANIMALS_PER_TYPE; i++)
    {
        Animal* generated = new Loup(MAXX, MAXY);
        Animal* cell = animaux[generated->getX()][generated->getY()];
    std::cout << "yo" << std::endl;

        if(cell == nullptr) {
            cell = generated;
        } else {
            if(generated->attaque(*cell)) {
                cell = generated;
            } else {
                //DO NOTHING, THE GENERATED ANIMAL LOST
            }
        }
    }
    
    for (size_t i = 0; i < ANIMALS_PER_TYPE; i++)
    {
        Animal* generated = new Lion(MAXX, MAXY);
        Animal* cell = animaux[generated->getX()][generated->getY()];

        if(cell == nullptr) {
            cell = generated;
        } else {
            if(generated->attaque(*cell)) {
                cell = generated;
            } else {
                //DO NOTHING, THE GENERATED ANIMAL LOST
            }
        }
    }

    for (size_t i = 0; i < ANIMALS_PER_TYPE; i++)
    {
        Animal* generated = new Ours(MAXX, MAXY);
        Animal* cell = animaux[generated->getX()][generated->getY()];

        if(cell == nullptr) {
            cell = generated;
        } else {
            if(generated->attaque(*cell)) {
                cell = generated;
            } else {
                //DO NOTHING, THE GENERATED ANIMAL LOST
            }
        }
    }

    for (size_t i = 0; i < ANIMALS_PER_TYPE; i++)
    {
        Animal* generated = new Pierre(MAXX, MAXY);
        Animal* cell = animaux[generated->getX()][generated->getY()];

        if(cell == nullptr) {
            cell = generated;
        } else {
            if(generated->attaque(*cell)) {
                cell = generated;
            } else {
                //DO NOTHING, THE GENERATED ANIMAL LOST
            }
        }
    }

    //Affichage plateau

    for (size_t i = 0; i < MAXX; i++)
    {
        for (size_t j = 0; j < MAXY; j++)
        {
            Animal* cell = animaux[i][j];
            if(cell == nullptr) {
                std::cout << "-";
            } else {
                std::cout << cell->getLetter();
            }
        }
        std::cout << std::endl;
    }
    
    for (size_t i = 0; i < MAXX; i++)
    {
        for (size_t j = 0; j < MAXY; j++)
        {
            Animal* cell = animaux[i][j];

            if(cell != nullptr) {
                delete cell;
            }
        }
    }


    return 0;
}