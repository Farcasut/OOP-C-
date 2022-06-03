#include <iostream>

#include "student.h"

class Catalog{
	Student studenti[25];
	int count_St;
public:
	Catalog();
	void operator+=(const char* a);
	int GetCount();
	Student& operator[](const char* b);
	Student operator[](int index);
};