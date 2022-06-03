
#include "HouseAdvertisment.h"
HouseAdvertisment::HouseAdvertisment(int s, int p, int l):Advertisment(s, p)
{
	nrFloors = l;
}

void HouseAdvertisment::SetNrFloors(int nr)
{
	nrFloors = nr;
}

void HouseAdvertisment::PrintInfo()
{
	cout << "House with " << this->nrFloors << " floors, with a surface of" << this->GetSurface() << " square meters that costs " << this->GetPrice() << " dollars.\n";
}
