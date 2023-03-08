#include "clasa.hpp"

Clasa::Clasa ():nr_elevi(0)
{
}

Clasa::Clasa(int e):nr_elevi(e)
{
}

Clasa::Clasa(const Clasa& obj)
{
    *this = obj;
}

Clasa::~Clasa()
{
}

Clasa& Clasa::operator=(const Clasa& obj)
{
    this->nr_elevi=obj.nr_elevi;
    return *this;
}

ostream& operator<<(ostream& out, const Clasa& obj)
{
    out << "Numarul elevilor: " << obj.nr_elevi << endl;
    return out;
}

istream& operator>>(istream& in, Clasa& obj)
{
    cout << "Numarul elevilor: ";
    in >> obj.nr_elevi;
    return in;
}

int Clasa::getNrElevi()
{
    return nr_elevi;
}
