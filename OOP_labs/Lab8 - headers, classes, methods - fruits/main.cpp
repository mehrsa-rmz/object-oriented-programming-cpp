#include "baza.cpp"
#include "portocale.cpp"
#include "banana.cpp"
#include "morcovi.cpp"
#include "nuci.cpp"

int main()
{
    Baza **v;

    v = new Baza*[10];
	Baza *a;
	v[0] = new Portocale (2, 4);
	v[1] = new Banana (1);
	v[2] = new Morcovi (400, 1);
	v[3] = new Nuci (350, 2);
	v[4] = new Portocale (3, 3);
	v[5] = new Banana (2);
	v[6] = new Morcovi (200, 2);
	v[7] = new Nuci (500, 4);
	v[8] = new Portocale (4, 5);
	v[9] = new Banana (3);


	int pret_total=0;
	for(int i=0; i<10; i++)
    {
        v[i]->afisare();
        pret_total+=v[i]->pret_final();
    }
    cout<<"--------------\nPRET TOTAL: "<<pret_total<<'\n';


    for(int i=0; i<10; i++)
        for(int j=i+1; j<10; j++)
            if(v[i]->getType()>v[j]->getType())
            {
                a=v[i];
                v[i]=v[j];
                v[j]=a;
            }
    cout<<"\nDupa ordonare:\n";
    for(int i=0; i<10; i++)
        v[i]->afisare();


    pret_total=0;
    for(int i=0; i<10; i++)
        if(v[i]->getType()==2)
            pret_total+=v[i]->pret_final();
    cout<<"\nPretul total al portocalelor este "<<pret_total<<" lei.";


    for(int i=0; i<10; i++)
        delete v[i];
    delete []v;


    return 0;
}
