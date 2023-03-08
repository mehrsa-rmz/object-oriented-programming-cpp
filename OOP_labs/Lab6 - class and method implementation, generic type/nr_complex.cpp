#include"nr_complex.hpp"
#include<math.h>

Nr_complex::Nr_complex(double r , double i )
{
    real = r;
    imaginar = i;
}

Nr_complex::Nr_complex(const Nr_complex &c)
{
    real = c.real;
    imaginar = c.imaginar;
}

Nr_complex& Nr_complex::operator=(const Nr_complex &c)
{
    real = c.real;
    imaginar = c.imaginar;
    return *this;
}

ostream& operator<<(ostream& out, Nr_complex& c)
{
    out << c.real << "+" << c.imaginar << "i" ;
    return out;
}

double Nr_complex::getValoare() const
{
	double m;
	m = sqrt((this->real)*(this->real) + (this->imaginar)*(this->imaginar));
	return m;
}

bool Nr_complex:: operator <(const Nr_complex& c)
{
	if((*this).getValoare() < c.getValoare())
        return true;
	else
        return false;
}
