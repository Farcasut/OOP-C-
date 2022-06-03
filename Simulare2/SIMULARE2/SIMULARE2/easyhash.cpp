#include "easyhash.h"

#include<string.h>
#include <iostream>

int EasyHash::calculate_hash(const char* b) 
{
	int sum = 0;
	const char* vocale = "aeiouAEIOU";
	for (int i = 0; b[i] != 0; i++)
	{
		if (strchr(vocale, b[i]))
			sum = sum + (int)b[i] * 10;
		if ((b[i] >= 'a' && b[i] <= 'z') || (b[i] >= 'A' && b[i] <= 'Z'))
			sum = sum + (int)b[i] * 11;
		else
			sum = sum + (int)b[i] * 12;
	}
	return sum;
}
