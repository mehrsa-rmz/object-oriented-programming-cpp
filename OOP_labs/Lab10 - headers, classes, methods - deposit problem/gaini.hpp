#ifndef GAINI_HPP
#define GAINI_HPP

#include"vaci.cpp"

class Gaini : public Ferma
{
	int nr_g;
	int cantitate_g;
	char *mancare_g;

public:
		Gaini();
		Gaini(int, int, const char*);
        ~Gaini();

		void afisare();
		int getCantitate(int);
		int getCantitateTotala();
		char* getMancare(int);
		char* getAnimal();
};

#endif
