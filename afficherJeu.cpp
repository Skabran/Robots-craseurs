#include "afficherJeu.h"
#include "jeu.h"

afficherJeu::afficherJeu():d_pointeurJeu{nullptr} {}

afficherJeu::afficherJeu(jeu& leJeu): d_pointeurJeu{&leJeu} {}

void afficherJeu::afficheMenu() const
{

}
