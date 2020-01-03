#include "robot.h"
#include<string>

robot::robot(position& pos, joueur& joueur1): entite{pos}, d_joueur{&joueur1} {}

robot::~robot(){}
