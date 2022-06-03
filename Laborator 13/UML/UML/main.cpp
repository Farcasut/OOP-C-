#include <iostream>
#include "Agenda.h"

int main()
{
	Agenda p;
	p.Adauga(new Prieten("Alex", "14.01.2002", "Str. Bucium", "0740991410"));
	p.Adauga(new Coleg("Constantin", "Glovo", "Str. Mioveni", "0740132444"));
	p.Adauga(new Cunoscut("Rares", "0740991410"));
	p.print();
	cout << endl;
	p.Sterge("Rares");
	p.print();
	cout << endl;
	vector<Contact*> prieteni = p.GetPrieteni();
	for (int i = 0; i < prieteni.size(); i++)
	{
		cout << prieteni[i]->Date() << " ";
	}

}