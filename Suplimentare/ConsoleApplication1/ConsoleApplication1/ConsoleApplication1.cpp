// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
char* itoda(int value, char* result, int base) {

	// check that the base if valid

	if (base < 2 || base > 16) { *result = 0; return result; }



	char* out = result;

	int quotient = value;



	do {

		*out = "0123456789abcdef"[std::abs(quotient % base)];

		++out;

		quotient /= base;

	} while (quotient);




	// Only apply negative sign for base 10

	if (value < 0 && base == 10) *out++ = '-';



	std::reverse(result, out);

	*out = 0;

	return result;

}
int main()
{
	int a=10;
	char buffer[10] = itoda(a, buffer, 10);
	std::cout << buffer;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
