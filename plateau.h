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

class Plateau
{
private:
    Animal* plateau[MAXX][MAXY];
public:
    Plateau(/* args */);
    void affichage() const;
    void simulerTour();
};