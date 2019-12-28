#ifndef ELEMENT_H_INCLUDED
#define ELEMENT_H_INCLUDED
#include "position.h"
#include <iostream>

class Element{

public:
    Element(const position &pos);
    virtual ~Element();
    virtual position pos() const;
    //virtual void affiche(std::ostream &ost)const=0;
    virtual char signe()const=0;

protected:
    position d_pos;
};


#endif // ELEMENT_H_INCLUDED
