#ifndef JEU_H_INCLUDED
#define JEU_H_INCLUDED
#include "terrain.h"
#include "Element.h"
#include "robot1G.h"
#include <iostream>
using std::ostream;
using std::vector;

const char HAUT = 'z';
const char BAS = 's';
const char GAUCHE = 'q';
const char DROITE = 'd';
const char HAUT_GAUCHE = 'a';
const char HAUT_DROITE = 'e';
const char BAS_GAUCHE = 'w';
const char BAS_DROITE = 'x';

class jeu{

public :
    jeu(const terrain &t);
    int score()const;
    char commandeJoueur() const;
    bool verifChoixJoueur(char commande)const;
    void deplaceJoueur(char choixJoueur,joueur &j);
    void enoncerRegles(ostream &ost)const;
    void changeDeTour();
    void run();
    void afficheScore(ostream &ost)const;
    bool estTermine;

private :
    int d_score;
    terrain d_terrain;

};


#endif // JEU_H_INCLUDED
