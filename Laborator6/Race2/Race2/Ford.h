#pragma once
#include "Car.h"
class Ford : public Car {


public:

	Ford(double speed = 55, double consumption = 1.5, double capacity = 45);
	void set_avrage_speed(double speed) override;
	void set_fuel_consumption(double consumption_perkm) override;
	void set_fuel_capacity(double capacity) override;
	void display();
};