#include "zona1.hpp"

Zona1::Zona1()
{
    populatie1=0;
    ob4=0;
    ob3=0;
    ob2=0;
    ob1=0;
    ob0=0;
}

Zona1::Zona1(int p, int o4, int o3, int o2, int o1, int o0)
{
    populatie1=p;
    ob4=o4;
    ob3=o3;
    ob2=o2;
    ob1=o1;
    ob0=o0;
}

Zona1::Zona1(const Zona1& obj)
{
    populatie1=obj.populatie1;
    ob4=obj.ob4;
    ob3=obj.ob3;
    ob2=obj.ob2;
    ob1=obj.ob1;
    ob0=obj.ob0;
}

int Zona1::getPop (int aux=0)
{
    return ob4+ob3+ob2+ob1+ob0;
}
int Zona1::prezenta (int nr, int aux=0)
{
    return (100 * nr) / getPop();
}
