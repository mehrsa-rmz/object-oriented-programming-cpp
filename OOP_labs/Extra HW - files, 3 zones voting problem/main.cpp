#include "zona3.cpp"
#include <fstream>

int main ()
{
    ifstream fin;
    fin.open("input.txt");
    ofstream fout;
    fout.open("output.txt");

    int z, p, a, b, c, d, e, f;
    Baza **obj;
    obj = new Baza*[3];

    fin >> z >> p >> a >> b >> c >> d >> e;
    obj[0] = new Zona1(p, a, b, c, d, e);

    fin >> z >> p >> a >> b >> c >> d >> e;
    fin >> f >> f >> f >> f >> f;
    obj[1] = new Zona2(p, a, b, c, d, e);

    fin >> z >> p >> a >> b >> c >> d;
    obj[2] = new Zona3(p, a, b, c, d);

    int i, nr_int=0, v_min, nr=0;
    float nr_da=0, nr_nu=0;
    char q[100], buff[10], bf;
    while(fin>>nr_int>>z)
    {
        if (z==3)
        {
            fin>>v_min;
            fout<<"\nZona 3\n";
            for(i=0; i<nr_int; i++)
                {
                    fin.getline(q, 100, '?');
                    fout<<q<<"?\n";
                    fin>>buff>>nr_da>>buff>>nr_nu;
                    if(nr_da>nr_nu)
                        fout<<"Acceptat "<<nr_da<<'-'<<nr_nu<<'\n';
                    else
                        {
                            if(nr_da<nr_nu)
                                fout<<"Respins "<<nr_da<<'-'<<nr_nu<<'\n';
                            else
                                fout<<"Egalitate "<<nr_da<<'-'<<nr_nu<<'\n';
                        }
                    fout<<"Prezenta vot: "<<obj[2]->prezenta(nr_da+nr_nu, v_min)<<"%\n";
                }
        }
        else
        {
            if (z==2)
            {
                fout<<"\nZona 2\n";
                for(i=0; i<nr_int; i++)
                {
                    fin.getline(q, 100, '?');
                    fout<<q<<"?\n";
                    fin>>buff>>a>>b>>c>>d>>e;
                    nr=a+b+c+d+e;
                    nr_da=10*a+9*b+8*c+7*d+6*e;
                    fin>>buff>>a>>b>>c>>d>>e;
                    nr=nr+a+b+c+d+e;
                    nr_nu=10*a+9*b+8*c+7*d+6*e;
                    if(nr_da>nr_nu)
                        fout<<"Acceptat "<<nr_da<<'-'<<nr_nu<<'\n';
                    else
                        {
                            if(nr_da<nr_nu)
                                fout<<"Respins "<<nr_da<<'-'<<nr_nu<<'\n';
                            else
                                fout<<"Egalitate "<<nr_da<<'-'<<nr_nu<<'\n';
                        }
                    fout<<"Prezenta vot: "<<obj[1]->prezenta(nr, 0)<<"%\n";
                }
            }
            else
            {
                fout<<"Zona 1\n";
                for(i=0; i<nr_int; i++)
                {
                    fin.getline(q, 100, '?');
                    fout<<q<<"?\n";
                    fin>>buff>>a>>b>>c>>d>>e;
                    nr=a+b+c+d+e;
                    nr_da=a+0.8*b+0.6*c+0.4*d+0.2*e;
                    fin>>buff>>a>>b>>c>>d>>e;
                    nr=nr+a+b+c+d+e;
                    nr_nu=a+0.8*b+0.6*c+0.4*d+0.2*e;
                    if(nr_da>nr_nu)
                        fout<<"Acceptat "<<nr_da<<'-'<<nr_nu<<'\n';
                    else
                        {
                            if(nr_da<nr_nu)
                                fout<<"Respins "<<nr_da<<'-'<<nr_nu<<'\n';
                            else
                                fout<<"Egalitate "<<nr_da<<'-'<<nr_nu<<'\n';
                        }
                    fout<<"Prezenta vot: "<<obj[0]->prezenta(nr, 0)<<"%\n";
                }
            }
        }
    }

    fin.close();
    fout.close();
    return 0;
}
