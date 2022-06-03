#pragma once
struct Grade {
	const char* nume_materie;
	int nota_materie;

};

class Student
{
	const char* Name;
	Grade note[3];
	int countSubj;
	double avg;
public:
	Student();
	int getcount();
	void setName(const char* n);
	int& operator[](const char * materie);
	void printNote();
	void calc_avg();
	const char* GetName();
	operator float();

};