#ifndef ROBOT_H
#define ROBOT_H
#include "entite.h"
#include<string>

class joueur;

class robot:public entite
{
public:
    robot(position& pos, joueur& joueur1);
    virtual ~robot();
    std::string getNom() const;
    virtual void deplacePerso() override =0;
    virtual char deplacementAutomatique() const =0;
protected:
    joueur* d_joueur;
};
#endif // ROBOT_H
