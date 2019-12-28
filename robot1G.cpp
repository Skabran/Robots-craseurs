#include "robot1G.h"

robot1G::robot1G(const position &pos):Personnage{pos}
{

}

char robot1G::signe()const
{
    return '1';
}
 void robot1G::deplace(const joueur &j)
{
    if(detecteJoueurPlusBas(j))
    {
        deplaceHaut();
    }
    else if(detecteJoueurPlusBas(j))
    {
        deplaceBas();
    }
    else if(detecteJoueurAGauche(j))
    {
        deplaceGauche();
    }
    else if (detecteJoueurADroite(j))
    {
        deplaceDroite();
    }
}

bool robot1G::detecteJoueurPlusHaut(const joueur &j)const
{
    return (pos().y()>j.pos().y());
}

bool robot1G::detecteJoueurPlusBas(const joueur &j)const
{
    return (pos().y()<j.pos().y());
}

bool robot1G::detecteJoueurAGauche(const joueur &j)const
{
    return (pos().x()>j.pos().x());
}

bool robot1G::detecteJoueurADroite(const joueur &j)const
{
    return (pos().x()<j.pos().x());
}
