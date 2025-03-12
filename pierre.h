#include "animal.h"

class Pierre : public Animal 
{
public:

void setAttaque();
void deplace(int maxX, int maxY);
char getLetter() const;

/// constructeurs
Pierre(int maxX, int maxY);

};