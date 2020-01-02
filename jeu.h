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
    void ajouterEntite(entite& entite1);
    void supprimerEntite(position& posASupprimer);
    void jouerUnTour();
private:
    std::vector<entite *> d_vectEntite;
};
#endif // JEU_H
