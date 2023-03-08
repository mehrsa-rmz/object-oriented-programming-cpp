#include "vaci.hpp"

Vaci::Vaci():nr_v(0), cantitate_v(0), mancare_v(NULL)
{
}

Vaci::Vaci(int nr_v, int cantitate_v, const char* mancare_v): nr_v(nr_v), cantitate_v(cantitate_v)
{
	this->mancare_v = new char[strlen(mancare_v) + 1];
	strcpy(this->mancare_v,mancare_v);
}

Vaci::~Vaci()
{
	delete []mancare_v;
}

void Vaci::afisare()
{
	cout << "La ferma sunt "<< nr_v << " vaci, care consuma "<< cantitate_v << " kg de "<< mancare_v << " pe zi. \n";
}

int Vaci::getCantitate(int x = 0)
{
	return cantitate_v;
}

int Vaci::getCantitateTotala()
{
	return cantitate_v;
}

char* Vaci::getMancare(int x = 0)
{
	return mancare_v;
}

char* Vaci::getAnimal()
{
    char *animal = new char[strlen("Vaci") + 1];
    strcpy(animal, "Vaci");
	return animal;
}
