#include "fractie.cpp"

int main()
{
    //Vrificare constructori, functii si operatorul "=".
    Fractie f1, f2(6, 3), f3(8, 4), f4, f5(9, 3), f6(f2), f7;
    f4=f2;
    f6.getInv();
    f7.setdata(6, 2);
    cout<<"f1="<<f1.getA()<<'/'<<f1.getB()<<'='<<f1.getValoare()<<'\n';
    cout<<"f2="<<f2.getA()<<'/'<<f2.getB()<<'='<<f2.getValoare()<<'\n';
    cout<<"f3="<<f3.getA()<<'/'<<f3.getB()<<'='<<f3.getValoare()<<'\n';
    cout<<"f4="<<f4.getA()<<'/'<<f4.getB()<<'='<<f4.getValoare()<<'\n';
    cout<<"f5="<<f5.getA()<<'/'<<f5.getB()<<'='<<f5.getValoare()<<'\n';
    cout<<"f6="<<f6.getA()<<'/'<<f6.getB()<<'='<<f6.getValoare()<<'\n';
    cout<<"f7="<<f7.getA()<<'/'<<f7.getB()<<'='<<f7.getValoare()<<"\n\n";

    //Verificare operatorii +, -, *, /, -.
    f1=f2+f7;
    cout<<"f2+f7="<<f1.getA()<<'/'<<f1.getB()<<'='<<f1.getValoare()<<'\n';

    f1=f2-f7;
    cout<<"f2-f7="<<f1.getA()<<'/'<<f1.getB()<<'='<<f1.getValoare()<<'\n';

    f1=f2*f7;
    cout<<"f2*f7="<<f1.getA()<<'/'<<f1.getB()<<'='<<f1.getValoare()<<'\n';

    f1=f2/f4;
    cout<<"f2/f4="<<f1.getA()<<'/'<<f1.getB()<<'='<<f1.getValoare()<<'\n';

    f1=-f1;
    cout<<"-f1="<<f1.getA()<<'/'<<f1.getB()<<'='<<f1.getValoare()<<"\n\n";

    //Verificare operatorii +=, -=, *=, /=.
    f4+=f2;
    cout<<"f4+f2="<<f4.getA()<<'/'<<f4.getB()<<'='<<f4.getValoare()<<'\n';

    f4-=f2;
    cout<<"f4-f2="<<f4.getA()<<'/'<<f4.getB()<<'='<<f4.getValoare()<<'\n';

    f4*=f2;
    cout<<"f4*f2="<<f4.getA()<<'/'<<f4.getB()<<'='<<f4.getValoare()<<'\n';

    f4/=f2;
    cout<<"f4/f2="<<f4.getA()<<'/'<<f4.getB()<<'='<<f4.getValoare()<<"\n\n";

    //Verificare operatorii ==. !=, <, <=, >, >=.
    cout<<"f2==f7 : "<<(f2==f7?"Adevarat":"Fals")<<'\n';
    cout<<"f2!=f7 : "<<(f2!=f7?"Adevarat":"Fals")<<'\n';
    cout<<"f2<f7 : "<<(f2<f7?"Adevarat":"Fals")<<'\n';
    cout<<"f2<=f7 : "<<(f2<=f7?"Adevarat":"Fals")<<'\n';
    cout<<"f2>f7 : "<<(f2>f7?"Adevarat":"Fals")<<'\n';
    cout<<"f2>=f7 : "<<(f2>=f7?"Adevarat":"Fals")<<'\n';
    return 0;
}
