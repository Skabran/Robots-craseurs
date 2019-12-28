#ifndef ROBOT_H_INCLUDED
#define ROBOT_H_INCLUDED
#include "Personnage.h"
#include "joueur.h"
class robot : public Personnage{

public :
    virtual ~robot();
    virtual void deplace(const joueur &j)=0;
    void ecrase();
private :


};


#endif // ROBOT_H_INCLUDED
