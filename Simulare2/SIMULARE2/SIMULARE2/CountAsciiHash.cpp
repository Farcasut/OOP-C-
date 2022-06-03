#include "CountAsciiHash.h"

int CountAsciiHash::calculate_hash(const char* b)
{
	int sum = 0;
	for (int i = 0; b[i] != '\0'; i++)
	{
		sum = sum + b[i];
	}
	return sum;
}
