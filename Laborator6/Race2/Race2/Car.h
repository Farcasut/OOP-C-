#pragma once
#include <iostream>
class Car
{
protected:
	double fuel_capacity;
	double fuel_consumption;
	double avrage_speed;
	std::string name;
public:

	double get_fuel();
	double get_speed();
	std::string get_name();
	double get_avrage();
	virtual void set_fuel_capacity(double capcity) = 0;
	virtual void set_fuel_consumption(double consumption_per_km) = 0;
	virtual void set_avrage_speed(double speed) = 0;
	virtual void display() = 0;
};