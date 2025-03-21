#include <iostream>

#include "plateau.h"


Plateau::Plateau(){

    for (size_t i = 0; i < MAXX; i++)
    {
        for (size_t j = 0; j < MAXY; j++)
        {
            plateau[i][j] = nullptr;
        }   
    }

    //Generate each type of animals
    for (size_t i = 0; i < ANIMALS_PER_TYPE; i++)
    {
        Animal* generated = new Loup(MAXX, MAXY);
        Animal* cell = plateau[generated->getX()][generated->getY()];

        if(cell == nullptr) {
            plateau[generated->getX()][generated->getY()] = generated;
        } else {
            if(generated->attaque(*cell)) {
                plateau[generated->getX()][generated->getY()] = generated;
            } else {
                //DO NOTHING, THE GENERATED ANIMAL LOST
            }
        }
    }
    
    for (size_t i = 0; i < ANIMALS_PER_TYPE; i++)
    {
        Animal* generated = new Lion(MAXX, MAXY);
        Animal* cell = plateau[generated->getX()][generated->getY()];

        if(cell == nullptr) {
            plateau[generated->getX()][generated->getY()] = generated;
        } else {
            if(generated->attaque(*cell)) {
                plateau[generated->getX()][generated->getY()] = generated;
            } else {
                //DO NOTHING, THE GENERATED ANIMAL LOST
            }
        }
    }

    for (size_t i = 0; i < ANIMALS_PER_TYPE; i++)
    {
        Animal* generated = new Ours(MAXX, MAXY);
        Animal* cell = plateau[generated->getX()][generated->getY()];

        if(cell == nullptr) {
            plateau[generated->getX()][generated->getY()] = generated;
        } else {
            if(generated->attaque(*cell)) {
                plateau[generated->getX()][generated->getY()] = generated;
            } else {
                //DO NOTHING, THE GENERATED ANIMAL LOST
            }
        }
    }

    for (size_t i = 0; i < ANIMALS_PER_TYPE; i++)
    {
        Animal* generated = new Pierre(MAXX, MAXY);
        Animal* cell = plateau[generated->getX()][generated->getY()];

        if(cell == nullptr) {
            plateau[generated->getX()][generated->getY()] = generated;
        } else {
            if(generated->attaque(*cell)) {
                plateau[generated->getX()][generated->getY()] = generated;
            } else {
                //DO NOTHING, THE GENERATED ANIMAL LOST
            }
        }
    }
}

void Plateau::affichage() const
{
    //Affichage plateau

    for (size_t i = 0; i < MAXX; i++)
    {
        for (size_t j = 0; j < MAXY; j++)
        {
            Animal* cell = plateau[i][j];
            if(cell == nullptr) {
                std::cout << "-";
            } else {
                std::cout << cell->getLetter();
            }
        }
        std::cout << std::endl;
    }
}

void Plateau::simulerTour()
{
    Animal* animaux[MAX_ANIMALS_NBR];
    int cpt = 0;

    for (size_t i = 0; i < MAXX; i++)
    {
        for (size_t j = 0; j < MAXY; j++)
        {
            Animal* cell = plateau[i][j];

            if(cell == nullptr) continue; //No Animal on this cell
            plateau[i][j] = nullptr; //"Empty" the board
            cell->deplace(MAXX, MAXY); //Make the animals move
            animaux[cpt++] = cell; //Populate an array with pointers to all alive animals (so we don't have to iterate twice over the whole board)
        }
    }

    //For all animals on the board
    for (size_t i = 0; i < cpt; i++)
    {
        Animal* current = animaux[i];
        if(current == nullptr) continue; //Check that current isn't already dead (deleted)
        bool fought = false;
        //std::cout << "==============" << current << " X: " << current->getX() << " Y: " << current->getY() <<"===============" << std::endl;
        for (size_t j = 0; j < cpt; j++)
        {
            Animal* checking = animaux[j];
            if(checking==nullptr) continue; //If the checking is already defeated (deleted) then skip this iteration
            if(checking==current) continue; //Avoid fighting ourselves

            if((checking->getX() == current->getX()) && (checking->getY() == current->getY())) {
                //If current wins the battle
                if(current->attaque(*checking)) {
                    plateau[checking->getX()][checking->getY()] = current; //Set the current Animal as the "owner" of the cell
                    delete checking; //Free the animal (and his memory) from his suffering
                    animaux[j] = nullptr; //Remove the defeated animal's pointer from the array
                } else {
                    //If current lost the battle
                    plateau[checking->getX()][checking->getY()] = checking;
                    delete current; //Free the animal (and his memory) from his suffering
                    animaux[i] = nullptr;
                    break;
                }
                fought = true;
            }
        }
        //If the cell isn't contested
        if(!fought) {
            //We are relying on the computed coordinates to be valid (in bounds)
            //The program will crash if the computation is invalid
            //Not that it would happen of course *cough* *cough*
            plateau[current->getX()][current->getY()] = current; //Set the current animal as "owner" of the cell
        }
        
    }
    
    
}
