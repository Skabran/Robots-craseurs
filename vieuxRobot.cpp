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
//    if(x()>j.x())
//    {
//        if(y()>j.y())
//        {
//            if((x()-j.x())<(y()-j.y()))
//            {
//                deplaceHaut();
//            }
//            else
//            {
//                deplaceGauche();
//            }
//        }
//        else
//        {
//            if((x()-j.x())<(j.y()-y()))
//            {
//                deplaceBas();
//            }
//            else
//            {
//                deplaceGauche();
//            }
//        }
//    }
//    else if (x()<j.x())
//    {
//        if(y()>j.y())
//        {
//            if((j.x()-x())<(y()-j.y()))
//            {
//                deplaceHaut();
//            }
//            else
//            {
//                deplaceDroite();
//            }
//        }
//        else
//        {
//            if((j.x()-x())<(j.y()-y()))
//            {
//                deplaceBas();
//            }
//            else
//            {
//                deplaceDroite();
//            }
//        }
//    }
//    else{
//        if(y()>j.y())
//        {
//            deplaceHaut();
//        }
//        else if(y()<j.y())
//        {
//            deplaceBas();
//        }
//        else
//            return;
//    }
}
