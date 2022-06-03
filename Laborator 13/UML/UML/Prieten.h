#pragma once
#include "Contact.h"
class Prieten :
    public Contact
{
private:
    string data_nastere;
    string adresa;
    string nr_telefon;
public:
    Prieten(string Nume, string Nastere, string Adresa, string Telefon);
    string GetAdresa();
    string GetDataNastere();
    string GetNrTelefon();
    string GetTip();
    string Date();
};

