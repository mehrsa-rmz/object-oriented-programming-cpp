#include "vector.cpp"

int main()
{
	cout << "Vector pentru tipul int: " << endl;
	int buf_int[10] = {9, 85, 26, 0, 36, 15, 4, 6, 23, 30};
	Vector<int> v_int(10, buf_int);
	v_int.afisare();
	cout << "Vectorul sortat: " << endl;
	v_int.sortare();
	v_int.afisare();

	cout << "\n\nVector pentru tipul double: " << endl;
	double buf_double[10] = {1.2, 6.5, 2.1, 8.6, 9.5, 7.4, 3.3, 4.4, 5.5, 2.2};
	Vector<double> v_double(10, buf_double);
	v_double.afisare();
	cout << "Vectorul sortat: " << endl;
	v_double.sortare();
	v_double.afisare();

	cout << "\n\nVector pentru tipul Nr_complex: " << endl;
	Nr_complex *buf_complex = new Nr_complex[5];
	buf_complex[0] = Nr_complex();
	buf_complex[1] = Nr_complex(1.8, 9);
	buf_complex[2] = Nr_complex(20, 12);
	buf_complex[3] = Nr_complex(4, 0.2);
	buf_complex[4] = Nr_complex(12, 8);
	Vector<Nr_complex> v_complex(5, buf_complex);
	v_complex.afisare();
	cout << "Vectorul sortat: " << endl;
	v_complex.sortare();
	v_complex.afisare();

	cout << "\n\nVector pentru tipul Fractie: " << endl;
	Fractie *buf_fractie = new Fractie[5];
	buf_fractie[0] = Fractie(0, 10);
	buf_fractie[1] = Fractie(5, 5);
	buf_fractie[2] = Fractie(7, 35);
	buf_fractie[3] = Fractie(1, 2);
	buf_fractie[4] = Fractie(9, 3);
	Vector<Fractie> v_fractie(5, buf_fractie);
	v_fractie.afisare();
	cout << "Vectorul sortat: " << endl;
	v_fractie.sortare();
	v_fractie.afisare();

	return 0;
}

