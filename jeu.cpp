#include "jeu.h"

using std::cout;
using std::cin;
using std::endl;

jeu::jeu(const terrain &t):d_score{0},d_terrain{t}
{

}

char jeu::commandeJoueur()const
{
    char choix;
    cout<<"Que souhaitez-vous faire ?"<<endl<<"z pour haut"<<endl<<"s pour bas"<<endl<<"q pour gauche"<<endl<<"d pour droite"<<endl<<"a pour haut-gauche"<<endl<<"e pour haut-droite"<<endl<<"w pour bas-gauche"<<endl<<"x pour bas-droite"<<endl;
    cin>>choix;
    while(!verifChoixJoueur(choix))
    {
        cout<<"Veuillez entrer une commande valide"<<endl;
        choix=commandeJoueur();
    }
    return choix;
}

bool jeu::verifChoixJoueur(char commande)const
{
    return(commande=='z' ||commande== 's' ||commande== 'q' ||commande== 'd' ||commande== 'a' ||commande== 'e' ||commande== 'w' ||commande== 'x' );
}

void jeu::deplaceJoueur(char choixJoueur,joueur &j)
{
    if(choixJoueur==HAUT)
        j.deplaceHaut();
    else
        if(choixJoueur==BAS)
        j.deplaceBas();
    else
        if(choixJoueur==GAUCHE)
        j.deplaceGauche();
    else
        if(choixJoueur==DROITE)
        j.deplaceDroite();
    else
        if(choixJoueur==HAUT_GAUCHE)
        {
            j.deplaceHaut();
            j.deplaceGauche();
        }
    else
        if(choixJoueur==HAUT_DROITE)
        {
            j.deplaceHaut();
            j.deplaceDroite();
        }
    else
        if(choixJoueur==BAS_GAUCHE)
        {
            j.deplaceBas();
            j.deplaceGauche();
        }

    else
        if(choixJoueur==BAS_DROITE)
        {
            j.deplaceBas();
            j.deplaceDroite();
        }



}


void jeu::run()
{
    joueur *j=new joueur({d_terrain.longueur()/2,d_terrain.hauteur()/2});
    robot1G *r=new robot1G({d_terrain.longueur()/2,3});
    d_terrain.ajouteElement(j);
    d_terrain.ajouteElement(r);
    bool jeuTermine=false;
    bool tourJoueur=true;
    d_terrain.affiche(cout,d_terrain.terrainAvecElem());
    while(!jeuTermine)
    {
        if(tourJoueur)
        {
            deplaceJoueur(commandeJoueur(),*j);
        }
        else
        {
            cout<<r->detecteJoueurPlusHaut(*j)<<r->detecteJoueurPlusBas(*j);
            r->deplace(*j);
        }
        d_terrain.affiche(cout,d_terrain.terrainAvecElem());
        tourJoueur-=1;
    }
}
