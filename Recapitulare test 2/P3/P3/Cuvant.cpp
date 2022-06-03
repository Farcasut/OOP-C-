#include "Cuvant.h"

Cuvant::Cuvant(string a)
{
	name = a;
}

void Cuvant::Afiseaza()
{
	cout << name<<" ";
}

void Cuvant::SetCuvant(string c)
{
	name = c;
}
