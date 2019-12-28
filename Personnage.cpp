#include "Personnage.h"

const int PAS = 1;

Personnage::Personnage(const position &pos):Element{pos}
{

}
Personnage::~Personnage()
{

}

position Personnage::pos() const
{
    return Element::d_pos;
}

void Personnage::deplaceHaut()
{
    d_pos.deplaceY(-PAS);
}

void Personnage::deplaceBas()
{
    d_pos.deplaceY(PAS);
}

void Personnage::deplaceGauche()
{
    d_pos.deplaceX(-PAS);
}

void Personnage::deplaceDroite()
{
    d_pos.deplaceX(PAS);
}

