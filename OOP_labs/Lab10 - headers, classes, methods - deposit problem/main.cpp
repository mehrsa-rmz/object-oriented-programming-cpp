#include "capre.cpp"

int main()
{
	Ferma **v;
	Ferma *aux;

	v = new Ferma* [5];

	v[0] = new Vaci (10, 30, "Nutret");
	v[1] = new Gaini(100, 5, "Graunte");
	v[2] = new Cai(2, 8, "Nutret");
	v[3] = new Porci(8,  4, "Graunte", 5, "Iarba");
	v[4] = new Capre(4, 4, "Nutret");

	cout << "-> Ce animale se gasesc la ferma si cat consuma zilnic? \n\n";
	for(int i = 0 ; i < 5 ; i ++)
	 v[i]->afisare();



	float cant_totala = 0, cant_nutret = 0, cant_graunte = 0, cant_iarba = 0, nutret_depozit, graunte_depozit, iarba_depozit, capacitate_maxima = 2000;
	for(int i = 0 ; i < 5 ; i ++)
		cant_totala = cant_totala + v[i]->getCantitateTotala();
    cant_nutret = cant_nutret + v[0]->getCantitateTotala() + v[2]->getCantitateTotala() + v[4]->getCantitateTotala();
	cant_graunte = cant_graunte + v[1]->getCantitateTotala() + v[3]->getCantitate(1);
	cant_iarba = cant_iarba + v[3]->getCantitate(2);
	cout << "\n\n-> Cata mancare se consuma pe zi(in total si pe fiecare categorie)? \n\n";
	cout << "La ferma se consuma zilnic " << cant_totala << "kg de mancare: \n";
	cout << "Nutret: " << cant_nutret << "kg \n";
	cout << "Graunte: " << cant_graunte << "kg \n";
	cout << "Iarba: " << cant_iarba << "kg \n";



	nutret_depozit = (cant_nutret / cant_totala) * capacitate_maxima ;
	graunte_depozit = (cant_graunte / cant_totala) * capacitate_maxima;
	iarba_depozit =  (cant_iarba / cant_totala) * capacitate_maxima ;
	cout << "\n\n-> Ce cantitate din fiecare mancare trebuie stocata in depozit astfel incat aceasta sa ajunga cat mai multe zile? \n\n";
	cout << "Nutret: " << nutret_depozit << "kg \n";
	cout << "Graunte: " << graunte_depozit << "kg \n";
	cout << "Iarba: " << iarba_depozit << "kg \n";



	int nr_reumpleri;
	nr_reumpleri = 365/(capacitate_maxima / cant_totala) +1;
	cout << "\n\n-> De cate ori trebuie sa fie reumplut depozitul pe an? \n\n";
	cout << "Depozitul trebuie reumplut de " << nr_reumpleri << " ori pe an.\n";



	float total_ramas, nutret_ramas, graunte_ramas, iarba_ramas;
	total_ramas = (nr_reumpleri* capacitate_maxima) - (cant_totala * 365);
	nutret_ramas = (cant_nutret/ cant_totala) * total_ramas;
	graunte_ramas = (cant_graunte/ cant_totala) * total_ramas;
	iarba_ramas = (cant_iarba/ cant_totala) * total_ramas;
	cout << "\n\n-> Cata mancare va ramane la finalul anului (in total si pe fiecare categorie)? \n\n";
	cout << "La finalul anului raman " << total_ramas << "kg de mancare: \n";
    cout << "Nutret: " << nutret_ramas << "kg \n";
	cout << "Graunte: " << graunte_ramas << "kg \n";
	cout << "Iarba: " << iarba_ramas << "kg \n";



    for(int i = 0; i < 5; i++)
		for(int j = i; j <4; j++)
			if(v[i]->getCantitateTotala()<v[j]->getCantitateTotala())
			{
				aux = v[i];
				v[i] = v[j];
				v [j] = aux;
			}
	cout <<	"\n\n-> Top 3 consumatori de mancare: \n";
	for(int i = 0; i < 3; i++)
		cout << v[i]->getAnimal() << endl;



    for(int i=0; i < 5; i++)
		delete v[i];
	delete []v;

	return 0;
}
