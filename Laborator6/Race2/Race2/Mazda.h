#pragma once
#include "Car.h"
class Mazda : public Car {


public:

	Mazda(double speed = 60, double consumption = 1.6, double capacity = 40);
	void set_avrage_speed(double speed) override;
	void set_fuel_consumption(double consumption_perkm) override;
	void set_fuel_capacity(double capacity) override;
	void display();
};