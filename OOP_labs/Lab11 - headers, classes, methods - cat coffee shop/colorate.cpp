#include "colorate.hpp"

Colorate::Colorate(): varsta(0), vaccin(0), nume(NULL), descriere(NULL)
{
}

Colorate::Colorate(int varsta, int vaccin, const char* nume, const char* descriere): varsta(varsta), vaccin(vaccin)
{
    this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);

	this->descriere = new char[strlen(descriere) + 1];
	strcpy(this->descriere,descriere);
}

Colorate::~Colorate()
{
    delete []nume;
    delete []descriere;
}

void Colorate::afisare()
{
    cout<<"Nume: "<<nume;
    cout<<"\nVarsta: "<<varsta;
    cout<<"\nDescriere: "<<descriere;
    if (vaccin)
        cout<<"\nVaccinata\n\n";
    else
        cout<<"\nNevaccinata\n\n";
}

char Colorate::getCuloare()
{
    return 'C';
}

int Colorate::getVarsta()
{
    return varsta;
}

bool Colorate::getVaccin()
{
    return vaccin;
}

char* Colorate::getNume()
{
    return nume;
}

int Colorate::getLungimeDescriere()
{
    return strlen(descriere);
}

