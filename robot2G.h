#ifndef ROBOT2G_H_INCLUDED
#define ROBOT2G_H_INCLUDED
#include "robot.h"
class robot2G : public robot{

public :
    robot2G(const position &pos);
    virtual void deplace(const joueur &j) override;
private:

};

#endif // ROBOT2G_H_INCLUDED
