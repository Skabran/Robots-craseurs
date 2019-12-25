#include "vieuxRobot.h"
#include<string>
#include "namespaceDeplacement.h"

vieuxRobot::vieuxRobot(position& pos): robot{pos}
{
    d_nom="VR";
}

vieuxRobot::~vieuxRobot(){}

void vieuxRobot::deplacePerso()
{
    deplacement::deplacementCroix(d_pos);
}
