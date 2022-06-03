#include "ApartamentAdvertisment.h"

ApartamentAdvertisment::ApartamentAdvertisment(int s, int p, int level): Advertisment(s, p)
{
	this->atLevel = level;
}

void ApartamentAdvertisment::SetLevel(int lvl)
{
	atLevel = lvl;
}

void ApartamentAdvertisment::PrintInfo()
{
	cout << "Apartament at " << atLevel << "-th level, with a surface of " << this->GetSurface() << " square meters that costs " << this->GetPrice() << " dollars.\n";
}
