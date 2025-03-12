#include "animal.h"

class Ours : public Animal 
{
public:

void setAttaque();
void deplace(int maxX, int maxY);
char getLetter() const;


/// constructeurs
Ours(int maxX, int maxY);

};