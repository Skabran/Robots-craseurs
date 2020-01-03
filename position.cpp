#include "position.h"
#include <iostream>

position::position(): d_x{0.0}, d_y{0.0} {}

position::position(int x, int y): d_x{x}, d_y{y} {}

int position::valeurX() const
{
    return d_x;
}

int position::valeurY() const
{
    return d_y;
}

void position::affiche(std::ostream& ost) const
{
    ost<<"("<<d_x<<","<<d_y<<")";
}

void position::lit(std::istream& ist)
{
    char temp;
    ist>>temp>>d_x>>temp>>d_y>>temp;
}

void position::changePosition(int x, int y)
{
    d_x=x;
    d_y=y;
}

bool position::auDessus(const position& pos) const
{
    if(d_y<pos.valeurY())
    {
        return true;
    }
    return false;
}

bool position::enDessous(const position& pos) const
{
    if(d_y>pos.valeurY())
    {
        return true;
    }
    return false;
}

bool position::aGauche(const position& pos) const
{
    if(d_x<pos.valeurX())
    {
        return true;
    }
    return false;
}

bool position::aDroite(const position& pos) const
{
    if(d_x>pos.valeurX())
    {
        return true;
    }
    return false;
}

bool position::operator==(const position& pos) const
{
    if(d_x==pos.valeurX() && d_y==pos.valeurY())  //probl�me car �galit� de double ?
    {
        return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream& ost, const position& pos)
{
    pos.affiche(ost);
}

std::istream& operator>>(std::istream& ist, position& pos)
{
    pos.lit(ist);
}
