#include "joueurFacile.h"
#include <string>
#include "namespaceDeplacement.h"

joueurFacile::joueurFacile(position& pos): joueur{pos}
 {
    d_nom="JF";
 }

joueurFacile::~joueurFacile(){}

void joueurFacile::deplacePerso()
{
    deplacement::deplacementDiagonale(d_pos);
}


