#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <iostream>
#include "fractie.hpp"
#include"nr_complex.hpp"
using namespace std;

template <class X >
class Vector
{
    int dim;
    X *buf;

    public:
        Vector(int, X*);
        ~Vector();
        Vector& operator=(Vector&);
        void afisare();
        void sortare();
};

#endif
