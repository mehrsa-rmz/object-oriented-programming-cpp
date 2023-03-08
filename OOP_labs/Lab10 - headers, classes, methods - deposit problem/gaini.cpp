#include"gaini.hpp"

Gaini::Gaini():nr_g(0), cantitate_g(0), mancare_g(NULL)
{
}

Gaini::Gaini(int nr_g, int cantitate_g, const char* mancare_g): nr_g(nr_g), cantitate_g(cantitate_g)
{
	this->mancare_g = new char[strlen(mancare_g) + 1];
	strcpy(this->mancare_g,mancare_g);

}

Gaini::~Gaini()
{
	delete []mancare_g;
}

void Gaini::afisare()
{
	cout << "La ferma sunt "<< nr_g << " gaini, care consuma "<< cantitate_g << " kg de "<< mancare_g << " pe zi. \n";
}

int Gaini::getCantitate(int x = 0)
{
	return cantitate_g;
}

int Gaini::getCantitateTotala()
{
	return cantitate_g;
}

char* Gaini::getMancare(int x = 0)
{
	return mancare_g;
}

char* Gaini::getAnimal()
{
    char *animal = new char[strlen("Gaini") + 1];
    strcpy(animal, "Gaini");
	return animal;
}
