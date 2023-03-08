#include "masina_cu_remorca.cpp"

int main()
{
    Vehicul **v;

	v = new Vehicul*[5];
	Vehicul *aux;
	int dim_r[3] = {4,3,2};
	int dim_m[3] = {4,2,1};

	v[0] = new Vehicul("Matei", 15000);
	v[1] = new Remorca(dim_r, 1000, "Cristi", 5000);
	v[2] = new Masina(dim_m, "Ford", "Sarah", 16000);
	v[3] = new Masina_cu_remorca(dim_r, 500, dim_m, "Opel", 12500, "Andrei", 9000 );
	v[4] = new Masina_cu_remorca(dim_r, 900, dim_m, "BMW", 18000, "Bianca", 11000 );

	cout << "Elementele vectorului sunt: \n";
	for ( int i = 0; i < 5; i++)
		v[i]->afisare();
	cout << endl;

	for(int i = 0; i < 4; i++)
		for(int j = i + 1; j < 5; j++)
            if(v[i]->getPret() < v[j]->getPret())
			{
				aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}

	cout << "Elementele vectorului sortate in functie de pret: \n";
	for ( int i = 0; i < 5; i++)
		v[i]->afisare();
	cout << endl;


	Masina_cu_remorca obj1 (dim_r, 850, dim_m, "Fiat", 15600, "Alex", 7600 );
	Masina_cu_remorca obj2 (dim_r, 1000, dim_m, "Ford", 13500, "Monica", 8200 );

	cout << "Testarea operatorilor + - < > pe obiectele: \n";
	cout<<"Obj 1: ";
	obj1.afisare();
	cout<<"Obj 2: ";
	obj2.afisare();

	cout << "\nObj 1 < Obj 2 : " << obj1.operator<(obj2);
	cout << "\nObj 1 > Obj 2 : " << obj1.operator>(obj2);
	cout << "\nObj 1 + Obj 2 : " << operator+(obj1,obj2);
	cout << "\nObj 1 - Obj 2 : " << operator-(obj1,obj2);

	for(int i=0; i < 5; i++)
        delete v[i];

	delete []v;

    return 0;
}
