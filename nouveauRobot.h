#ifndef NOUVEAUROBOT_H
#define NOUVEAUROBOT_H
#include "robot.h"
#include<string>

class nouveauRobot : public robot
{
public:
    nouveauRobot(position& pos, joueur& joueur1);
    virtual ~nouveauRobot();
    std::string getNom() const;
    void deplacePerso() override final;
    char deplacementAutomatique() const override final;

};

#endif // NOUVEAUROBOT_H
