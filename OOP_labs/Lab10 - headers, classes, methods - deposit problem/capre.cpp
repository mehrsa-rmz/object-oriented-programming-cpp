#include "capre.hpp"

Capre::Capre(): nr_capre(0), mancare_capre(NULL), cantitate_capre(0){}

Capre::Capre(int nr_capre, int cantitate_capre, const char* mancare_capre): nr_capre(nr_capre), cantitate_capre(cantitate_capre)
{
    this->mancare_capre = new char[strlen(mancare_capre) + 1];
	strcpy(this->mancare_capre,mancare_capre);
}

Capre::~Capre()
{
	delete []mancare_capre;
}

void Capre::afisare()
{
	cout << "La ferma sunt "<< nr_capre << " capre, care consuma "<< cantitate_capre << " kg de "<< mancare_capre << " pe zi. \n";
}

int Capre::getCantitate(int x = 0)
{
	return cantitate_capre;
}

int Capre::getCantitateTotala()
{
	return cantitate_capre;
}

char* Capre::getMancare(int x = 0)
{
	return mancare_capre;
}

char* Capre::getAnimal()
{
    char *animal = new char[strlen("Capre") + 1];
    strcpy(animal, "Capre");
	return animal;
}
