#include "Math.h"
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int Math::Add(int a, int b)
{
	return a+b;
}

int Math::Add(int a, int b, int c)
{
	return a+b+c;
}

int Math::Add(double a, double b)
{
	return a+b;
}

int Math::Add(double a, double b, double c)
{
	return a+b+c;
}

int Math::Mul(int a, int b)
{
	return a*b;
}

int Math::Mul(int a , int b, int c)
{
	return a*b*c;
}

int Math::Mul(double a, double b)
{
	return a*b;
}

int Math::Mul(double a, double b, double c)
{
	return a * b * c;
}

int Math::Add(int count, ...)
{
	return 0;
}

char* Math::Add(const char *a, const char* b)
{
	char* s = new char[strlen(a) + strlen(b) + 1];
	strcpy(s, a);
	strcat(s, b);
	return s;
}

