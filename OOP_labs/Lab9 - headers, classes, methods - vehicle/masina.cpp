#include "masina.hpp"

Masina::Masina(): Vehicul(), marca(NULL)
{
	for(int i=0; i < 3; i++)
		dimensiuni[i] = 0;
}

Masina::Masina(int dimensiuni[], const char* marca, const char* proprietar, int pret): Vehicul(proprietar, pret)
{
	this->marca = new char[strlen(marca) + 1];
	strcpy(this->marca, marca);

	for(int i=0; i < 3; i++)
		this->dimensiuni[i] = dimensiuni[i];
}

Masina::Masina(const Masina& obj)
{
	marca = NULL;
	*this = obj;
}

Masina& Masina::operator=(const Masina& obj)
{
	Vehicul::operator=(obj);
	if(marca!=NULL)
		delete []marca;

	this->marca=new char[strlen(obj.marca)+1];
	strcpy(this->marca,obj.marca);

	for(int i=0; i<3; i++)
        this->dimensiuni[i]=obj.dimensiuni[i];

	return *this;
}

void Masina::afisare()
{
    cout << "Proprietar vehicul: " << Vehicul::getProprietar() << " ; Pret vehicul: " << Vehicul::getPret() << " $";
    cout << " ; Marca masina: " << marca << " ; Dimensiuni masina(L, l, h): ";
	for(int i = 0; i < 3; i++)
		cout << dimensiuni[i] << " ";
	cout << endl;
}

void Masina::getDimensiuniM(){
	for(int i=0; i<3; i++){
		cout << dimensiuni[i] << " ";
	}
}

char* Masina::getMarca()
{
	return marca;
}

Masina::~Masina()
{
	delete []marca;
}
