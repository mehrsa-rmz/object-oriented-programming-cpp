#ifndef FERMA_HPP
#define FERMA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Ferma
{
public:

	virtual ~Ferma() = 0 ;
	virtual void afisare() = 0;
	virtual int getCantitate(int) = 0;
	virtual int getCantitateTotala() = 0;
	virtual char* getMancare(int) = 0;
	virtual char* getAnimal() = 0;
};

#endif
