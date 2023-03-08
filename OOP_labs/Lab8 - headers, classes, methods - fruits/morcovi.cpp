#include "morcovi.hpp"

Morcovi::Morcovi (): cantitate(0), pret_100_grame(0)
{
}

Morcovi::Morcovi (int cantitate, int pret_100_grame): cantitate(cantitate), pret_100_grame(pret_100_grame)
{
}

void Morcovi::afisare()
{
    cout<<"Morcovi -> "<<this->pret_final()<<" lei;\n";
}

int Morcovi::pret_final()
{
    return (cantitate*pret_100_grame)/100;
}

int Morcovi::getType()
{
    return 3;
}
