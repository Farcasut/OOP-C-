#pragma once
#include <iostream>
#include <vector>
#include "Zoo.h"
#include "Shark.h"
#include "Eagle.h"
#include "Lion.h"
#include "Tiger.h"
#include "Cow.h"

class Zoo
{
	vector<Animal*> animals;
public:
	vector<Animal*> GetFishes();
	vector<Animal*> GetBirds();
	vector<Animal*> GetMammals();
	vector<Feline*> GetFelines();
	int GetTotalAnimals();
	void operator+=(Animal*);
	bool operator()(string name);
	
	
};

