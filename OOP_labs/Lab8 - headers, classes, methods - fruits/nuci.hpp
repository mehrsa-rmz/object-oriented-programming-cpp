#ifndef NUCI_HPP
#define NUCI_HPP

#include "baza.hpp"

class Nuci: public Baza
{
int cantitate;
int pret_100_grame;

public:
    Nuci ();
    Nuci (int, int);
    void afisare();
    int pret_final();
    int getType();
};

#endif
