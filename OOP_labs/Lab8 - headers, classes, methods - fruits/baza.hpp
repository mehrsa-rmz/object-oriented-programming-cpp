#ifndef BAZA_HPP
#define BAZA_HPP

#include <iostream>
using namespace std;

class Baza{
public:

	virtual ~Baza() = 0;
	virtual void afisare() = 0;
	virtual int pret_final() = 0;
	virtual int getType() = 0;
};

#endif
