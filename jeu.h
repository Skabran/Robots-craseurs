#ifndef JEU_H
#define JEU_H
#include <vector>
#include "entite.h"

class jeu
{
public:
    jeu();
    ~jeu();
    void ajouterEntite(entite& entite1);
    void supprimerEntite();
    void jouerUnTour();
private:
    std::vector<entite *> d_vectEntite;
};
#endif // JEU_H
