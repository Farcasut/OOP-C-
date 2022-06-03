#pragma once
#include "Car.h"
class Toyota :
    public Car
{
private:
    string car_type;
public:

    Toyota(int speed=160, int fuel=50, int weight=950, string name="Mazda");
    string getName();

    void print_specs();

};

