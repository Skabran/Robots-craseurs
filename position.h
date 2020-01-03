#ifndef POSITION_H
#define POSITION_H
#include <iostream>

class position
{
public:
    position(int x, int y);
    position(); // par default (0,0)
    int valeurX() const;
    int valeurY() const;
    void changePosition(int x, int y);
    void affiche(std::ostream& ost) const;
    void lit(std::istream& ist);
    bool auDessus(const position& pos) const;
    bool enDessous(const position& pos) const;
    bool aGauche(const position& pos) const;
    bool aDroite(const position& pos) const;
    bool operator==(const position& pos) const;


private:
    int d_x;
    int d_y;
};
std::ostream& operator<<(std::ostream& ost, const position& pos);
std::istream& operator>>(std::istream& ist, position& pos);

#endif // POSITION_H
