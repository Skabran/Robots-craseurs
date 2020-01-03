#include "position.h"

namespace deplacement
{
    const char HAUT='z';
    const char BAS='s';
    const char GAUCHE='q';
    const char DROITE='d';
    const char HAUTGAUCHE='a';
    const char HAUTDROITE='e';
    const char BASGAUCHE='w';
    const char BASDROITE='c';

    void deplaceGauche(position& pos);
    void deplaceDroite(position& pos);
    void deplaceHaut(position& pos);
    void deplaceBas(position& pos);
    void deplaceHautGauche(position& pos);
    void deplaceHautDroite(position& pos);
    void deplaceBasGauche(position& pos);
    void deplaceBasDroite(position& pos);

    void deplacementCroix(position& pos, char c);
    void deplacementDiagonale(position& pos, char c);
}
