#include <iostream>
#include "Circuit.h"
#include "Weather.h"
using namespace std;



int main()
{
	Circuit c;
	c.SetWeather(Weather::Rain);
	Car* car = new Dacia();
	c.AddCar(new Dacia());
	c.AddCar(new Mercedes(40,3,40));
	c.AddCar(new Mercedes());
	c.AddCar(new Mercedes());
	c.AddCar(new Mercedes());
	c.AddCar(new Mercedes());
	c.AddCar(new Mercedes());
	c.AddCar(new Mercedes());
	
	c.Race();
	c.display();
	system("pause>0");
}