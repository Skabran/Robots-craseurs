#ifndef JOUEURDIFFICILE_H
#define JOUEURDIFFICILE_H
#include "joueur.h"
#include<string>


class joueurDifficile : public joueur
{
public:
    joueurDifficile(position& pos);
    virtual ~joueurDifficile();
    std::string getNom() const;
    void deplacePerso() override final;

};

#endif // JOUEURDIFFICILE_H
