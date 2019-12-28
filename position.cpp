#include "position.h"

position::position(int x, int y):d_x{x},d_y{y}
{

}

int position::x()const
{
    return d_x;
}

int position::y()const
{
    return d_y;
}

void position::deplaceX(int i)
{
    d_x+=i;
}

void position::deplaceY(int i)
{
    d_y+=i;
}
