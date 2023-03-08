#include "negre.hpp"

Negre::Negre(): varsta(0), vaccin(0), nume(NULL), descriere(NULL)
{
}

Negre::Negre(int varsta, int vaccin, const char* nume, const char* descriere): varsta(varsta), vaccin(vaccin)
{
    this->nume = new char[strlen(nume) + 1];
	strcpy(this->nume,nume);

	this->descriere = new char[strlen(descriere) + 1];
	strcpy(this->descriere,descriere);
}

Negre::~Negre()
{
    delete []nume;
    delete []descriere;
}

void Negre::afisare()
{
    cout<<"Nume: "<<nume;
    cout<<"\nVarsta: "<<varsta;
    cout<<"\nDescriere: "<<descriere;
    if (vaccin)
        cout<<"\nVaccinata\n\n";
    else
        cout<<"\nNevaccinata\n\n";
}

char Negre::getCuloare()
{
    return 'N';
}

int Negre::getVarsta()
{
    return varsta;
}

bool Negre::getVaccin()
{
    return vaccin;
}

char* Negre::getNume()
{
    return nume;
}

int Negre::getLungimeDescriere()
{
    return strlen(descriere);
}

