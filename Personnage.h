#ifndef PERSONNAGE_H_INCLUDED
#define PERSONNAGE_H_INCLUDED
#include "Element.h"
#include <iostream>
class Personnage : public Element{

public:
    Personnage(const position &pos);
    virtual ~Personnage();
    //virtual void affiche(std::ostream &ost)const=0;
    virtual char signe()const=0;
    virtual position pos() const;
    void deplaceHaut();
    void deplaceBas();
    void deplaceGauche();
    void deplaceDroite();
    bool estVivant;
    bool estSonTour;

private:


};


#endif // PERSONNAGE_H_INCLUDED
