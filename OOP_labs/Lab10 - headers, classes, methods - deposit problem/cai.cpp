#include "cai.hpp"

Cai::Cai(): nr_cai(0), cantitate_cai(0), mancare_cai(NULL)
{
}

Cai::Cai(int nr_cai, int cantitate_cai, const char* mancare_cai):nr_cai(nr_cai), cantitate_cai(cantitate_cai)
{
	this->mancare_cai = new char[strlen(mancare_cai) + 1];
	strcpy(this->mancare_cai,mancare_cai);
}

Cai::~Cai()
{
	delete []mancare_cai;
}

void Cai::afisare()
{
	cout << "La ferma sunt "<< nr_cai << " cai, care consuma "<< cantitate_cai << " kg de "<< mancare_cai << " pe zi. \n";
}

int Cai::getCantitate(int x = 0)
{
	return cantitate_cai;
}

int Cai::getCantitateTotala()
{
	return cantitate_cai;
}

char* Cai::getMancare(int x = 0)
{
	return mancare_cai;
}

char* Cai::getAnimal()
{
    char *animal = new char[strlen("Cai") + 1];
    strcpy(animal, "Cai");
	return animal;
}
