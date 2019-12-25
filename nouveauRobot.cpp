#include "nouveauRobot.h"
#include<string>
#include "namespaceDeplacement.h"

nouveauRobot::nouveauRobot(position& pos): robot{pos}
{
    d_nom="NR";
}

nouveauRobot::~nouveauRobot(){}

void nouveauRobot::deplacePerso()
{
    deplacement::deplacementDiagonale(d_pos);
}
