#include "Mazda.h"
#include <iostream>

Mazda::Mazda(double speed, double consumption, double capacity)
{
	set_avrage_speed(speed);
	set_fuel_consumption(consumption);
	set_fuel_capacity(capacity);
	this->name = "Mazda";
}

void Mazda::set_avrage_speed(double speed)
{
	avrage_speed = speed;
}
void Mazda::set_fuel_consumption(double consumption_perkm)
{
	fuel_consumption = consumption_perkm;
}
void Mazda::set_fuel_capacity(double capacity)
{
	fuel_capacity = capacity;
}

void Mazda::display()
{
	std::cout << this->avrage_speed << " " << this->fuel_capacity << " " << this->fuel_consumption;
}
