#include "Angajat.h"

Angajat::Angajat(string n, int s, int i)
{
	salariu = s;
	nume = n;
	id = i;
}

string Angajat::GetNume()
{
	return nume;
}

int Angajat::GetSalariu()
{
	return salariu;
}

bool Angajat::SetSalariu(int salariu)
{
	this->salariu = salariu;
	return true;
}
