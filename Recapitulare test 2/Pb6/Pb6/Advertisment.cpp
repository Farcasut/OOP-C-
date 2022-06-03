#include "Advertisment.h"

Advertisment::Advertisment(int surface, int price)
{
	this->surface = surface;
	this->price = price;
}

void Advertisment::SetSurface(int s)
{
	this->surface = s;
}

int Advertisment::GetSurface()
{
	return this->surface;
}

void Advertisment::SetPrice(int p)
{
	this->price = p;
}

int Advertisment::GetPrice()
{
	return this->price;
}
