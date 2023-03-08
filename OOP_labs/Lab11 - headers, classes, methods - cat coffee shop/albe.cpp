#include "albe.hpp"

Albe::Albe(): varsta(0), vaccin(0), nume(NULL), descriere(NULL)
{
}

Albe::Albe(int varsta, int vaccin, const char* nume, const char* descriere): varsta(varsta), vaccin(vaccin)
{
    this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);

	this->descriere = new char[strlen(descriere) + 1];
	strcpy(this->descriere,descriere);
}

Albe::~Albe()
{
    delete []nume;
    delete []descriere;
}

void Albe::afisare()
{
    cout<<"Nume: "<<nume;
    cout<<"\nVarsta: "<<varsta;
    cout<<"\nDescriere: "<<descriere;
    if (vaccin)
        cout<<"\nVaccinata\n\n";
    else
        cout<<"\nNevaccinata\n\n";
}

char Albe::getCuloare()
{
    return 'A';
}

int Albe::getVarsta()
{
    return varsta;
}

bool Albe::getVaccin()
{
    return vaccin;
}

char* Albe::getNume()
{
    return nume;
}

int Albe::getLungimeDescriere()
{
    return strlen(descriere);
}
