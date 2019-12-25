#ifndef JOUEUR_H
#define JOUEUR_H
#include "personnage.h"
#include <string>

class joueur:public personnage
{
public:
    joueur(position& pos);
    virtual ~joueur();
    std::string getNom() const;
    virtual void deplacePerso() override =0;
};
#endif // JOUEUR_H
