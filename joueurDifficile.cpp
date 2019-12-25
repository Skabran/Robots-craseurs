#include "joueurDifficile.h"
#include "namespaceDeplacement.h"
#include <string>

joueurDifficile::joueurDifficile(position& pos): joueur{pos}
{
    d_nom="JD";
}

joueurDifficile::~joueurDifficile(){}

void joueurDifficile::deplacePerso()
{
    deplacement::deplacementCroix(d_pos);
}
