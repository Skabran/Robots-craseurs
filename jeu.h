#ifndef JEU_H
#define JEU_H
#include <vector>
#include <string>
#include "entite.h"
#include "position.h"

const int NBPOINTMECHANT = 100;
const int DEBRIS=1;
const int VIEUXROBOT=2;
const int NOUVEAUROBOT=3;

class jeu
{
    class friend afficherJeu;

public:
    jeu();
    jeu(int nbVieuxRobots, int nbNouveauxRobots,int tailleTerrain, char typePartie)
    ~jeu();
    void run(afficherJeu& affichage);
    void ajouterEntite(position& pos, int nomEntite);
    void ajouterEntiteAleatoire(int nomEntite);
    void supprimerEntite(entite* entite1);
    void jouerUnTour(afficherJeu& affichage);
    void collision();
private:
    int d_nbVieuxRobots;
    int d_nbNouveauxRobots;
    int d_tailleTerrain;
    char d_typePartie;
    std::vector<entite *> d_vectEntite;
    int d_score;
    bool d_jeuTermine;
};
#endif // JEU_H
