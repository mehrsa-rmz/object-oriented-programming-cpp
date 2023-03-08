#include "dop.hpp"

Dop::Dop()
{
    cout << "Dop: Constructor fara parametrii.\n";
    diametru=0;
    tip=NULL;
}
Dop::Dop(int d, const char*t)
{
    cout << "Dop: Constructor cu parametrii.\n";
    diametru=d;
    strcpy(tip, t);
}
Dop::Dop(const Dop& obj)
{
    cout << "Dop: Constructor de copiere.\n";
    this->diametru=obj.diametru;
    this->tip = new char[strlen(obj.tip) + 1];
    strcpy(this->tip, obj.tip);
}
Dop::~Dop()
{
    cout << "Dop: Destructor.\n";
    delete []tip;
}
Dop& Dop::operator=(const Dop& obj)
{
    this->diametru=obj.diametru;
    this->tip = new char[strlen(obj.tip) + 1];
    strcpy(this->tip, obj.tip);
    return *this;
}
ostream& operator<<(ostream& out, const Dop& obj)
{
    out << "Diametru: " << obj.diametru << endl;
	out << "Tip: " << obj.tip << endl;
	return out;
}
istream& operator>>(istream& in, Dop& obj)
{
    cout<<"Diametru dop: ";
    in >> obj.diametru;
	char buffer[100];
	cout<<"Tip dop: ";
	in >> buffer;
	obj.tip = new char[strlen(buffer) + 1];
	strcpy(obj.tip, buffer);
    return in;
}
int Dop::getDiametru() const
{
    return diametru;
}
char* Dop::getTip() const
{
    return tip;
}
