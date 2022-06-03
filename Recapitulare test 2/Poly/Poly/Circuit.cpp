#include "Circuit.h"

Circuit::Circuit()
{
	this->length = 200;
	this->weather = 0;
	this->count = 0;
	for (int i = 0; i < 8; i++)
	{
		this->array[i] = nullptr;
	}
}

void Circuit::SetLength(int length)
{
	this->length = length;
}

void Circuit::SetWeather(int w)
{
	this->weather = w;
}

void Circuit::AddCar(Car* car)
{
	if (count < 8)
	{
		this->array[count++] = car;

	}
	else
	{
		printf("The circuit is full");
	}

}

void Circuit::Race()
{
	double speed_mult=1;
	switch (weather)
	{
	case 0: speed_mult = 1;   break;
	case 1: speed_mult = 0.8; break;
	case 2: speed_mult = 0.5; break;
	default:
		break;
	}
	for (int i = 0; i < count; i++)
	{
		array[i]->setSpeed(array[i]->getSpeed() * speed_mult);
	}

}

void Circuit::ShowFinalRanks()
{
	for (int i = 0; i <this->count; i++)
	{
		for (int j = 0; j < this->count-1; j++)
		{
			if (this->array[j]->getSpeed() < this->array[j + 1]->getSpeed())
			{
				swap(this->array[j], this->array[j + 1]);
			}

		}
	}
	for (int i = 0; i < count; i++)
	{
		cout << this->array[i]->getName()<<endl;
	}
}
