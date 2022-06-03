#pragma once

#include "Advertisment.h"

class HouseAdvertisment : public Advertisment
{
	int nrFloors;

public:
	HouseAdvertisment(int s, int p, int l);
	void SetNrFloors(int nr);
	void PrintInfo() override;
};