#include "banana.hpp"

Banana::Banana (): pret_bucata(0)
{
}

Banana::Banana (int pret_bucata): pret_bucata(pret_bucata)
{
}

void Banana::afisare()
{
    cout<<"Banana -> "<<this->pret_final()<<" lei;\n";
}

int Banana::pret_final()
{
    return pret_bucata;
}

int Banana::getType()
{
    return 1;
}
