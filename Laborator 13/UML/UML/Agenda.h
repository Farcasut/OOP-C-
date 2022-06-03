#pragma once
#include <vector>
#include "Contact.h"
#include "Coleg.h"
#include"Cunoscut.h"
#include "Prieten.h"

class Agenda
{
	vector<Contact*> li;
public:
	Contact* Cauta(string nume);
	vector<Contact*> GetPrieteni();
	void Sterge(string nume);
	void Adauga(Contact* c);
	void print()
	{
		for (int i = 0; i < li.size(); i++)
		{
			cout << li[i]->GetNume() << " ";
		}
	}


};

