#include <iostream>
#include <cstring>
using namespace std;

class Dop{
    protected:
        int diametru;
        char *tip;
    public:
        Dop();
        Dop(int, const char*);
        Dop(const Dop&);
        ~Dop();

        Dop& operator=(const Dop&);
        friend ostream& operator<<(ostream&, const Dop&);
        friend istream& operator>>(istream&, Dop&);
        int getDiametru() const;
        char* getTip() const;
};
