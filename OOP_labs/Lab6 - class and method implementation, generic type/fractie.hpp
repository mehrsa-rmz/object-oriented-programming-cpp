#ifndef FRACTIE_HPP
#define FRACTIE_HPP

#include <iostream>

using namespace std;

class Fractie
{
    private:
        int numarator;
        int numitor;

    public:
        Fractie(int nmr=0,int nmi=0);
        Fractie(const Fractie&);
        Fractie & operator=(const Fractie&);
        double getValoare() const;
        friend ostream& operator<<(ostream&, const Fractie&);
        bool operator <(const Fractie&);

};

#endif
