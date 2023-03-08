#include <iostream>
#include <cstring>
using namespace std;

class Biblioteca
{
    char adresa[20];
    char *nume;
    char *bibliotecar;
    int an_construire;
public:
    Biblioteca();
    Biblioteca(char[], char*, char*, int);
    Biblioteca(const Biblioteca&);
    ~Biblioteca();
    void afisare() const;
    void modif(char[], char*, char*, int);
    char* getNume() const;
    char* getBibliotecar() const;
    friend int getAn(const Biblioteca&);
    friend void interschimbare(Biblioteca&, Biblioteca&);
};


Biblioteca::Biblioteca()
{
    //Constructor fara parametri
    strcpy(adresa, "Nicio adresa.");
    nume = NULL;
    bibliotecar = NULL;
    an_construire = 0;
}

Biblioteca::Biblioteca(char a[], char* n, char* b, int ac)
{
    //Constructor cu parametri
    strcpy(adresa, a);
    nume = new char[strlen(n) + 1];
    strcpy(nume, n);
    bibliotecar = new char[strlen(b) + 1];
    strcpy(bibliotecar, b);
    an_construire = ac;
}

Biblioteca::Biblioteca(const Biblioteca &obj)
{
    //Constructor de copiere
    strcpy(adresa,obj.adresa);
    nume = new char[strlen(obj.nume) + 1];
    strcpy(nume, obj.nume);
    bibliotecar = new char[strlen(obj.bibliotecar) + 1];
    strcpy(bibliotecar, obj.bibliotecar);
    an_construire = obj.an_construire;
}

Biblioteca::~Biblioteca()
{
    //Destructor
    delete[] nume;
    delete[] bibliotecar;
}

void Biblioteca::afisare() const
{
    cout << "Adresa: " << adresa << endl;
    cout << "Nume: " << nume << endl;
    cout << "Bibliotecar: " << bibliotecar << endl;
    cout << "An construire: " << an_construire << endl;
    cout << "-----------------------------\n";
}

void Biblioteca::modif(char a[], char* n, char* b, int ac)
{
    strcpy(adresa,a);
    if(nume != NULL)
        delete[] nume;
    nume = new char[strlen(n) + 1];
    strcpy(nume, n);
    if(bibliotecar != NULL)
        delete[] bibliotecar;
    bibliotecar = new char[strlen(b) + 1];
    strcpy(bibliotecar, b);
    an_construire = ac;
}

char* Biblioteca::getBibliotecar() const
{
    return bibliotecar;
}

char* Biblioteca::getNume() const
{
    return nume;
}

int getAn(const Biblioteca& obj)
{
    return obj.an_construire;
}

void interschimbare(Biblioteca& obj1, Biblioteca& obj2)
{
    Biblioteca obj3(obj1);

    strcpy(obj1.adresa, obj2.adresa);
    if(obj1.nume != NULL)
        delete []obj1.nume;
    obj1.nume = new char[strlen(obj2.nume) + 1];
    strcpy(obj1.nume, obj2.nume);
    if(obj1.bibliotecar != NULL)
        delete []obj1.bibliotecar;
    obj1.bibliotecar = new char[strlen(obj2.bibliotecar) + 1];
    strcpy(obj1.bibliotecar, obj2.bibliotecar);
    obj1.an_construire=obj2.an_construire;

    strcpy(obj2.adresa, obj3.adresa);
    if(obj2.nume != NULL)
        delete []obj2.nume;
    obj2.nume = new char[strlen(obj3.nume) + 1];
    strcpy(obj2.nume, obj3.nume);
    if(obj2.bibliotecar != NULL)
        delete []obj2.bibliotecar;
    obj2.bibliotecar = new char[strlen(obj3.bibliotecar) + 1];
    strcpy(obj2.bibliotecar, obj3.bibliotecar);
    obj2.an_construire=obj3.an_construire;
}

int main()
{
    //Testare:
    Biblioteca obj1;
    Biblioteca obj2("Bld. Unirii 22", "Biblioteca Nationala", "Pop Andrei", 1803);
    Biblioteca obj3;
    obj3.modif("Bld. Iuliu Maniu 59", "Biblioteca Romana", "Tudor Bianca", 1912);
    obj2.afisare();
    obj3.afisare();
    interschimbare(obj2,obj3);
    obj2.afisare();
    obj3.afisare();
    cout<<"Informatii obj2: "<<obj2.getNume()<<", "<< obj2.getBibliotecar()<<", "<<getAn(obj2)<<";\n";

    Biblioteca obj4(obj2);

    Biblioteca *v;

    v = new Biblioteca[4];

    v[0].modif("Bld. Octavian Goga 6", "Biblioteca Metropolitana", "Stefan Radu", 1954);
    v[1].modif("Str. Traian 2", "Biblioteca B.P. Hasdeu", "Sighet Monica", 1799);
    v[2].modif("Bld. Regina Elisabeta 4", "Biblioteca De Istorie", "Dula Ana", 1799);
    v[3].modif("Calea Victoriei 125", "Biblioteca Pedagogica", "Gheorghe Luca", 1942);

    cout << "\n\nAfisare vector:\n";
    for(int i = 0; i < 4; i ++)
        v[i].afisare();

    for(int i = 0; i < 4; i ++)
        for(int j = i+1; j < 4; j ++)
            if(strcmp(v[i].getNume(), v[j].getNume())>0)
                interschimbare(v[i], v[j]);
    cout << "\n\nAfisare vector sortat alfabetic:\n";
    for(int i = 0; i < 4; i ++)
        v[i].afisare();

    for(int i = 0; i < 4; i ++)
        for(int j = i+1; j < 4; j ++)
            if(getAn(v[i])>getAn(v[j]))
                interschimbare(v[i], v[j]);
    cout << "\n\nAfisare cea mai veche biblioteca / cele mai vechi biblioteci:\n";
    v[0].afisare();
    int i=1;
    while(getAn(v[i])==getAn(v[i-1]))
    {
        v[i].afisare();
        i++;
    }

    delete[]v;
    return 0;
}
