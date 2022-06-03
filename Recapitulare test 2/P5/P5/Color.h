#pragma once
#include "Figura.h"
class Color
{
	string culoare;

public:
	Color(string s) : culoare(s) {  };
	bool HasColor(string s);
	string GetColor();
};

