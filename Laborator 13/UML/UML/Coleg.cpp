#include "Coleg.h"

Coleg::Coleg(string Nume, string Serviciu, string Adrea, string Nr_telefon) : Contact(Nume)
{
    
    serviciu = Serviciu;
    adresa = Adrea;
    nr_telefon = Nr_telefon;
}

string Coleg::GetServiciu()
{
    return serviciu;
}

string Coleg::GetNrTelefon()
{
    return nr_telefon;
}

string Coleg::GetAdresa()
{
    return adresa;
    
}

string Coleg::GetTip()
{
    return "Coleg";
}
string Coleg::Date()
{
    return this->GetNume() + " " + serviciu + " " + adresa + " "+nr_telefon;
}