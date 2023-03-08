#include "remorca.hpp"

Remorca::Remorca(): Vehicul(), greutate_maxima(0)
{
	for(int i=0; i < 3; i++)
		dimensiuni[i] = 0;
}

Remorca::Remorca(int dimensiuni[], int greutate_maxima, const char *proprietar, int pret): greutate_maxima(greutate_maxima), Vehicul(proprietar, pret)
{
	for(int i=0; i < 3; i++)
		this->dimensiuni[i] = dimensiuni[i];
}

Remorca::Remorca(const Remorca& obj)
{
	*this = obj;
}

Remorca& Remorca::operator=(const Remorca& obj)
{
	Vehicul::operator = (obj);
	this->greutate_maxima = obj.greutate_maxima;

	for(int i = 0; i < 3; i++)
        this->dimensiuni[i]=obj.dimensiuni[i];

	return *this;
}

void Remorca::afisare()
{
	cout << "Proprietar vehicul: " << Vehicul::getProprietar() << " ; Pret vehicul: " << Vehicul::getPret() << " $";
	cout << " ; Dimensiuni remorca(L, l, h): " ;
	for(int i = 0; i < 3; i++)
		cout << dimensiuni[i] << " ";
	cout << "; Greutate maxima: " << greutate_maxima << " kg ; \n";
}

int Remorca::getGreutate_max(){
	return greutate_maxima;
}

void Remorca::getDimensiuni(){
	for(int i=0; i<3; i++){
		cout << dimensiuni[i] << " ";
	}
}
