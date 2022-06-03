#pragma once
#include "Car.h"
class Dacia :
    public Car
{
private:
	string car_type;
public:
	Dacia(int speed=120, int fuel=40, int weight=1000, string name="Logan");
	string getName();
	void print_specs();
};

