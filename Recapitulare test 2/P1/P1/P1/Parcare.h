#pragma once
#include "Masina.h"
#include "Toyota.h"
#include "Dacia.h"
#include "FerrariRosu.h"
#include <vector>
class Parcare
{
	int current;
	int maximum;
	std::vector<Masina*> par;
public:
	Parcare();
	void Create(int maxCapcity);
	bool Add(Masina*);
	bool RemoveByName(string name);
	int GetCount();
	bool IsFull();
	void ShowAll();
	void ShowByColor(string color);

};

