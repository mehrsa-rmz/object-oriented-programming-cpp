#include <iostream>
#include <cstring>
using namespace std;

class Angajat
{
    int varsta;
    char nume[20];
    char CNP[14];
    int salariu;
public:
    Angajat()
    {
        varsta=0;
        strcpy(nume, "");
        strcpy(CNP, "");
        salariu=0;
    }

    Angajat(int v, char n[],char C[],int s)
    {
        varsta=v;
        strcpy(nume, n);
        strcpy(CNP, C);
        salariu=s;
    }

    void afisare()
    {
        cout << "Varsta este: " << varsta << ". ";
        cout << "Numele este: " << nume << ". ";
        cout << "CNP-ul este: " << CNP << ". ";
        cout << "Salariul este: " << salariu << endl;
    }

    void modif(int v,char n[], char C[], int s)
    {
        varsta=v;
        strcpy(nume, n);
        strcpy(CNP, C);
        salariu=s;
    }

    int getVarsta()
    {
        return varsta;
    }

    char* getNume()
    {
        return nume;
    }

    char* getCNP()
    {
        return CNP;
    }

    int getSalariu()
    {
        return salariu;
    }
};

int main()
{
    Angajat obj1(19, "Doncu Matei", "5011220673022", 15000);
    Angajat obj2;
    Angajat aux;

    cout<<"Salariul si numele pentru primul angajat sunt: "<<obj1.getSalariu()<<" ; "<<obj1.getNume()<<endl;

    obj2.modif(23, "Stancu Sarah", "6981111329854", 12500);
    cout<<"\nDupa modificare, informatiile angajatului 2 sunt:"<<endl;
    //obj1.afisare();
    obj2.afisare();

    Angajat vector[5];
    vector[0].modif(19, "Pop Maria", "602011549132", 8000);
    vector[1].modif(20, "Micu Bianca", "6010216846259", 12000);
    vector[2].modif(21, "Dobrescu Luca", "5000317439165", 6000);
    vector[3].modif(22, "Moise Ana", "6990418036123", 9000);
    vector[4].modif(23, "Buculei Mariana", "6980519163213", 12000);

    cout<<"\nAngajatii din vector sunt:\n";
    for( int i = 0; i < 5; i ++)
        vector[i].afisare();

    cout<< "\nSortare Alfabetica:\n";
    for( int i = 0; i < 4; i ++)
    {
        for ( int j = i + 1; j < 5; j++)
        {
            if(strcmp(vector[i].getNume(),vector[j].getNume()) > 0)
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }

    for( int i = 0; i < 5; i ++)
        vector[i].afisare();


    //Sortare in functie de salariu:
    for( int i = 0; i < 4; i++)
    {
        for ( int j = i + 1; j < 5; j++)
        {
            if(vector[i].getSalariu()<vector[j].getSalariu())
            {
                aux = vector[i];
                vector[i] = vector[j];
                vector[j] = aux;
            }
        }
    }

    int count=1;
    while(vector[count].getSalariu()==vector[count-1].getSalariu())
        count++;

    cout << "\nAngajatii cu salariul maxim din vector sunt:\n";
    for( int i = 0; i < count; i++)
        vector[i].afisare();



    return 0;
}
