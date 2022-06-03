#include "Parcare.h"

Parcare::Parcare()
{
	maximum = 0;
	current = 0;
}

void Parcare::Create(int maxCapcity)
{
	this->maximum = maxCapcity;
}

bool Parcare::Add(Masina*p)
{
	if (current < maximum)
	{
		par.push_back(p);
		current++;
		return true;
	}
	return false;
}

bool Parcare::RemoveByName(string name)
{
	for (int i = 0; i < current; i++)
	{
		if (par[i]->GetName().compare(name) == 0)
		{
			par.erase(par.begin() + i);
			current--;
			return true;
		}
	}
	return false;
}

int Parcare::GetCount()
{
	return current;
}

bool Parcare::IsFull()
{
	if (current == maximum)
	{
		return 1;
	}
	else {
		return false;
	}
}

void Parcare::ShowAll()
{
	for (auto x : par)
	{
		cout << x->GetName() << "(" << x->GetColor() << ")"<<", ";
	}
	cout << endl;
}

void Parcare::ShowByColor(string color)
{
	for (auto x : par)
	{
		if (x->GetColor().compare(color)==0)
		{
			cout << x->GetName() << " ";
		}
	}
}
