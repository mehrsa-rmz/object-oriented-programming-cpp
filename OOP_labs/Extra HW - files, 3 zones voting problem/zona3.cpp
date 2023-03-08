#include "zona3.hpp"

Zona3::Zona3()
{
    populatie3=0;
    sub14=0;
    peste14=0;
    peste20=0;
    peste40=0;

}

Zona3::Zona3(int p, int s, int p14, int p20, int p40)
{
    populatie3=p;
    sub14=s;
    peste14=p14;
    peste20=p20;
    peste40=p40;
}

Zona3::Zona3(const Zona3& obj)
{
    populatie3=obj.populatie3;
    sub14=obj.sub14;
    peste14=obj.peste14;
    peste20=obj.peste20;
    peste40=obj.peste40;
}

int Zona3::getPop (int v_minima)
{
    if (v_minima==14)
        return peste14;
    if (v_minima==20)
        return peste20;
    if (v_minima==40)
        return peste40;
}
int Zona3::prezenta (int nr, int v_minima)
{
    return (100 * nr) / getPop(v_minima);
}
