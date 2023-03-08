#include "vehicul.hpp"

Vehicul::Vehicul(): pret(0), proprietar(NULL)
{
}

Vehicul::Vehicul(const char *proprietar, int pret): pret(pret)
{
	this->proprietar = new char[strlen(proprietar)+1];
	strcpy(this->proprietar,proprietar);
}

void Vehicul::afisare()
{
	cout <<  "Proprietar vehicul: " << proprietar << " ; Pret vehicul: " << pret << " $ ; \n";
}

char* Vehicul::getProprietar()
{
	return proprietar;
}

int Vehicul::getPret()
{
	return pret;
}

Vehicul::Vehicul(const Vehicul& obj)
{
	proprietar = NULL;
	*this = obj;
}

Vehicul& Vehicul::operator=(const Vehicul& obj)
{
	this->pret = obj.pret;
	if(proprietar!=NULL)
		delete []proprietar;

	this->proprietar=new char[strlen(obj.proprietar)+1];
	strcpy(this->proprietar,obj.proprietar);

	return *this;
}

Vehicul::~Vehicul()
{
	delete []proprietar;
}
