#include "joueurDifficile.h"
#include "namespaceDeplacement.h"
#include <string>
#include <iostream>

joueurDifficile::joueurDifficile(position& pos): joueur{pos}
{
    d_nom="JD";
}

joueurDifficile::~joueurDifficile(){}

void joueurDifficile::deplacePerso()
{
    char c;
    std::cin>>c;
    deplacement::deplacementCroix(d_pos);
}
