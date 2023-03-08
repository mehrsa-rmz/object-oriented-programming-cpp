#ifndef MASINA_HPP
#define MASINA_HPP

#include "vehicul.cpp"

class Masina: virtual public Vehicul
{
protected:
    int dimensiuni[3]; //lungime, latime si inaltime
    char *marca;
public:
	Masina();
	Masina(int*, const char*, const char*, int);
	Masina(const Masina&);
	Masina& operator=(const Masina&);
	~Masina();

	void afisare();
	void getDimensiuniM();
	char* getMarca();
};

#endif
