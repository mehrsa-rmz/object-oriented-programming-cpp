#include "fractie.hpp"

Fractie::Fractie(int nmr, int nmi)
{
    numarator = nmr;
    numitor = nmi;
}

Fractie::Fractie(const Fractie &f)
{
    numarator = f.numarator;
    numitor = f.numitor;
}

Fractie& Fractie::operator=(const Fractie &f)
{
    numarator = f.numarator;
    numitor = f.numitor;
    return *this;
}

double Fractie::getValoare() const
{
    double f;
    if(numitor != 0)
    {
        f=(double)numarator/numitor;
        return f;
    }

    else return 0;
}

bool Fractie:: operator <(const Fractie& f)
{
    if((*this).getValoare() < f.getValoare())
        return true;
    else
        return false;
}

ostream& operator<<(ostream& out, const Fractie& f)
{
    if(f.numitor != 0)
        out << f.numarator << "/" << f.numitor ;
    else
        out << "Eroare: numitor nul" << endl;
    return out;
}

