#include "joueurFacile.h"
#include <string>
#include "namespaceDeplacement.h"
#include <iostream>

joueurFacile::joueurFacile(position& pos): joueur{pos}
 {
    d_nom="JF";
 }

joueurFacile::~joueurFacile(){}

void joueurFacile::deplacePerso()
{
    char c;
    std::cin>>c;
    deplacement::deplacementDiagonale(d_pos, c);
}


