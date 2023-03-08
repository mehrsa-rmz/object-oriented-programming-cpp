#include "Porci.hpp"

Porci::Porci(): nr_p(0), cantitate1_p(0), mancare1_p(NULL), cantitate2_p(0), mancare2_p(NULL)
{
}

Porci::Porci(int nr_p, int cantitate1_p, const char* mancare1_p, int cantitate2_p, const char* mancare2_p):nr_p(nr_p), cantitate1_p(cantitate1_p), cantitate2_p(cantitate2_p)
{
	this->mancare1_p = new char[strlen(mancare1_p) + 1];
	strcpy(this->mancare1_p,mancare1_p);

	this->mancare2_p = new char[strlen(mancare2_p) + 1];
	strcpy(this->mancare2_p,mancare2_p);
}

Porci::~Porci()
{
	delete []mancare1_p;
	delete []mancare2_p;
}

void Porci::afisare()
{
	cout << "La ferma sunt "<< nr_p << " porci, care consuma " << cantitate1_p << " kg de " << mancare1_p << " si " << cantitate2_p << " kg de " << mancare2_p << " pe zi. \n";
}

int Porci::getCantitate(int x)
{
	if(x == 1)
	    return cantitate1_p;
	else
        if(x == 2)
            return cantitate2_p;
}

int Porci::getCantitateTotala()
{
	return cantitate1_p + cantitate2_p;
}

char* Porci::getMancare( int x)
{
	if(x == 1)
	    return mancare1_p;
	else
        if(x == 2)
            return mancare2_p;
}

char* Porci::getAnimal()
{
    char *animal = new char[strlen("Porci") + 1];
    strcpy(animal, "Porci");
	return animal;
}
