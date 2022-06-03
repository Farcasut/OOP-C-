#include "Toyota.h"
Toyota::Toyota(int speed, int fuel, int weight, string name)
{
	this->speed = speed;
	this->fuel = fuel;
	this->weight = weight;
	this->car_type = name;
}
string Toyota::getName()
{
	return car_type;
}
void Toyota::print_specs()
{
	printf("Speed: %d , Weight: %d, Fuel: %d, Name: %s", speed, weight, fuel, car_type);
}