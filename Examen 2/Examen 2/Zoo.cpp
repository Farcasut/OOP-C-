#include "Zoo.h"

vector<Animal*> Zoo::GetFishes()
{
	vector<Animal*> temp;
    for(auto x : animals)
    {
		
	    if(x->IsAFish())
	    {
			temp.push_back(x);
	    }
    }
	return temp;
}

vector<Animal*> Zoo::GetBirds()
{
	vector<Animal*> temp;
	for (auto x : animals)
	{

		if (x->IsABird())
		{
			temp.push_back(x);
		}
	}
	return temp;
}

vector<Animal*> Zoo::GetMammals()
{
	vector<Animal*> temp;
	for (auto x : animals)
	{

		if (x->IsAMammal())
		{
			temp.push_back(x);
		}
	}
	return temp;
}

vector<Feline*> Zoo::GetFelines()
{
	vector<Feline*> temp;
	for (auto x : animals)
	{

		if (dynamic_cast<Feline*>(x) != nullptr)
			temp.push_back(dynamic_cast<Feline*>(x));


	}
	return temp;
}

int Zoo::GetTotalAnimals()
{
	return animals.size();
}

void Zoo::operator+=(Animal* p)
{
	this->animals.push_back(p);
}

bool Zoo::operator()(string name)
{
	for(auto x : animals)
	{
		if(x->GetName().compare(name)==0)
		{
			return true;
		}
	}
	return false;
}
