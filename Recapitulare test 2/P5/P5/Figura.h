#pragma once
#include <iostream>
#include  <string>
#include  <vector>
using namespace std;
class Figura
{
	string culoare;
public:
	Figura(string c)
	{
		this->culoare = c;
	}
	string GetCuloare()
	{
		return culoare;
	}
	virtual string GetName() = 0;

};

