#ifndef BAZA_HPP
#define BAZA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Baza
{
public:
    virtual ~Baza() = 0;
    virtual int getPop(int) = 0;
    virtual int prezenta(int, int) = 0;
};

#endif
