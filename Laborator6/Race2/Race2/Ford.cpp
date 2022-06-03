#include "Ford.h"
#include <iostream>

Ford::Ford(double speed, double consumption, double capacity)
{
	set_avrage_speed(speed);
	set_fuel_consumption(consumption);
	set_fuel_capacity(capacity);
	this->name = "Ford";
}

void Ford::set_avrage_speed(double speed)
{
	avrage_speed = speed;
}
void Ford::set_fuel_consumption(double consumption_perkm)
{
	fuel_consumption = consumption_perkm;
}
void Ford::set_fuel_capacity(double capacity)
{
	fuel_capacity = capacity;
}

void Ford::display()
{
	std::cout << this->avrage_speed << " " << this->fuel_capacity << " " << this->fuel_consumption;
}
