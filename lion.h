#include "animal.h"

class Lion : public Animal 
{
public:

virtual void setAttaque();
virtual void deplace(int maxX, int maxY);
char getLetter() const;
/// constructeurs
Lion(int maxX, int maxY);

};


