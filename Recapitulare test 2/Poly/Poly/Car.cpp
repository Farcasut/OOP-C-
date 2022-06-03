#include "Car.h"

void Car::print_specs()
{
	printf("This method is from the Car class and has to be overwritten");
}

int Car::getSpeed()
{
	return speed;
}

int Car::getFuel()
{
	return fuel;
}

int Car::getWeight()
{
	return weight;
}

void Car::setSpeed(int speed)
{
	this->speed = speed;
}

void Car::setFuel(int f)
{
	this->fuel = f;
}

void Car::setWeight(int w)
{
	this->weight = w;
}

void Car::setLost(bool a)
{
	lost = a;
}

bool Car::getLost()
{
	return lost;
}

string Car::getName()
{
	return "This method is form the Car class and has to be overwritten";
}

