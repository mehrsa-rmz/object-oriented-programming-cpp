#include "sticla.cpp"

int main()
{
    Sticla *v;
    v = new Sticla[4];
    cin >> v[0];
    cin >> v[1];
    cin >> v[2];
    cin >> v[3];
    cin >> v[4];

    for (int i=0; i<=4; i++)
        for (int j=i+1; j<=4; j++)
            if (v[i].getPret()>v[j].getPret())
            {
                Sticla aux(v[i]);
                v[i]=v[j];
                v[j]=aux;
            }
    cout<<"\nVectorul sortat:\n";
    cout<<"v[0]: ";
    cout<<v[0];
    cout<<"v[1]: ";
    cout<<v[1];
    cout<<"v[2]: ";
    cout<<v[2];
    cout<<"v[3]: ";
    cout<<v[3];
    cout<<"v[4]: ";
    cout<<v[4];

    cout<<"\nElementele cu diametrul dopului >5:\n";
    for (int i=0; i<=4; i++)
        if (v[i].getDiametru()>5)
        {
            cout<<"v["<<i<<"]: ";
            cout<<v[i];
        }

    return 0;
}
