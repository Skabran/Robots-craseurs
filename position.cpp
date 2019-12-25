#include "position.h"
#include <iostream>

position::position(): d_x{0.0}, d_y{0.0} {}

position::position(double x, double y): d_x{x}, d_y{y} {}

double position::valeurX() const
{
    return d_x;
}

double position::valeurY() const
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

void position::changePosition(double x, double y)
{
    d_x=x;
    d_y=y;
}

std::ostream& operator<<(std::ostream& ost, const position& pos)
{
    pos.affiche(ost);
}

std::istream& operator>>(std::istream& ist, position& pos)
{
    pos.lit(ist);
}
