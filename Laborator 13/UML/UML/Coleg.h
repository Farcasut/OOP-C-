#pragma once
#include "Contact.h"
class Coleg :
    public Contact
{
    string serviciu;
    string adresa;
    string nr_telefon;

public:
    Coleg(string Nume, string Serviciu, string Adrea, string Nr_telefon);
    string GetServiciu();
    string GetNrTelefon();
    string GetAdresa();
    string GetTip();
    string Date();
};

