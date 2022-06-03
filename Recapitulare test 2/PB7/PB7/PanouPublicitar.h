
#include "Afisaj.h"
class PanouPublicitar :
    public Afisaj
{
    int lungime;
    int inaltime;
    string adresa;
public:
    PanouPublicitar(string adr, int l, int h) : Afisaj()
    {
        lungime = l;
        inaltime = h;
        adresa = adr;
    }

    void Display() override
    {
        cout << "PANOU_PUBLICITAR:" << "[" << adresa << "]" << "[" << lungime << "]" << "[" << inaltime<< "]\n";
        Afisaj::Display();
    }
};
