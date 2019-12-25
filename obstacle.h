#ifndef OBSTACLE_H
#define OBSTACLE_H
#include "entite.h"

class obstacle:public entite
{
public:
    obstacle(position& pos);
    std::string getNom() const;
};

#endif // OBSTACLE_H
