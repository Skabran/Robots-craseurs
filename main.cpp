#include <iostream>
#include "terrain.h"
#include "Personnage.h"
#include "joueur.h"
#include "robot1G.h"
#include "position.h"
#include "jeu.h"

using namespace std;


int main()
{
    /*terrain t=terrain(10,10);
    joueur *j=new joueur({5,5});
    robot1G *r=new robot1G({5,6});
    t.ajouteElement(j);
    t.ajouteElement(r);

    t.affiche(cout,t.terrainAvecElem());
    */
    terrain t=terrain(10,10);
    jeu j=jeu(t);
    j.run();
    return 0;
}




