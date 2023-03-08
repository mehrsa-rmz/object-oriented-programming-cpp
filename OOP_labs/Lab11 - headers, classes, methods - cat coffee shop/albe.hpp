#ifndef ALBE_HPP
#define ALBE_HPP

#include"pisici.cpp"

class Albe : public Pisici
{
    int varsta;
    int vaccin;
    char *nume;
    char *descriere;

public:
    Albe();
    Albe(int, int, const char*, const char*);
	~Albe();
	void afisare();
	char getCuloare();
	int getVarsta();
	bool getVaccin();
	char* getNume();
	int getLungimeDescriere();
};

#endif
