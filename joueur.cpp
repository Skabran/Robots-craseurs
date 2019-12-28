#include "joueur.h"

joueur::joueur(const position &pos):Personnage{pos}
{}

char joueur::signe()const
{
    return 'J';
}
