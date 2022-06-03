#include "Dacia.h"

Dacia::Dacia(int speed, int fuel, int weight, string name)
{
	this->car_type = name;
	this->speed = speed;
	this->fuel = fuel;
	this->weight = weight;
}

string Dacia::getName()
{
	return this->car_type;
}
void Dacia::print_specs()
{
	printf("Speed: %d , Weight: %d, Fuel: %d, Name: %s", speed, weight, fuel, car_type);
}