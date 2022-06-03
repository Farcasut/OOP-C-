#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#include "string_numbers.h"
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <cmath>
Number::Number(const char* value, int base)
{
	if (2 <= base && base <= 16) {
		numar = new char[strlen(value) + 2];
		strcpy(numar, value);
		this->base = base;
		if (base != 10) {
			char b[100];
			itoa(atoi(value), b, 10);
			b[strlen(b) + 1] = '\0';
			this->number =atoi(b) ;
		}
		else {
			this->number = atoi(value);
		}
	}
	else{
		this->~Number();
	}
}

Number::Number(Number const & n)
{	
	this->numar = new char[strlen(n.GetNumar())+2];
	strcpy(numar, n.GetNumar());
	this->base = n.GetBase();
	this->number = n.number;
}



Number& Number::operator--(int)
{

	this->numar[strlen(this->numar)-1] = '\0';
	char b[300];
	strcpy(b, this->numar);
	this->SetNumber(b);
	return *this;
}

Number::~Number()
{
	delete[]this->numar;

}

char Number::digit_to_char(int a)
{
	switch (a)
	{
	case 0: return '0';
	case 1: return '1';
	case 2: return '2';
	case 3: return '3';
	case 4: return '4';
	case 5: return '5';
	case 6: return '6';
	case 7: return '7';
	case 8: return '8';
	case 9: return '9';
	case 10: return 'A';
	case 11: return 'B';
	case 12: return 'C';
	case 13: return 'D';
	case 14: return 'E';
	case 15: return 'F';

	}
}

void Number::SwitchBase(int newBase)
{
	this->base = newBase;
	
	delete[]this->numar;
	this->numar = new char[int(log10(this->number))+2];
	itoa(this->number,numar, newBase);
	
}

void Number::Print()
{
	std::cout <<"Numar "<< this->numar << " Base " << this->base;
	
}

int Number::GetDigitsCount()
{
	return strlen(this->numar);
}

int Number::GetBase() const
{
	return this->base;
}

char* Number::GetNumar() const
{
	return numar;
}

void Number::SetNumber(const char* a)
{
	
	delete []this->numar;
	this->numar = new char[strlen(a) + 2];
	strcpy(this->numar, a);
	this->number = atoi(a);

}

void Number::SetBase(int base)
{
	this->base = base;
}

Number & operator+=(Number& a, Number const& b)
{
	
	int base = 0;
	if (a.base > b.base)
	{
		base = a.base;
	}
	else
	{
		base = b.base;
	}
	int sum = a.number + b.number;	
	int length = strlen(a.numar) + strlen(b.numar);
	delete [] a.numar;
		
		a.numar = new char[length * base];
		itoa(sum, a.numar,base );
		a.base = base;
		a.number = sum;
	
	
	

	

	return a;
}

Number operator+(Number const& a, Number const& b)
{
	Number temp = a;
	temp += b;

	return temp;////move consturctor;
}

Number& operator-=(Number& a, Number const& b)
{
	int base = 0;
	if (a.base > b.base)
	{
		base = a.base;
	}
	else
	{
		base = b.base;
	}
	int sum = a.number - b.number;
	int length = strlen(a.numar) + strlen(b.numar);
	delete[] a.numar;

	a.numar = new char[length * base];
	itoa(sum, a.numar, base);
	a.base = base;
	a.number = sum;

	return a;
	
}

Number operator-(Number const& a, Number const& b)
{
	Number temp = a;
	temp -= b;
	return temp;
}

Number& operator*=(Number& a, Number const& b)
{
	int base = 0;
	if (a.base > b.base)
	{
		base = a.base;
	}
	else
	{
		base = b.base;
	}
	int sum = a.number * b.number;
	int length = strlen(a.numar) + strlen(b.numar);
	delete[] a.numar;

	a.numar = new char[length * base];
	itoa(sum, a.numar, base);
	a.base = base;
	a.number = sum;

	return a;
}

Number operator*(Number const& a, Number const& b)
{ 
	Number temp = a;
	temp *= b;
	return temp;
}

Number& operator/=(Number& a, Number const& b)
{
	int base = 0;
	if (a.base > b.base)
	{
		base = a.base;
	}
	else
	{
		base = b.base;
	}
	int sum = a.number / b.number;
	int length = strlen(a.numar) + strlen(b.numar);
	delete[] a.numar;

	a.numar = new char[length * base];
	itoa(sum, a.numar, base);
	a.base = base;
	a.number = sum;

	return a;
}

Number operator/(Number const& a, Number const& b)
{
	Number temp = a;
	temp /= b;
	return temp;
}

bool operator<=(Number const& a, Number const& b)
{
	if (a.number <= b.number)
		return true;
	return false;
}

bool operator>=(Number const& a, Number const& b)
{
	if (a.number >= b.number)
		return true;
	return false;
}

bool operator<(Number const& a, Number const& b)
{
	if (a.number < b.number)
		return true;
	return false;
}

bool operator>(Number const& a, Number const& b)
{
	if (a.number > b.number)
		return true;
	return false;
}

bool operator==(Number const& a, Number const& b)
{	
	if (a.number == b.number)
		return true;
	return false;
}

void operator--(Number& a)
{
	for (int i = 1; i <= strlen(a.numar); i++)
	{
		a.numar[i - 1] = a.numar[i];
	}
	char b[300];
	strcpy(b, a.numar);
	a.SetNumber(b);
}


