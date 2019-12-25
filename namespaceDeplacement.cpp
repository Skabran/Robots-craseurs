#include "namespaceDeplacement.h"
#include "position.h"

namespace deplacement
{

void deplacementCroix(position& pos)
{
    char c;
    std::cin>>c;
    switch(c)
    {
    case 'z':
        deplaceHaut(pos);
        break;
    case 'q':
        deplaceGauche(pos);
        break;
    case 's' :
        deplaceBas(pos);
        break;
    case 'd' :
        deplaceDroite(pos);
        break;
    default :
        break;
    }

}

void deplacementDiagonale(position& pos)
{
    char c;
    std::cin>>c;
    switch(c)
    {
    case 'z':
        deplaceHaut(pos);
        break;
    case 'q':
        deplaceGauche(pos);
        break;
    case 's' :
        deplaceBas(pos);
        break;
    case 'd' :
        deplaceDroite(pos);
        break;
    case 'a' :
        deplaceHautGauche(pos);
        break;
    case 'e' :
        deplaceHautDroite(pos);
        break;
    case 'w' :
        deplaceBasGauche(pos);
        break;
    case 'c' :
        deplaceBasDroite(pos);
        break;
    default :
        break;
    }
}

void deplaceHaut(position& pos)
{
    pos.changePosition(pos.valeurX(), pos.valeurY()+1);
}

void deplaceGauche(position& pos)
{
    pos.changePosition(pos.valeurX()-1, pos.valeurY());
}

void deplaceBas(position& pos)
{
    pos.changePosition(pos.valeurX(), pos.valeurY()-1);
}

void deplaceDroite(position& pos)
{
    pos.changePosition(pos.valeurX()+1, pos.valeurY());
}

void deplaceHautGauche(position& pos)
{
    pos.changePosition(pos.valeurX()-1, pos.valeurY()+1);
}

void deplaceBasGauche(position& pos)
{
    pos.changePosition(pos.valeurX()-1, pos.valeurY()-1);
}

void deplaceBasDroite(position& pos)
{
    pos.changePosition(pos.valeurX()+1, pos.valeurY()-1);
}

void deplaceHautDroite(position& pos)
{
    pos.changePosition(pos.valeurX()+1, pos.valeurY()+1);
}

}
