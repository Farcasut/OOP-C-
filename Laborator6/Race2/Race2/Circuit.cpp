#include "Circuit.h"
#include "Weather.h"

Circuit::Circuit()
{
	length = 100;
	wheather = 0;
	car = 0;
	for (int i = 0; i < 8; i++)
	{
		cars[i] = nullptr;
	}
}
void Circuit::SetWeather(int a)
{

	switch (a)
	{
	case 0:
		wheather = 0;
		break;
	case 1:
		wheather = 1;
		break;
	case 2:
		wheather = 2;
		break;
	case 3:
		wheather = 3;
		break;

	default:
		break;
	}

}

void Circuit::AddCar(Car* d)
{
	if (car < 8)
	{
		cars[car] = d;
		car++;
	}

}

void Circuit::Race()
{


	double speedmod = 1;
	switch (wheather)
	{
	case 1:
		speedmod = 0.9;
		break;
	case 2:
		speedmod = 0.7;
		break;
	case 3:
		speedmod = 0.6;
		break;
	default:
		break;
	}

	for (int i = 0; i < 8; i++)
	{
		double newspeed = cars[i]->get_speed();
		cars[i]->set_avrage_speed(newspeed * speedmod);
	}
	for (int step = 0; step < 8; ++step) {


		for (int i = 0; i < 7 - step; ++i) {

			
			if (cars[i]->get_speed() < cars[i + 1]->get_speed()) {

				std::swap(cars[i], cars[i + 1]);
			}
		}
	}

}

void Circuit::display()
{
	for (int i = 0; i < 8; i++)
	{
		std::cout << cars[i]->get_name()<<" speed : "<<cars[i]->get_speed() << std::endl;
	}
}
