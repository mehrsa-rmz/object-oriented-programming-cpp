#ifndef ZONA3_HPP
#define ZONA3_HPP

#include "zona2.cpp"

class Zona3: public Baza
{
    int populatie3;
    int sub14;
    int peste14;
    int peste20;
    int peste40;

public:
    Zona3();
	Zona3(int, int, int, int, int);
	Zona3(const Zona3&);
	int getPop (int);
	int prezenta (int, int);
};

#endif
