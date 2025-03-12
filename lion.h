#include "animal.h"

class Lion : public Animal 
{
public:

void setAttaque();
void deplace(int maxX, int maxY);
char getLetter() const;
/// constructeurs
Lion(int maxX, int maxY);

};


