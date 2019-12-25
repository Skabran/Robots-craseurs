#ifndef NOUVEAUROBOT_H
#define NOUVEAUROBOT_H
#include "robot.h"
#include<string>

class nouveauRobot : public robot
{
public:
    nouveauRobot(position& pos);
    virtual ~nouveauRobot();
    std::string getNom() const;
    void deplacePerso() override final;

};

#endif // NOUVEAUROBOT_H
