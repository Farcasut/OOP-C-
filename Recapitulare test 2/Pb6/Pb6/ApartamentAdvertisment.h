#pragma once
#include  "Advertisment.h"
class ApartamentAdvertisment : public Advertisment
{
	int atLevel;
public:
	ApartamentAdvertisment(int s, int p, int level);
	
	void SetLevel(int lvl);
	void PrintInfo() override;
};

