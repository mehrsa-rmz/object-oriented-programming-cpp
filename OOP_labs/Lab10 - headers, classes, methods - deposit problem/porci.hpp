#ifndef PORCI_HPP
#define PORCI_HPP

#include "cai.cpp"

class Porci : public Ferma
{
	int nr_p;
	int cantitate1_p;
	char *mancare1_p;
	int cantitate2_p;
	char *mancare2_p;

public:
	Porci();
	Porci(int, int, const char*, int, const char*);
	 ~Porci();

	void afisare();
	int getCantitate(int);
	int getCantitateTotala();
	char* getMancare(int);
	char* getAnimal();
};

#endif
