#ifndef ENTITE_H
#define ENTITE_H
#include <iostream>
#include "position.h"
#include <string>

class entite
{
public:
    entite(position& pos);
    virtual ~entite();
    position getPosition() const;
    std::string getNom() const;
    virtual void deplacePerso()=0;
    void afficheEntite(std::ostream& ost) const;
    void litEntite(std::istream& ist);

protected:
    position d_pos;
    std::string d_nom;
};

std::ostream& operator<<(std::ostream& ost, const entite& entite1);
std::istream& operator>>(std::istream& ist, entite& entite1);

#endif // entite_H
