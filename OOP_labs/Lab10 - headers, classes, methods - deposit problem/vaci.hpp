#ifndef VACI_HPP
#define VACI_HPP

#include "ferma.cpp"

class Vaci :public Ferma
{
	int nr_v;
	int cantitate_v;
    char *mancare_v;

public:
		Vaci();
		Vaci(int, int, const char*);
        ~Vaci();

		void afisare();
		int getCantitate(int);
		int getCantitateTotala();
		char* getMancare(int);
        char* getAnimal();
};

#endif

