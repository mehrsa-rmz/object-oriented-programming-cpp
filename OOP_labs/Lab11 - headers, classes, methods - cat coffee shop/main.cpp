#include "colorate.cpp"

int main ()
{
    Pisici **p;
	Pisici *aux;
	int capacitate=300, zile=0, mancare=0, pui=0, pa=0, pn=0, pv=0, tinere=0, ta=0, tn=0, tv=0, mature=0, ma=0, mn=0, mv=0;

	p = new Pisici* [10];
	p[0] = new Albe(0, 1, "Kitty", "pui de 2 luni cu blanita alba si urechi si labute maronii, cu ochii albastrii, blanda, somnoroasa");
	p[1] = new Albe(1, 1, "Fifi", "pisica persana alba cu ochii verzi, jucausa si prietenoasa");
	p[2] = new Albe(2, 1, "Snickers", "dragalasa si prietenoasa, se intelege foarte bine cu alte pisici");
	p[3] = new Negre(3, 1, "Elina", "blanita neagra si ochi galbeni, personalitate sofisticata, calma, dar nu ii place sa fie ridicata");
	p[4] = new Negre(4, 1, "Silvester", "ochi verzi si mari, blana neagra pe tot corpul mai putin pe botic si in varful cozii unde e alba, putin sperioasa");
	p[5] = new Negre(0, 1, "Tom", "pui cu blanita negru spre gri, foarte jucaus");
	p[6] = new Colorate(1, 1, "Caju", "pisoi cu blana blonduta, mancacioasa si curioasa, nu sta locului, ii place sa fie scoasa la plimbare cu lesa");
	p[7] = new Colorate(2, 1, "Boop", "motan roscat cu ochii negri, foarte afectuos, mare iubitor de imbratisari");
	p[8] = new Colorate(5, 1, "Nala", "pisica proprietarului, stapana cafenelei, soon-to-be mamica a doua oara");
	p[9] = new Colorate(3, 1, "Simba", "motan vargat, fire cam geloasa, miauna toata ziua dupa atentie, dar foarte dragut");


    cout << "Capacitate maxima: 300 \nCapacitate actuala: 300 \nPisici adoptate pe zi: 5 \nPisici salvate pe zi: 3\n\n";
    cout << "-> In cate zile va ajunge cafaneaua sa aiba o ocupare a locurilor <= 50% ? \n\n";
 	while (capacitate>150)
    {
        capacitate-=2;
        zile++;
    }
    cout << "In " << zile << " zile. \n";


    cout << "\n-> Stiind ca o pisica mananca 100g de mancare pe zi, calculati cata mancare de pisici va consuma cafeneaua in 100 de zile? \n\n";
    capacitate=300;
    for(int i=1; i<=100; i++)
    {
        mancare+=100*capacitate;
        capacitate-=2;
    }
    mancare/=1000;
    cout << "Se consuma " << mancare << " kg de mancare in 100 de zile. \n";


    cout << "\n-> Cate pisici sunt in fiecare categorie de varsta, care e repartitia pe culori si care e starea vaccinarii?\n\n";
    for(int i=0; i<10; i++)
        if (p[i]->getVarsta()<1)
        {
            pui++;

            if (p[i]->getVaccin())
                pv++;

            if (p[i]->getCuloare()=='A')
                pa++;
            else
                if (p[i]->getCuloare()=='N')
                    pn++;
        }
        else
            if (p[i]->getVarsta()<3)
            {
                tinere++;

                if (p[i]->getVaccin())
                    tv++;

                if (p[i]->getCuloare()=='A')
                    ta++;
                else
                    if (p[i]->getCuloare()=='N')
                        tn++;
            }
            else
            {
                mature++;

                if (p[i]->getVaccin())
                    mv++;

                if (p[i]->getCuloare()=='A')
                    ma++;
                else
                    if (p[i]->getCuloare()=='N')
                        mn++;
            }
    cout << pui << " pui, din care " << pa <<" sunt albi, " << pn << " sunt negrii si " << pui-pa-pn << " sunt colorati. " << pv << " sunt vaccinati.\n";
    cout << tinere << " tinere, din care " << ta <<" sunt albe, " << tn << " sunt negre si " << tinere-ta-tn << " sunt colorate. " << tv << " sunt vaccinate.\n";
    cout << mature << " mature, din care " << ma <<" sunt albe, " << mn << " sunt negre si " << mature-ma-mn << " sunt colorate. " << mv << " sunt vaccinate.\n";


    cout << "\n-> Top 3 pisici cu cea mai lunga descriere: \n\n";
    for (int i=0; i<3; i++)
        {
            for (int j=i+1; j<10; j++)
                if(p[i]->getLungimeDescriere()<p[j]->getLungimeDescriere())
            {
                aux=p[i];
                p[i]=p[j];
                p[j]=aux;
            }
            cout << i+1 << ": ";
            p[i]->afisare();
            cout << endl;
        }


    for(int i=0; i < 10; i++)
		delete p[i];
	delete []p;

    return 0;
}
