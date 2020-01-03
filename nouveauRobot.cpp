#include "nouveauRobot.h"
#include<string>
#include "namespaceDeplacement.h"
#include "position.h"

nouveauRobot::nouveauRobot(position& pos, joueur& joueur1): robot{pos,joueur1}
{
    d_nom="NR";
}

nouveauRobot::~nouveauRobot(){}

void nouveauRobot::deplacePerso()
{
    deplacement::deplacementDiagonale(d_pos,deplacementAutomatique());
}


char nouveauRobot::deplacementAutomatique() const
{
    position positionJoueur=d_joueur->getPosition(); //constructeur par recopie par default
    if(d_pos.aGauche(positionJoueur))
    {
        if(d_pos.auDessus(positionJoueur))
        {
            return deplacement::BASDROITE;
        }
        else if(d_pos.enDessous(positionJoueur))
        {
            return deplacement::HAUTDROITE;
        }
        else{
            return deplacement::DROITE;
        }
    }
    else if (d_pos.aDroite(positionJoueur))
    {
        if(d_pos.auDessus(positionJoueur))
        {
            return deplacement::BASGAUCHE;
        }
        else if(d_pos.enDessous(positionJoueur))
        {
            return deplacement::HAUTGAUCHE;
        }
        else{
            return deplacement::GAUCHE;
        }
    }
    else{
        if(d_pos.auDessus(positionJoueur))
        {
            return deplacement::BAS;
        }
        else if(d_pos.enDessous(positionJoueur))
        {
            return deplacement::HAUT;
        }
    }
}
