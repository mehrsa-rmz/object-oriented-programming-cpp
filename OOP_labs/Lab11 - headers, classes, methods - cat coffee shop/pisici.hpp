#ifndef PISICI_HPP
#define PISICI_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Pisici
{
public:

	virtual ~Pisici() = 0 ;
	virtual void afisare() = 0;
	virtual char getCuloare() = 0;
	virtual int getVarsta() = 0;
	virtual bool getVaccin() = 0;
	virtual char* getNume() = 0;
	virtual int getLungimeDescriere() = 0;
};

#endif
