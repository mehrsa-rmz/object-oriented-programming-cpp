#include "sticla.hpp"

Sticla::Sticla():Dop()
{
    cout << "Sticla: Constructor fara parametrii\n";
    pret=0;
    marca=NULL;
}
Sticla::Sticla(int diam, const char*t, int p, const char*m):Dop(diam,t)
{
    cout << "Sticla: Constructor cu parametrii\n";
    pret=p;
    marca=new char[strlen(m) + 1];
    strcpy(marca, m);
}
Sticla::Sticla(const Sticla& obj): Dop(obj)
{
    cout << "Sticla: Constructor de copiere\n";
    this->pret=obj.pret;
    this->marca=new char[strlen(obj.marca) + 1];
    strcpy(this->marca, obj.marca);
}
Sticla::~Sticla()
{
    cout << "Sticla: Destructor\n";
    delete []marca;
}
Sticla& Sticla::operator=(const Sticla& obj)
{
    this->diametru=obj.diametru;
    this->tip = new char[strlen(obj.tip) + 1];
    strcpy(this->tip, obj.tip);
    this->pret=obj.pret;
    this->marca = new char[strlen(obj.marca) + 1];
    strcpy(this->marca, obj.marca);
    return *this;
}
ostream& operator<<(ostream& out, const Sticla& obj)
{
    out << "Pret: " << obj.pret << endl;
	out << "Marca: " << obj.marca << endl;
	return out;
}
istream& operator>>(istream& in, Sticla& obj)
{
    in >> (Dop&)obj;
    cout<<"Pret sticla: ";
    in >> obj.pret;
    char buffer[100];
	cout<<"Marca sticla: ";
    in >> buffer;
	obj.marca = new char[strlen(buffer) + 1];
	strcpy(obj.marca, buffer);
    return in;
}
int Sticla::getPret() const
{
    return pret;
}
char* Sticla::getMarca() const
{
    return marca;
}
