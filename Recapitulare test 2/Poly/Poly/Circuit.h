#include "Car.h"


class Circuit
{
	int length;
	int weather;
	int count;
	Car* array[8];
	

public:
	Circuit();
	void SetLength(int length);
	void SetWeather(int w);
	void AddCar(Car* car);
	void Race();
	void ShowFinalRanks();
};