#ifndef ROBOT_H
#define ROBOT_H
#include "personnage.h"
#include<string>

class robot:public personnage
{
public:
    robot(position& pos);
    virtual ~robot();
    std::string getNom() const;
    virtual void deplacePerso() override =0;
};
#endif // ROBOT_H
