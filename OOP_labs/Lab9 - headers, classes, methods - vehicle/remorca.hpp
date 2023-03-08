#ifndef REMORCA_HPP
#define REMORCA_HPP

#include "vehicul.cpp"

class Remorca: virtual public Vehicul
{
protected:
    int dimensiuni[3]; //lungime, latime si inaltime
    int greutate_maxima;
public:
	Remorca();
	Remorca(int*, int, const char*, int);
	Remorca(const Remorca&);
	Remorca& operator=(const Remorca&);
	~Remorca();

	void afisare();
	int getGreutate_max();
	void getDimensiuni();
};

#endif
