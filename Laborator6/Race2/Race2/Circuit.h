#pragma once
#include "Dacia.h"
#include "Ford.h"
#include "Mercedes.h"
#include "Toyota.h"
#include "Mazda.h"
#include <iostream>


class Circuit {
private:
	int length;
	int wheather;
	Car* cars[8];
	int car;
	
	
public:
	Circuit();
	void SetWeather(int a);
	void AddCar(Car *d);

	void Race();
	void ShowFinalRanks();
	void display();
};