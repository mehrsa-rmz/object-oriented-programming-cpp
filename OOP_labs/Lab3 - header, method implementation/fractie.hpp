#include <iostream>
#include <cstring>
using namespace std;

class Fractie
{
    private:
        int a; //numarator
        int b; //numitor
    public:
        Fractie (int aa=0, int bb=0); // constructor cu parametrii impliciti
        Fractie (const Fractie&);// constructor de copiere
        Fractie& operator=(const Fractie &);//se intoarce referinta la obiectul modificat pt a putea face op de genul : int a,b,c,d ; a=(b=(c=(d=4))) ;
        ~Fractie();

        double getValoare() const;//cat face a/b
        Fractie getInv();//b/a
        void setdata(int, int);//modifica valoarile numaratorului si numitorului
        float getA();//returneaza numaratorul
        float getB();//returneaza numitorul

        friend Fractie operator +(const Fractie&, const Fractie&); // supradefinire operator adunare
        friend Fractie operator -(const Fractie&, const Fractie&);
        friend Fractie operator *(const Fractie&, const Fractie&);
        friend Fractie operator /(const Fractie&, const Fractie&);
        friend Fractie operator -(const Fractie&); //transforma numerele in inversul lor. ex: 8 -> -8

        Fractie& operator +=(const Fractie&);  // supradefinire operator incrementare cu o valoare
        Fractie& operator -=(const Fractie&);
        Fractie& operator *=(const Fractie&);
        Fractie& operator /=(const Fractie&);

        bool operator ==(const Fractie &);//supradefinire operator de egalitate
        bool operator !=(const Fractie&);// supradefinire operator diferit
        bool operator < (const Fractie&);// supradefinire operator <
        bool operator <=(const Fractie&);// supradefinire operator <=
        bool operator > (const Fractie&);// supradefinire operator >
        bool operator >=(const Fractie&);// supradefinire operator >=
};
