#ifndef JOUEURFACILE_H
#define JOUEURFACILE_H
#include "joueur.h"
#include<string>

class joueurFacile :public joueur
{

public:
    joueurFacile(position& pos);
    virtual ~joueurFacile();
    std::string getNom() const;
    void deplacePerso() override final;

};

#endif // JOUEURFACILE_H
