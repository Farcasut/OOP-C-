#pragma once
#include "Car.h"
class Mercedes : public Car {


public:

	Mercedes(double speed = 55, double consumption = 1.2, double capacity = 40);
	void set_avrage_speed(double speed) override;
	void set_fuel_consumption(double consumption_perkm) override;
	void set_fuel_capacity(double capacity) override;
	void display();
};