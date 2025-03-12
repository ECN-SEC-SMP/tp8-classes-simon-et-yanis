#pragma once

#include <string>

enum class TypeAttaque
{
    PIERRE, FEUILLE, CISEAUX, MAX_VAL
};

class Attaque
{
private:
    TypeAttaque type;
public:
    Attaque(); //Random attaque 
    Attaque(TypeAttaque t); //Create set attaque type

    TypeAttaque getType() const;

    //Returns true if the supplied attack beats this one
    bool resoudreAttaque(Attaque const &a) const;

    std::string getNomAttaque() const;

};