#include "Cunoscut.h"

Cunoscut::Cunoscut(string Nume, string nr) :Contact(Nume)
{
	
	nr_telefon = nr;
}

string Cunoscut::GetNrTelefon()
{
	return nr_telefon;
}

string Cunoscut::GetTip()
{
	return "Cunoscut";
}

string Cunoscut::Date()
{
	return this->GetNume() + " " + nr_telefon;
}
