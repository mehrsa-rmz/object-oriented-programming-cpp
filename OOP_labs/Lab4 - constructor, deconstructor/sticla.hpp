#include "dop.cpp"

class Sticla: public Dop{
        int pret;
        char *marca;
    public:
        Sticla();
        Sticla(int, const char*, int, const char*);
        Sticla(const Sticla&);
        ~Sticla();

        Sticla& operator=(const Sticla&);
        friend ostream& operator<<(ostream&, const Sticla&);
        friend istream& operator>>(istream&, Sticla&);
        int getPret() const;
        char* getMarca() const;
};
