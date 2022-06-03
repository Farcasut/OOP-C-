#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include <string.h>

class Number

{
private:
	int number;
	int base;
	char* numar;

public:

	
	Number(const char* value, int base); // where base is between 2 and 16
	Number(Number const & n);
	



	// add operators and copy/move constructor

	char digit_to_char(int a);
	void SwitchBase(int newBase);
	void Print();
	int  GetDigitsCount(); // returns the number of digits for the current number
	int  GetBase() const; // returns the current base
	char* GetNumar() const ;
	void SetNumber(const char* a);
	void SetBase(int base);
	friend Number& operator+=(Number& a, Number const& b);
	friend Number operator+(Number const& a, Number const& b);
	friend Number& operator-=(Number& a, Number const& b);
	friend Number operator-(Number const& a, Number const& b);
	friend Number& operator*=(Number& a, Number const& b);
	friend Number operator*(Number const& a, Number const& b);
	friend Number& operator/= (Number & a, Number const& b);
	friend Number operator/(Number const& a, Number const& b);
	char operator[](int a) 
	{
		return this->numar[a];
	}
	friend bool operator<=(Number const&a , Number const & b);
	friend bool operator>=(Number const& a, Number const& b);
	friend bool operator<(Number const& a, Number const& b);
	friend bool operator>(Number const& a, Number const& b);
	friend bool operator==(Number const& a, Number const& b);
	friend void operator--(Number& a);
	Number& operator--(int);
	~Number();
	
};