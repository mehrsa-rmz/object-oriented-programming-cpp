#ifndef MASINA_CU_REMORCA_HPP
#define MASINA_CU_REMORCA_HPP

#include "remorca.cpp"
#include "masina.cpp"

class Masina_cu_remorca: public Remorca, public Masina
{
    int masa_totala;
public:
	Masina_cu_remorca();
	Masina_cu_remorca(int*, int, int*, const char*, int, const char*, int);
	Masina_cu_remorca(const Masina_cu_remorca&);
	Masina_cu_remorca& operator=(const Masina_cu_remorca&);
	~Masina_cu_remorca();
	void afisare();
	bool operator >(const Masina_cu_remorca&);
	bool operator <(const Masina_cu_remorca&);
	friend int operator+(const Masina_cu_remorca&, const Masina_cu_remorca&);
	friend int operator-(const Masina_cu_remorca&, const Masina_cu_remorca&);
};

#endif
