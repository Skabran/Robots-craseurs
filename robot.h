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
    virtual void deplacePerso(const joueur& joueur1) override =0;
    virtual char deplacementAutomatique(const joueur& joueur1) const =0;
private:
    joueur* d_joueur;
};
#endif // ROBOT_H
