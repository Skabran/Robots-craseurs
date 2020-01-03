#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "entite.h"

class obstacle:public entite
{
public:
    obstacle(position& pos);
    std::string getNom() const;
    void deplacePerso() override final;
};

#endif // OBSTACLE_H
