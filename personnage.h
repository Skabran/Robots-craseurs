#ifndef PERSONNAGE_H
#define PERSONNAGE_H
#include "entite.h"
#include "position.h"
#include<string>

class personnage : public entite
{
public:
    personnage(position& pos);
    virtual ~personnage();
    std::string getNom() const;


};

#endif // PERSONNAGE_H
