#include "jeu.h"
#include<vector>
#include<string>
#include "obstacle.h"
#include "position.h"

jeu::jeu():d_vectEntite{} {}

jeu::~jeu() {}

void jeu::ajouterEntite(entite& entite1)
{
    d_vectEntite.push_back(&entite1);
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

void jeu::collision()
{
    if(!d_vectEntite.empty())
    {
        for(int i=0; i<d_vectEntite.size()-1; i++)
        {
            for(int j=1; j<d_vectEntite.size(); j++)
            {
                while(d_vectEntite[i]->getPosition()==d_vectEntite[j]->getPosition()) //si la dernière case avait la même position avant remplacement
                {
                    if(d_vectEntite[i]->getNom()[1]=='J'||d_vectEntite[j]->getNom()[1]=='J') //si joueur entre en collision Game Over
                    {
                        finDePartie();
                    }
                    else
                        supprimerEntite(d_vectEntite[j]);
                }
            }
            creerDebris(d_vectEntite[i]->getPosition());
            supprimerEntite(d_vectEntite[i]);
        }
    }
}






