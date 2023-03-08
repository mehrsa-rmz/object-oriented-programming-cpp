#include "nota.hpp"

Nota::Nota():note(NULL), nr_note(0)
{
}

Nota::Nota(int*n, int nr_n):note(n), nr_note(nr_n)
{
}

Nota::Nota(const Nota& obj)
{
    note = NULL;
    *this = obj;
}

Nota::~Nota()
{
	delete []note;
}

Nota& Nota::operator=(const Nota& obj)
{
    this->nr_note=obj.nr_note;
    this->note = new int[obj.nr_note];
    this->note = obj.note;

	return *this;
}

ostream& operator<<(ostream& out, const Nota& obj)
{
	out << "Numarul notelor: " << obj.nr_note << endl;
	out << "Notele: ";
	for (int i=0; i<obj.nr_note; i++)
    {
        out << obj.note[i] << "; ";
    }
    out << endl;
	return out;
}

istream& operator>>(istream& in, Nota& obj)
{
    cout << "Numarul notelor: ";
    in >> obj.nr_note;
    cout << "Notele: ";
    obj.note = new int[(obj.nr_note)];
    for (int i = 0; i < obj.nr_note; i++)
        in >> obj.note[i];
    return in;
}

int Nota::getNrNote()
{
	return nr_note;
}

float Nota::getMedie()
{
    float medie=0;
    for (int i=0; i<nr_note; i++)
        medie=medie+note[i];
    medie=medie/nr_note;
    return medie;
}
