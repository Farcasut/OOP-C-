#define CRT_NO_SECURE_WARNINGS
#include <string.h>
#include <iostream>
#include "student.h"

using namespace std;
Student::Student()
{
	Name = "Elev";
	countSubj = 0;
	avg = 0;
	for (int i = 0; i < 3; i++)
	{
		note[i].nota_materie = -1;
		note[i].nume_materie = "-";
	}
}

int Student::getcount()
{
	return countSubj;
}

void Student::setName(const char* n)
{
	
	Name = n;
}

int& Student::operator[](const char* materie)
{
	bool flag = false;
	for (int i = 0; i < countSubj; i++)
	{
		if (strcmp(note[i].nume_materie, materie) == 0)
		{
			int& x = note[i].nota_materie;
			return x;
		}
	}
	if (!flag)
	{
		note[countSubj].nume_materie = materie;
		int& x = note[countSubj++].nota_materie = 0;
		return x;
	}
}

void Student::printNote()
{
	for (int i = 0; i < countSubj; i++)
	{
		cout << note[i].nume_materie << " " << note[i].nota_materie<<"\n";
	}
}

void Student::calc_avg()
{
	double sum=0;
	for (int i = 0; i < countSubj; i++)
	{
		sum = sum + note[i].nota_materie;
	}
	sum = sum / countSubj;
	avg = sum;

}

const char* Student::GetName()
{
	return Name;
}

Student::operator float()
{
	calc_avg();
	return (float)avg;
}
