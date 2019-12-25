#include "entite.h"
#include "position.h"
#include <iostream>
#include <string>

entite::entite(position& pos): d_pos{pos}, d_nom{' '} {}

entite::~entite(){}

position entite::getPosition() const
{
    return d_pos;
}

std::string entite::getNom() const
{
    return d_nom;
}

void entite::afficheEntite(std::ostream& ost) const
{
    ost<<d_nom<<d_pos;
}

void entite::litEntite(std::istream& ist)
{
    ist>>d_nom>>d_pos;
}

std::ostream& operator<<(std::ostream& ost, const entite& entite1)
{
    entite1.afficheEntite(ost);
}

std::istream& operator>>(std::istream& ist, entite& entite1)
{
    entite1.litEntite(ist);
}
