#include "jeu.h"
#include<vector>

jeu::jeu():d_vectEntite{} {}

jeu::~jeu() {}

void jeu::ajouterEntite(entite& entite1)
{
    d_vectEntite.push_back(&entite1);
}

void jeu::supprimerEntite(position& posASupprimer)
{
    if(!d_vectEntite.empty())
    {
        int i=0;
        while( i<d_vectEntite.size())
        {
            if(d_vectEntite[i]->getPosition()==posASupprimer)
            {
                delete d_vectEntite[i];
                d_vectEntite[i]=d_vectEntite[d_vectEntite.size()-1];
                d_vectEntite.pop_back();
                i=d_vectEntite.size();
            }
            i++;
        }
    }
}






