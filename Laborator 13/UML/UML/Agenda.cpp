#include "Agenda.h"

Contact* Agenda::Cauta(string nume)
{
   
	for (int i = 0; i < li.size(); i++)
	{
		if (li[i]->GetNume().compare(nume)==0)
		{
			return li[i];
		}
	}
	return nullptr;
}

vector<Contact*> Agenda::GetPrieteni()
{
	vector<Contact*> prieteni;
	for (int i = 0; i < li.size(); i++)
	{
		if (li[i]->GetTip().compare("Prieten") == 0)
		{
			prieteni.push_back(li[i]);
		}
	}
	return prieteni;
}

void Agenda::Sterge(string nume)
{
	for (int i = 0; i < li.size(); i++)
	{
		if (nume.compare(li[i]->GetNume()) == 0)
		{	
			auto elem = li.begin() + i;
			li.erase(elem);
		}
	}
}

void Agenda::Adauga(Contact* c)
{
	li.push_back(c);
}