#include "Prieten.h"

Prieten::Prieten(string Nume, string Nastere, string Adresa, string Telefon) : Contact(Nume)
{

    data_nastere = Nastere;
    adresa = Adresa;
    nr_telefon = Telefon;
}

string Prieten::GetAdresa()
{
    return adresa;
}

string Prieten::GetDataNastere()
{
    return data_nastere;
}

string Prieten::GetNrTelefon()
{
    return nr_telefon;
}

string Prieten::GetTip()
{
    return "Prieten";
}

string Prieten::Date()
{
    return this->GetNume() + " " + data_nastere + " " + adresa + " " + nr_telefon;
}
