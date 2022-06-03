#include <iostream>
#include "Vector_Template.h"
#include <stdlib.h>    
double operator"" _Kelvin(unsigned long long int C)
{
	return C + 273.15;
}

double operator"" _Fahrenheit(unsigned long long int C)
{
	return (C * 1.8 + 32);
}

int compare1(int a, int b) {
	if (a > b)
		return 1;
	return 0;

}
int  isEqual(int a, int b)
{
	if (a == b)
		return 1;
	return 0;
}

int main()
{
	std::cout<<"Temperatura in Kelvin : " << 300_Kelvin <<	std::endl;
	std::cout << "Temperatura in Fahrenheit : " << 120_Fahrenheit << std::endl;

	Vector_ <int> a;
	for (int i =0; i < 10; i++)
		a.push(rand()%100);

	cout << "Prima lista: \n";
	a.display();
	cout << "Lista sortata: \n";
	a.sort(nullptr);
	a.display();
	a.insert(0, 0);
	a.insert(4, 10);
	a.insert(8, 2);
	cout << "Lista dupa inserarea lui 10 si 2: \n";
	a.display();
	cout << "Lista sortata: \n";
	a.sort(compare1);
	a.display();
	a.remove(0);
	a.display();
	a.display();
	cout << "Indexul lui 10 ";
	cout<<a.firstIndexOf(isEqual, 10);
	
};