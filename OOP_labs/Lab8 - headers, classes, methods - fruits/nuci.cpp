#include "nuci.hpp"

Nuci::Nuci (): cantitate(0), pret_100_grame(0)
{
}

Nuci::Nuci (int cantitate, int pret_100_grame): cantitate(cantitate), pret_100_grame(pret_100_grame)
{
}

void Nuci::afisare()
{
    cout<<"Nuci -> "<<this->pret_final()<<" lei;\n";
}

int Nuci::pret_final()
{
    return (cantitate*pret_100_grame)/100;
}

int Nuci::getType()
{
    return 4;
}
