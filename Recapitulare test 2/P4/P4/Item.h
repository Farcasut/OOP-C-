#pragma once
#include <iostream>
#include <string>
#include <vector>


using namespace std;
class Item
{
	string name;
public:

	string getName()
	{
		return name;
	};
	virtual string getInfo()=0;
	void setName(string name)
	{
		this->name = name;
	}

};