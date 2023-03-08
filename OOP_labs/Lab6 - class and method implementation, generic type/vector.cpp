#include "vector.hpp"
#include "fractie.cpp"
#include"nr_complex.cpp"

template <class X>
Vector<X>::Vector(int dim, X *buf)
{
    this->dim = dim;
    this->buf = new X[dim];
    for(int i = 0; i < dim; i++)
    {
        this->buf[i] = buf[i];
    }

}

template <class X>
Vector<X>& Vector<X>::operator=(Vector<X> &v)
{
    dim = v.dim;
    buf = new X[dim];
    for(int i = 0; i < dim; i++)
    {
        buf[i] = v.buf[i];
    }
    return *this;
}

template <class X>
void Vector<X>::afisare()
{
    cout << "Dimensiune: " << dim << endl;
    for(int i = 0; i < dim; i++)
    {
        cout << buf[i] << " ; ";
    }
    cout<< endl;
}

template <class X>
void Vector<X>::sortare()
{
    X aux;
    for (int i = 0; i < dim; i++)
        for(int j = i + 1; j < dim; j++)
            if(buf[i] < buf[j])
            {
                aux = buf[i];
                buf[i] = buf[j];
                buf[j] = aux;
            }
}

template <class X>
Vector<X>::~Vector()
{
    delete []buf;
}

