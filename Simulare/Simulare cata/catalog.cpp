#include "catalog.h"

Catalog::Catalog()
{
	count_St = 0;
}

void Catalog::operator+=(const char* a)
{
	
	studenti[count_St].setName(a);
	count_St++;
}

int Catalog::GetCount()
{
	return count_St;
}

Student& Catalog::operator[](const char* b)
{
	for (int i = 0; i < count_St; i++)
		if (strcmp(studenti[i].GetName(), b) == 0)
			return studenti[i];
}

Student Catalog::operator[](int index)
{
	return studenti[index];
}

