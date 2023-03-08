#ifndef COLORATE_HPP
#define COLORATE_HPP

#include"negre.cpp"

class Colorate : public Pisici
{
    int varsta;
    int vaccin;
    char *nume;
    char *descriere;

public:
    Colorate();
    Colorate(int, int, const char*, const char*);
	~Colorate();
	void afisare();
	char getCuloare();
	int getVarsta();
	bool getVaccin();
	char* getNume();
	int getLungimeDescriere();
};

#endif

