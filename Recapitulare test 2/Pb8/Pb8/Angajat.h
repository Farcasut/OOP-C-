#pragma once
#include  <iostream>
#include  <vector>
using namespace std;
class Angajat
{
	int salariu;
	string nume;
	int id;
public:
	Angajat(string n, int s, int i);
	string GetNume();
	int GetSalariu();
	bool SetSalariu(int salariu);
	virtual void Lucreaza()=0;


};


