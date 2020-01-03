#include "vieuxRobot.h"
#include<string>
#include "namespaceDeplacement.h"
#include "joueur.h"

vieuxRobot::vieuxRobot(position& pos, joueur& joueur1): robot{pos, joueur1}
{
    d_nom="VR";
}

vieuxRobot::~vieuxRobot(){}

void vieuxRobot::deplacePerso()
{
    deplacement::deplacementCroix(d_pos,deplacementAutomatique());
}

char vieuxRobot::deplacementAutomatique() const
{
    position positionJoueur=d_joueur->getPosition();
    double robotX=d_pos.valeurX();
    double robotY=d_pos.valeurY();
    double joueurX=positionJoueur.valeurX();
    double joueurY=positionJoueur.valeurY();

    if(d_pos.aGauche(positionJoueur))
    {
        if(d_pos.enDessous(positionJoueur))
        {
            if((robotX-joueurX)<(robotY-joueurY))
            {
                return deplacement::HAUT;
            }
            else
            {
                return deplacement::GAUCHE;
            }
        }
        else
        {
            if((robotX-joueurX)<(joueurY-robotY))
            {
                return deplacement::BAS;
            }
            else
            {
                return deplacement::GAUCHE;
            }
        }
    }
    else if (robotX<joueurX)
    {
        if(robotY>joueurY)
        {
            if((joueurX-robotX)<(robotY-joueurY))
            {
                return deplacement::HAUT;
            }
            else
            {
                return deplacement::DROITE;
            }
        }
        else
        {
            if((joueurX-robotX)<(joueurY-robotY))
            {
                return deplacement::BAS;
            }
            else
            {
                return deplacement::DROITE;
            }
        }
    }
    else{
        if(robotY>joueurY)
        {
            return deplacement::BAS;
        }
        else if(robotY<joueurY)
        {
            return deplacement::BAS;
        }
    }
}
