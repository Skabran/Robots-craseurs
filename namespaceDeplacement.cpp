#include "namespaceDeplacement.h"
#include "position.h"

namespace deplacement
{

void deplacementCroix(position& pos, char c)
{
    switch(c)
    {
    case HAUT:
        deplaceHaut(pos);
        break;
    case GAUCHE:
        deplaceGauche(pos);
        break;
    case BAS :
        deplaceBas(pos);
        break;
    case DROITE :
        deplaceDroite(pos);
        break;
    default :
        break;
    }

}

void deplacementDiagonale(position& pos,char c)
{
    switch(c)
    {
    case HAUT:
        deplaceHaut(pos);
        break;
    case GAUCHE:
        deplaceGauche(pos);
        break;
    case BAS :
        deplaceBas(pos);
        break;
    case DROITE :
        deplaceDroite(pos);
        break;
    case HAUTGAUCHE :
        deplaceHautGauche(pos);
        break;
    case HAUTDROITE :
        deplaceHautDroite(pos);
        break;
    case BASGAUCHE :
        deplaceBasGauche(pos);
        break;
    case BASDROITE :
        deplaceBasDroite(pos);
        break;
    default :
        break;
    }
}

void deplaceHaut(position& pos)
{
    pos.changePosition(pos.valeurX(), pos.valeurY()-1);
}

void deplaceGauche(position& pos)
{
    pos.changePosition(pos.valeurX()-1, pos.valeurY());
}

void deplaceBas(position& pos)
{
    pos.changePosition(pos.valeurX(), pos.valeurY()+1);
}

void deplaceDroite(position& pos)
{
    pos.changePosition(pos.valeurX()+1, pos.valeurY());
}

void deplaceHautGauche(position& pos)
{
    pos.changePosition(pos.valeurX()-1, pos.valeurY()-1);
}

void deplaceBasGauche(position& pos)
{
    pos.changePosition(pos.valeurX()-1, pos.valeurY()+1);
}

void deplaceBasDroite(position& pos)
{
    pos.changePosition(pos.valeurX()+1, pos.valeurY()+1);
}

void deplaceHautDroite(position& pos)
{
    pos.changePosition(pos.valeurX()+1, pos.valeurY()-1);
}

}
