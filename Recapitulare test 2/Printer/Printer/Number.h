#pragma once
#include "Hexazecimal.h"
#include "Decimal.h"

class Number
{
	int number;
	int count;
	Printer* printers[100];
public:
	Number(int value)
	{
		count = 0;
		number = value;
	}
	operator int()
	{
		return number;
	}
	friend Number operator+(Number const& a, Number const& b)

		{
		Number c(0);
		c.number = a.number + b.number;
		return c;
	}
	friend Number operator-(Number const&a, Number const&b)
	{
		Number temp(0);

		temp.number = a.number - b.number;
		return temp;
	}
	friend Number operator*(Number const& a, Number const& b)
	{
		Number temp(0);
		temp.number = a.number * b.number;
		return temp;
	}
	friend Number operator/(Number const& a, Number const& b)
	{
		Number temp(0);
		temp.number = a.number / b.number;
		return temp;
	}
	friend Number& operator+=(Number &a, Printer*p)
	{
		a.printers[a.count] = p;
		a.count++;
		return a;
	}
	void Print()
	{
		for(int i=0; i<count;i++)
		{
			cout << printers[i]->GetFormatName() << ": " << printers[i]->FormatNumber(number)<<endl;
		}
	}
};

