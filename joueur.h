#ifndef JOUEUR_H_INCLUDED
#define JOUEUR_H_INCLUDED
#include "Personnage.h"
#include <iostream>
class joueur: public Personnage{

public :

    joueur(const position &pos);
    virtual char signe()const override;

private :

};


#endif // JOUEUR_H_INCLUDED
