#pragma once
#include <string>
using namespace std;
class Shape
{
	string name;
public:
	Shape(string n) : name(n){};
	 string GetName() {
		 return name;
	}
	 virtual string getColor() = 0;
	



};