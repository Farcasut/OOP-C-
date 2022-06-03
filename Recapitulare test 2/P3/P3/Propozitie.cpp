#include "Propozitie.h"#include <sstream>
#include <sstream>

Propozitie::Propozitie(string st)
{
	istringstream iss(st);
	string s;
	while (iss>>s)
	{
		//int i = st.find_first_of(" ");
		//prop.push_back(st.substr(0, i));
		//st.erase(0, i + 1);
		prop.push_back(s);
	}
}

void Propozitie::Afiseaza()
{
	for (auto x : prop)
	{
		x.Afiseaza();
	}
}

void Propozitie::AddCuvant(Cuvant cuv)
{
	prop.push_back(cuv);
}
