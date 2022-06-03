#include "Paragraf.h"

void Paragraf::Afiseaza()
{
	for (auto x : par)
	{
		x->Afiseaza();
	}
}

void Paragraf::Add(Text*p)
{
	par.push_back(p);
}
