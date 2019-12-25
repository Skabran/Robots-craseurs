#ifndef VIEUXROBOT_H
#define VIEUXROBOT_H
#include "robot.h"
#include<string>

class vieuxRobot : public robot
{
public:
    vieuxRobot(position& pos);
    virtual ~vieuxRobot();
    std::string getNom() const;
    void deplacePerso() override final;

};

#endif // VIEUXROBOT_H
