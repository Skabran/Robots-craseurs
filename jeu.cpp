#include "jeu.h"
#include<vector>
#include<string>
#include<ctime>
#include "obstacle.h"
#include "position.h"
#include "joueurFacile.h"
#include "joueurDifficile.h"

jeu::jeu():
d_nbVieuxRobots{3}, d_nbNouveauxRobots{1},d_tailleTerrain{200},
d_typePartie{'F'},d_vectEntite{} {},d_score{0},d_jeuTermine{false}
{
    joueurFacile *j1=new joueurFacile{position p{d_tailleTerrain/2, d_tailleTerrain/2}};
    d_vectEntite.push_back(j1);
}

jeu::jeu(int nbVieuxRobots, int nbNouveauxRobots, int tailleTerrain, char typePartie):
d_nbVieuxRobots{nbVieuxRobots}, d_nbNouveauxRobots{nbNouveauxRobots},d_tailleTerrain{tailleTerrain}, d_typePartie{typePartie},
d_vectEntite{},d_score{0}, d_jeuTermine{false}
{
    if(d_typePartie=='D')
    {
        joueurDifficile *j1=new joueurDifficile{position p{d_tailleTerrain/2, d_tailleTerrain/2}};
        d_vectEntite.push_back(j1)
    }
    else
    {
        joueurFacile *j1=new joueurFacile{position p{d_tailleTerrain/2, d_tailleTerrain/2}};
        d_vectEntite.push_back(j1);
    }
}

jeu::~jeu() {}

void jeu::run(afficherJeu& affichage)
{
    while(d_jeuTermine==false)
    {
        jouerUnTour(affichage);
    }
}



void jeu::ajouterEntite(position& pos, int nomEntite)
{
    if(nomEntite==DEBRIS)
    {
        obstacle *debris1=new obstacle{pos};
        d_vectEntite.push_back(debris1);
    }
    else if(nomEntite==VIEUXROBOT)
    {
        vieuxRobot *vRob=new vieuxRobot{pos};
        d_vectEntite.push_back(vRob);
    }
    else if(nomEntite==NOUVEAUROBOT)
    {
        nouveauRobot *nRob=new nouveauRobot{pos};
        d_vectEntite.push_back(nRob);
    }
}

void jeu::ajouterEntiteAleatoire(int nomEntite)
{
    std::srand(std::time(nullptr));
    int varAleatoire=std::srand();
    position pos(varAleatoire%d_tailleTerrain, varAleatoire%d_tailleTerrain);
    ajouterEntite(pos,nomEntite);
}

void jeu::creerDebris(position& pos)
{
    obstacle *debris1=new obstacle{pos};
    d_vectEntite.push_back(debris1);
}

void jeu::supprimerEntite(entite* entite1)
{
    delete entite1;
    entite1=d_vectEntite[d_vectEntite.size()-1];
    d_vectEntite.pop_back();
}

void jeu::jouerUnTour(afficherJeu& affichage)
{
    for(int i=0; i<d_vectEntite.size();i++)
    {
        d_vectEntite[i]->deplacePerso();
    }
    collision();
    affichage.afficheTerrain();

}

void jeu::collision()
{
    if(!d_vectEntite.empty())
    {
        for(int i=0; i<d_vectEntite.size()-1; i++)
        {
            for(int j=i+1; j<d_vectEntite.size(); j++)
            {
                while(d_vectEntite[i]->getPosition()==d_vectEntite[j]->getPosition()) //si la dernière case avait la même position avant remplacement
                {
                    if(d_vectEntite[i]->getNom()[1]=='J'||d_vectEntite[j]->getNom()[1]=='J') //si joueur entre en collision Game Over
                    {
                        finDePartie(true);
                    }
                    else
                        supprimerEntite(d_vectEntite[j]);
                        d_score+=NBPOINTMECHANT;
                }
            }
            ajouterEntite(d_vectEntite[i]->getPosition(),DEBRIS);
            supprimerEntite(d_vectEntite[i]);
            d_score+=NBPOINTMECHANT;
        }
    }
}





