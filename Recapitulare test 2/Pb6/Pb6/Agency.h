#pragma once
#include "HouseAdvertisment.h"
#include "ApartamentAdvertisment.h"
class Agency
{
	const char* name;
	vector<Advertisment *>p;
public:
	Agency(const char* p)
	{
		name = p;
	}
	void AddAdvertisment(Advertisment *k)
	{
		p.push_back(k);
	}
	void PrintOffers(int minSurface, int MaxPrice)
	{
		vector<Advertisment*> temp;
		for(auto x : p )
		{
			if(minSurface<=x->GetSurface() && x->GetPrice()<=MaxPrice)
			{
				temp.push_back(x);
			}
		}
		if(temp.size()==0)
		{
			cout << "Agency " << name << " could not find any offer for the critera:\n-minsurface=" << minSurface << "\n-max price=\n"<<MaxPrice;
		}
		else
		{
			cout << "Agency " << name << "found the following offers: \n";
			for (auto x : temp)
				x->PrintInfo();
		}
	}
};

