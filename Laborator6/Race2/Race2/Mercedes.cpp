#include "Mercedes.h"
#include <iostream>

Mercedes::Mercedes(double speed, double consumption, double capacity)
{
	set_avrage_speed(speed);
	set_fuel_consumption(consumption);
	set_fuel_capacity(capacity);
	this->name = "Mercedes";
}

void Mercedes::set_avrage_speed(double speed)
{
	avrage_speed = speed;
}
void Mercedes::set_fuel_consumption(double consumption_perkm)
{
	fuel_consumption = consumption_perkm;
}
void Mercedes::set_fuel_capacity(double capacity)
{
	fuel_capacity = capacity;
}

void Mercedes::display()
{
	std::cout << this->avrage_speed << " " << this->fuel_capacity << " " << this->fuel_consumption;
}
