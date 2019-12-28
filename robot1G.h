#ifndef ROBOT1G_H_INCLUDED
#define ROBOT1G_H_INCLUDED
#include "Personnage.h"
#include "joueur.h"

class robot1G : public Personnage {

public :
    robot1G(const position &pos);
    virtual void deplace(const joueur &j);
    virtual char signe()const override;
    bool detecteJoueurPlusHaut(const joueur &j)const;
    bool detecteJoueurPlusBas(const joueur &j) const;
    bool detecteJoueurAGauche(const joueur &j)const;
    bool detecteJoueurADroite(const joueur &j)const;

private:



};


#endif // ROBOT1G_H_INCLUDED
