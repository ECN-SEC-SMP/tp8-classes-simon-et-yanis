#include <cassert>
#include <stdlib.h>

#include "attaque.h"



Attaque::Attaque()
{

    //Generate random attaque type
    type = (TypeAttaque) (rand() % (int)TypeAttaque::MAX_VAL);

}

Attaque::Attaque(TypeAttaque t)
{
    type = t;
}

TypeAttaque Attaque::getType() const
{
    return type;
}

bool Attaque::resoudreAttaque(Attaque const &a) const
{
    switch (type)
    {
    case TypeAttaque::PIERRE:
        return a.getType() == TypeAttaque::FEUILLE;
    case TypeAttaque::FEUILLE:
        return a.getType() == TypeAttaque::CISEAUX;
    case TypeAttaque::CISEAUX:
        return a.getType() == TypeAttaque::PIERRE;
    default:
        assert(false); //SHOULDN'T EXIST
        break;
    }
    

    return false;
}

std::string Attaque::getNomAttaque() const
{
    switch (type)
    {
    case TypeAttaque::PIERRE:
        return std::string("Pierre");
    case TypeAttaque::FEUILLE:
        return std::string("Feuille");
    case TypeAttaque::CISEAUX:
        return std::string("Ciseaux");
    default:
        assert(false); //SHOULDN'T EXIST
        break;
    }
}
