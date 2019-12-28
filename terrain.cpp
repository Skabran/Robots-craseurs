#include "terrain.h"

terrain::terrain(int longueur, int hauteur):d_longueur{longueur},d_hauteur{hauteur},d_element{}
{

}


vector<vector<char>> terrain::terrainInit()
{
    vector<vector<char>> terrainChar(d_hauteur, vector<char> (d_longueur, '.'));
    return terrainChar;

}

vector<vector<char>> terrain::terrainAvecElem()
{
    vector<vector<char>> terrainChar = terrainInit();
    for(unsigned int i=0;i<d_element.size();i++)
    {
        terrainChar[d_element[i]->pos().y()][d_element[i]->pos().x()]=d_element[i]->signe();
    }
    return terrainChar;
}

void terrain::ajouteElement(Element *elem)
{
    d_element.push_back(elem);
}
int terrain::longueur()const
{
    return d_longueur;
}

int terrain::hauteur()const
{
    return d_hauteur;
}


void terrain::affiche(std::ostream &ost, const vector<vector<char>> &terrainCaract)const
{
    for(unsigned int  i=0; i<terrainCaract.size();++i)
    {
        for(unsigned int j=0;j<terrainCaract[i].size();++j)
        {
            ost<<terrainCaract[i][j]<<' ';
        }
        ost<<"\n"<<"\n";
    }
}


