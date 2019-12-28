#include "Element.h"


Element::Element(const position &pos):d_pos{pos}
{

}

Element::~Element()
{

}


position Element::pos() const
{
    return d_pos;
}
