#ifndef STUDENT_HPP
#define STUDENT_HPP

#include "nota.cpp"
#include "diriginte.cpp"
#include "clasa.cpp"

class Student: public Nota, public Diriginte, public Clasa
{
    char *nume;
    public:
        Student ();
	    Student(int*, int, const char*, const char*, int, const char*);
	    Student(const Student&);
	    ~Student();

	    Student& operator=(const Student&);
        friend ostream& operator<<(ostream&, const Student&);
        friend istream& operator>>(istream&, Student&);

        char* getNumeS();
};

#endif
