#ifndef JEU_H
#define JEU_H
#include <vector>
#include "entite.h"
#include "position.h"

class jeu
{
public:
    jeu();
    ~jeu();
    void run();
    void ajouterEntite(entite& entite1);
    void creerDebris(position& pos);
    void supprimerEntite(entite* entite1);
    void jouerUnTour();
    void collision();
    void finDePartie();
private:
    std::vector<entite *> d_vectEntite;
};
#endif // JEU_H
