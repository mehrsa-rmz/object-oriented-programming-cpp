#include "student.hpp"

Student::Student (): Nota(), Diriginte(), Clasa(), nume(NULL)
{
}

Student::Student(int* note, int nr_note, const char* numeD, const char* grupa, int nr_elevi, const char* n):Nota(note, nr_note), Diriginte(numeD, grupa), Clasa(nr_elevi)
{
    this->nume = new char[strlen(n) + 1];
	strcpy(this->nume,n);
}

Student::Student(const Student& obj): Nota(), Diriginte()
{
    nume = NULL;
    *this = obj;
}

Student::~Student()
{
    delete []nume;
}

Student& Student::operator=(const Student& obj)
{
    if( this != &obj)
	{
		Nota::operator=(obj);
		Diriginte::operator=(obj);
		Clasa::operator=(obj);

		if(this->nume != NULL)
			delete []this->nume;

		this->nume = new char[strlen(obj.nume) + 1];
		strcpy(this->nume,obj.nume);
	}

	return *this;
}

ostream& operator<<(ostream& out, const Student& obj)
{
    out << "Numele studentului: " << obj.nume << endl;
    out << (const Nota&) obj;
	out << (const Diriginte&) obj;
	out << (const Clasa&) obj;
	out << endl;

	return out;
}

istream& operator>>(istream& in, Student& obj)
{
    char buffer[100];
    cout<<"\nNumele studentului: ";
    in.get();
    in.getline(buffer,100);
    obj.nume = new char[strlen(buffer) + 1];
    strcpy(obj.nume, buffer);
    in >> (Clasa &)obj;
    in >> (Diriginte &)obj;
    in >> (Nota &)obj;

    return in;
}

char* Student::getNumeS()
{
    return nume;
}

