#pragma once
#include "Item.h"
class Miscellaneous : public Item
{
	int count;
public:
	string getInfo();
	void setCount(int count);
};

