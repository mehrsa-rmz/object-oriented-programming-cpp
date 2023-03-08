#include "portocale.hpp"

Portocale::Portocale (): nr_kilograme(0), pret_kg(0)
{
}

Portocale::Portocale (int nr_kilograme, int pret_kg): nr_kilograme(nr_kilograme), pret_kg(pret_kg)
{
}

void Portocale::afisare()
{
    cout<<"Portocale -> "<<this->pret_final()<<" lei;\n";
}

int Portocale::pret_final()
{
    return nr_kilograme*pret_kg;
}

int Portocale::getType()
{
    return 2;
}
