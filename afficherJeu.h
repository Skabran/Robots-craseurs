#ifndef AFFICHERJEU_H
#define AFFICHERJEU_H
#include "jeu.h"

class afficherJeu
{
public:
    afficherJeu();
    afficherJeu(jeu& leJeu);
    void afficheMenu() const;
    void afficheTerrain() const;
    void afficheFinPartie() const;

private:
    jeu* d_pointeurJeu;
};

#endif // AFFICHERJEU_H
