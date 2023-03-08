#ifndef CAPRE_HPP
#define CAPRE_HPP

#include "porci.cpp"

class Capre : public Ferma
{
	int nr_capre;
	int cantitate_capre;
	char *mancare_capre;

public:
		Capre();
		Capre(int, int, const char*);
		~Capre();

		void afisare();
		int getCantitate(int);
		int getCantitateTotala();
		char* getMancare(int);
		char* getAnimal();
};

#endif
