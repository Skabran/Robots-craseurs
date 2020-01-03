#ifndef VIEUXROBOT_H
#define VIEUXROBOT_H
#include "robot.h"
#include<string>

class vieuxRobot : public robot
{
public:
    vieuxRobot(position& pos, joueur& joueur1);
    virtual ~vieuxRobot();
    std::string getNom() const;
    void deplacePerso(const joueur& joueur1) override final;
    char deplacementAutomatique(const joueur& joueur1) const override final;

};

#endif // VIEUXROBOT_H
