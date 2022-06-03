#pragma once
#include <iostream>
#include <vector>
using namespace std;
class Advertisment
{

	int surface;
	int price;

public:
	Advertisment(int surface, int price);
	void SetSurface(int s);
	int GetSurface();
	void SetPrice(int p);
	int GetPrice();
	virtual void PrintInfo() = 0;
};

