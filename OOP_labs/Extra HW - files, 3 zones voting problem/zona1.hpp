#ifndef ZONA1_HPP
#define ZONA1_HPP

#include "baza.cpp"

class Zona1: public Baza
{
    int populatie1;
    int ob4;
    int ob3;
    int ob2;
    int ob1;
    int ob0;

public:
    Zona1();
	Zona1(int, int, int, int, int, int);
	Zona1(const Zona1&);
	int getPop (int);
	int prezenta (int, int);
};

#endif
