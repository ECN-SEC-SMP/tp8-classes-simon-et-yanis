#include "animal.h"

class Loup : public Animal 
{
public:

void setAttaque();
void deplace(int maxX, int maxY);
char getLetter() const;

/// constructeurs
Loup(int maxX, int maxY);

};