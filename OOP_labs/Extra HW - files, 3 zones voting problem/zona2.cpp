#include "zona2.hpp"

Zona2::Zona2()
{
    populatie2=0;
    f10=0;
    f9=0;
    f8=0;
    f7=0;
    f6=0;
}

Zona2::Zona2(int p, int o10, int o9, int o8, int o7, int o6)
{
    populatie2=p;
    f10=o10;
    f9=o9;
    f8=o8;
    f7=o7;
    f6=o6;
}

Zona2::Zona2(const Zona2& obj)
{
    populatie2=obj.populatie2;
    f10=obj.f10;
    f9=obj.f9;
    f8=obj.f8;
    f7=obj.f7;
    f6=obj.f6;
}

int Zona2::getPop (int aux=0)
{
    return f10+f9+f8+f7+f6;
}
int Zona2::prezenta (int nr, int aux=0)
{
    return (100 * nr) / getPop();
}
