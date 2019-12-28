#ifndef TERRAIN_H_INCLUDED
#define TERRAIN_H_INCLUDED
#include <vector>

#include <iostream>
using std::vector;
#include "Element.h"

class terrain {

public :
    terrain(int longueur, int hauteur);
    vector<vector<char>> terrainInit();
    vector<vector<char>> terrainAvecElem();
    void ajouteElement(Element *elem);
    int longueur() const;
    int hauteur() const;
    void affiche(std::ostream &ost, const vector<vector<char>> &terrainCaract)const;
    //void charger(std::ifstream &fi);

private :
    int d_longueur;
    int d_hauteur;
    vector<Element*> d_element;
};


#endif // TERRAIN_H_INCLUDED
