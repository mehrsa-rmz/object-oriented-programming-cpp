#include "student.cpp"

int main ()
{
    Student *v = new Student[2];

    int i,j,k,l;

    for (i = 0; i < 2; i++)
    {
        cin >> v[i];
    }

    for (i = 0; i < 2; i++)
        for (j = i+1; j < 2; j++)
            if (v[i].getMedie()<v[j].getMedie())
                {
                    Student aux(v[i]);
                    v[i]=v[j];
                    v[j]=aux;
                }


    cout << "\n\nVectorul sortat in functie de medie:\n";
    for (i = 0; i < 2; i++)
    {
        cout << v[i];
    }

    cout<< "\n\nIntrouceti datele unui diriginte: \n";
    Diriginte dirig;
    cin>>dirig;
    dirig.modifNumeD("Stoenescu Adam");
    cout << "\n\nAm modificat numele dirigintelui:\n";
    cout<<dirig;

    Student *aux = new Student[3];
    Student stud;
    cout << "\n\nUn nou student:\n";
    cin >> stud;
    int nr;
    cout<<"\n\nIntroduceti un numar de la 1 la 3: ";
    cin>> nr;
    nr--;

    for (i=0; i<nr; i++)
        aux[i]=v[i];
    aux[nr]=stud;
    for (i=nr; i<2; i++)
        aux[i+1]=v[i];

    v = new Student [3];
    for (i=0; i<3; i++)
        v[i]=aux[i];

    cout<< "\n\nCei 3 elevi:\n";
    for (i = 0; i < 3; i++)
    {
        cout << v[i];
    }

    delete []v;
    delete []aux;

    return 0;
}
