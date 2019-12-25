#include "obstacle.h"
#include "position.h"

obstacle::obstacle(position& pos): entite{pos}
{
    d_nom="O";
}

std::string obstacle::getNom() const
{
    return d_nom;
}
