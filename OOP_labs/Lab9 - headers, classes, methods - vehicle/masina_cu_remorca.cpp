#include "masina_cu_remorca.hpp"

Masina_cu_remorca::Masina_cu_remorca(): Vehicul(), Remorca(), Masina(), masa_totala(0)
{
}

Masina_cu_remorca::Masina_cu_remorca(int dimensiuni[], int greutate_maxima, int dim[], const char *marca, int masa_totala, const char *proprietar, int pret):
Remorca(dimensiuni, greutate_maxima, proprietar, pret), Masina(dim, marca, proprietar, pret), masa_totala(masa_totala), Vehicul(proprietar, pret)
{
}

Masina_cu_remorca::Masina_cu_remorca( const Masina_cu_remorca &obj )
{
	*this = obj;
}

Masina_cu_remorca& Masina_cu_remorca::operator=(const Masina_cu_remorca& obj)
{
    Vehicul::operator=(obj);
    Remorca::operator=(obj);
    Masina::operator=(obj);
    this->masa_totala=obj.masa_totala;

    return *this;
}

void Masina_cu_remorca::afisare()
{
	cout << "Proprietar vehicul: " << Vehicul::getProprietar() << " ; Pret vehicul: " << Vehicul::getPret() << " $";
	cout << " ; Dimensiuni remorca(L, l, h): ";
	Remorca::getDimensiuni();
	cout << "; Greutate maxima: " << Remorca::getGreutate_max() << " kg";
	cout << " ; Marca masina: " << Masina::getMarca() << " ; Dimensiuni masina(L, l, h): ";
	Masina::getDimensiuniM();
	cout << " ; Masa totala: " << masa_totala << " kg ; \n";

}

int operator+(const Masina_cu_remorca& obj1, const Masina_cu_remorca& obj2)
{
	return obj1.masa_totala + obj2.masa_totala;
}

int operator-(const Masina_cu_remorca& obj1, const Masina_cu_remorca& obj2)
{
	return obj1.masa_totala - obj2.masa_totala;
}

bool Masina_cu_remorca::operator <(const Masina_cu_remorca& obj)
{
	if(this->masa_totala < obj.masa_totala) return true;
	else
        return false;
}

bool Masina_cu_remorca::operator >(const Masina_cu_remorca& obj)
{
	if(this->masa_totala > obj.masa_totala) return true;
	else
        return false;
}
