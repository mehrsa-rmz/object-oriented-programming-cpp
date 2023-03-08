#ifndef NEGRE_HPP
#define NEGRE_HPP

#include"albe.cpp"

class Negre : public Pisici
{
    int varsta;
    int vaccin;
    char *nume;
    char *descriere;

public:
    Negre();
    Negre(int, int, const char*, const char*);
	~Negre();
	void afisare();
	char getCuloare();
	int getVarsta();
	bool getVaccin();
	char* getNume();
	int getLungimeDescriere();
};

#endif
