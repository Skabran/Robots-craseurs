#include "afficherJeu.h"
#include "jeu.h"
#include <iostream>
#include "graphics.h"
#include <windows.h>

using std::cout;
using std::cin;
using std::endl;

afficherJeu::afficherJeu():d_pointeurJeu{nullptr} {}

afficherJeu::afficherJeu(jeu& leJeu): d_pointeurJeu{&leJeu} {}

void afficherJeu::afficheMenu() const
{
    cout<<"\t \t \t Le jeu des robots ecraseurs, c est parti !"<<endl;
    int nbVieuxRobot;
    int nbNouveauxRobots;
    int tailleFenetre;
    char typePartie;
    //ajouter fonction de chargement
    cout<<"Desirez vous jouer en mode facile (F) ou en mode difficile (D) ?"<<endl;
    cin>>typePartie;
    cout<<"Combien d anciens modeles de robots ?"<<endl;
    cin>>nbVieuxRobot;
    cout<<"Combien de nouveau modeles de robots ?"<<endl;
    cin>>nbNouveauRobots;
    cout<<"Taille de la grille souhaite :";
    cin>>tailleFenetre;
    jeu leJeu(nbVieuxRobot, nbNouveauRobots, tailleFenetre, typePartie);
    d_pointeurJeu=&leJeu;
    leJeu.run();
}

void afficherJeu::afficheTerrain()
{

}

void afficherJeu::afficheFinPartie()
{

}
