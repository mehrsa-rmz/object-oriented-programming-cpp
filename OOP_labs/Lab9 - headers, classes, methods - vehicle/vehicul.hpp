#ifndef VEHICUL_HPP
#define VEHICUL_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Vehicul
{
protected:
    char *proprietar;
    int pret;
public:
	Vehicul();
	Vehicul(const char*, int);
	Vehicul(const Vehicul&);
	Vehicul& operator=(const Vehicul&);
    ~Vehicul();

	virtual void afisare();
	char* getProprietar();
	int getPret();
};

#endif
