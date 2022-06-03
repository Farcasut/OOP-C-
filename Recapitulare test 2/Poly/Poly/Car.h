#pragma once
#include <iostream>
using namespace std;
class Car
{
protected:
	int speed;
	int fuel;
	int weight;
	string car_type;
	bool lost = 0;
public:
	virtual void print_specs();
	 int getSpeed();
	 int getFuel();
	 int getWeight();
	 void setSpeed(int );
	 void setFuel(int);
	 void setWeight(int);
	 void setLost(bool);
	 bool getLost();
	virtual string getName();
};