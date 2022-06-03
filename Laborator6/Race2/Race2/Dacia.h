#pragma once
#include "Car.h"
class Dacia : public Car {


public:

	Dacia(double speed = 40, double consumption = 1.4, double capacity = 50);
	void set_avrage_speed(double speed) override;
	void set_fuel_consumption(double consumption_perkm) override;
	void set_fuel_capacity(double capacity) override;
	void display();
};