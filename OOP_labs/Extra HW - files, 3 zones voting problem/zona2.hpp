#ifndef ZONA2_HPP
#define ZONA2_HPP

#include "zona1.cpp"

class Zona2: public Baza
{
    int populatie2;
    int f10;
    int f9;
    int f8;
    int f7;
    int f6;

public:
    Zona2();
	Zona2(int, int, int, int, int, int);
	Zona2(const Zona2&);
	int getPop (int);
	int prezenta (int, int);
};

#endif
