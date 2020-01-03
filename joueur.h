#ifndef JOUEUR_H
#define JOUEUR_H
#include "entite.h"
#include <string>

class position;

class joueur:public entite
{
public:
    joueur(position& pos);
    virtual ~joueur();
    std::string getNom() const;
    virtual void deplacePerso() override =0;
};
#endif // JOUEUR_H
