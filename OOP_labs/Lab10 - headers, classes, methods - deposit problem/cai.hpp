#ifndef CAI_HPP
#define CAI_HPP

#include "gaini.cpp"

class Cai : public Ferma
{
	int nr_cai;
	int cantitate_cai;
	char *mancare_cai;

public:
		Cai();
		Cai(int, int, const char*);
		~Cai();

		void afisare();
		int getCantitate(int);
		int getCantitateTotala();
		char* getMancare(int);
		char* getAnimal();
};

#endif
