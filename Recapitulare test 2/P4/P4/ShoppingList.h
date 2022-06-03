#pragma once
#include "Food.h"
#include "Miscellaneous.h"
#include "ShoppingList.h"
class ShoppingList
{
	vector<Item*> list;

public:
	void addItem(Item* p)
	{
		list.push_back(p);
	}
	void printList()
	{
		for (auto x : list)
		{
			cout<<x->getInfo()<< " ";
		}
	}
};

