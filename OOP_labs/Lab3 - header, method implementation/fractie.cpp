#include "fractie.hpp"

    Fractie::Fractie(int aa, int bb)
    {
        this->a=aa;
        this->b=bb;
    }
    Fractie::Fractie(const Fractie& fr)
    {
        this->a=fr.a;
        this->b=fr.b;
    }
    Fractie& Fractie::operator=(const Fractie &fr)
    {
        this->a=fr.a;
        this->b=fr.b;
        return *this;
    }
    Fractie::~Fractie()
    {
    }

    double Fractie::getValoare() const
    {
        if(this->b !=0)
            return (double)(this->a)/this->b;
        else
            cout<<"Eroare! Numitorul are valoarea 0";
        return 0;
    }
    Fractie Fractie::getInv()
    {
        if(this->a !=0)
            swap(this->a, this->b);
        else
            cout<<"Numitorul ar avea valoarea 0";
        return *this;
    }
    void Fractie::setdata(int aa,int bb)
    {
        this->a=aa;
        this->b=bb;
    }
    float Fractie::getA()
    {
        return this->a;
    }
    float Fractie::getB()
    {
        return this->b;
    }

    Fractie operator+(const Fractie &x, const Fractie &y)
    {
        Fractie aux(x.a*y.b+y.a*x.b, x.b*y.b);
        return aux;
    }
    Fractie operator-(const Fractie &x, const Fractie &y)
    {
        Fractie aux(x.a*y.b-y.a*x.b, x.b*y.b);
        return aux;
    }
    Fractie operator*(const Fractie &x, const Fractie &y)
    {
        Fractie aux(x.a*y.a, x.b*y.b);
        return aux;
    }
    Fractie operator/(const Fractie &x, const Fractie &y)
    {
        Fractie aux(x.a*y.b, x.b*y.a);
        return aux;
    }
    Fractie operator-(const Fractie &fr)
    {
        Fractie aux((-1)*fr.a, fr.b);
        return aux;
    }

    Fractie& Fractie::operator+=( const Fractie &a)
    {
        *this=*this+a;
        return *this;
    }
    Fractie& Fractie::operator-=( const Fractie &a)
    {
        *this=*this-a;
        return *this;
    }
    Fractie& Fractie::operator*=( const Fractie &a)
    {
        *this=*this*a;
        return *this;
    }
    Fractie& Fractie::operator/=( const Fractie &a)
    {
        *this=*this/a;
        return *this;
    }


    bool Fractie::operator==(const Fractie &fr)
    {
        return this->getValoare()==fr.getValoare();
    }
    bool Fractie::operator!=(const Fractie &fr)
    {
        return this->getValoare()!=fr.getValoare();
    }
    bool Fractie::operator<(const Fractie &fr)
    {
        return this->getValoare()<fr.getValoare();
    }
    bool Fractie::operator<=(const Fractie &fr)
    {
        return this->getValoare()<=fr.getValoare();
    }
    bool Fractie::operator>(const Fractie &fr)
    {
        return this->getValoare()>fr.getValoare();
    }
    bool Fractie::operator>=(const Fractie &fr)
    {
        return this->getValoare()>=fr.getValoare();
    }
