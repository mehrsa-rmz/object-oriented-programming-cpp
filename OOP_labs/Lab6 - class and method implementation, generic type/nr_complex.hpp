#ifndef NR_COMPLEX_HPP
#define NR_COMPLEX_HPP

#include <iostream>

using namespace std;

class Nr_complex
{
    private:
        double real;
        double imaginar;

    public:
        Nr_complex(double r=0,double i=0);
        Nr_complex(const Nr_complex&);
        Nr_complex & operator=(const Nr_complex&);
        double getValoare() const;
        friend ostream& operator<<(ostream&, Nr_complex&);
        bool operator <(const Nr_complex&);

};

#endif
