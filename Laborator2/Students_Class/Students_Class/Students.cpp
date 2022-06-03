#include <iostream>
#include "Students.h"

Students::Students(std::string name, int math , int english , int history)
{
	this->Name = name;
	this->Math = math;
	this->English = english;
	this->History = history;
}
void Students::Set_Math(int nota)
{
	if (1 <= nota && nota <= 10)
	{
		this->Math = nota;
	}
	else
	{
		this->Math = 1;
	}
}
void Students::Set_English(int nota)
{

	if (1 <= nota && nota <= 10)
	{
		this->English = nota;
	}
	else
	{
		this->English = 1;
	}
}
void Students::Set_History(int nota)
{

	if (1 <= nota && nota <= 10)
	{
		this->History = nota;
	}
	else
	{
		this->History = 1;
	}
}
void Students::Set_Name(std::string name)
{

	this->Name = name;
}
int Students::Get_Math() { return Math; };
std::string Students::Get_Name()
{
	return this->Name;
}
int Students::Get_English()
{
	return this->English;
}
int Students::Get_History()
{
	return this->History;
}
double Students::Get_Avrage()
{
	return (Math + English + History) / 3.0;
}