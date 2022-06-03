#pragma once
#include <string>
#include  <iostream>
using namespace std;
class Printer
{
public:
	virtual string GetFormatName()=0;
	virtual string  FormatNumber(int number)=0;
	
};