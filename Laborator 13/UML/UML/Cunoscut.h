#pragma once
#include "Contact.h"
class Cunoscut :
    public Contact
{
    string nr_telefon;
public:
    Cunoscut(string Nume, string nr);
    string GetNrTelefon();
    string GetTip();
    string Date() ;
};

