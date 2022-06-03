#pragma once
#include <iostream>
using namespace std;
class Contact
{
private:
	string nume;
public:
	Contact(string nume)
	{
		this->nume = nume;
	}
	string GetNume() {
		return nume;
	}
  virtual string GetTip() = 0;
  virtual string Date() = 0;
};

