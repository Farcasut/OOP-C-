#pragma once
#include "iostream"
#include  <vector>

using namespace std;
class Afisaj
{
	vector<Afisaj*> childs;

	public:
		void operator=(Afisaj* p)
		{
			childs.push_back(p);
		}
		virtual void Display()
		{
			for(auto x : childs)
			{
				x->Display();
			}
		}
		void Add(Afisaj*p)
		{
			childs.push_back(p);
		}
};

