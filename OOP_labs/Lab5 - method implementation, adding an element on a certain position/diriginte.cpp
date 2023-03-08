#include "diriginte.hpp"

Diriginte::Diriginte():nume(NULL), grupa(" ")
{
}

Diriginte::Diriginte(const char* n, const char* g)
{
    this->nume = new char[strlen(n) + 1];
	strcpy(this->nume,n);
	strcpy(this->grupa,g);
}

Diriginte::Diriginte(const Diriginte& obj)
{
    nume = NULL;
    strcpy(grupa, " ");
    *this = obj;
}

Diriginte::~Diriginte()
{
	delete []nume;
}

Diriginte& Diriginte::operator=(const Diriginte& obj)
{
    this->nume = new char[strlen(obj.nume) + 1];
	strcpy(this->nume,obj.nume);
	strcpy(this->grupa,obj.grupa);

	return *this;
}

ostream& operator<<(ostream& out, const Diriginte& obj)
{
	out << "Numele dirigintelui: " << obj.nume << endl;
	out << "Grupa: " << obj.grupa << endl;

	return out;
}

istream& operator>>(istream& in, Diriginte& obj)
{
    cout<<"Numele dirigintelui: ";
    char buffer[100];
    in.get();
    in.getline(buffer, 100);
	obj.nume = new char[strlen(buffer) + 1];
	strcpy(obj.nume, buffer);

    cout<<"Grupa: ";
    in >> obj.grupa;

    return in;
}

char* Diriginte::getNumeD()
{
	return nume;
}

char* Diriginte::getGrupa()
{
	return grupa;
}

void Diriginte::modifNumeD(char* n)
{
    nume = new char [strlen(n) + 1];
    strcpy(nume, n);
}
