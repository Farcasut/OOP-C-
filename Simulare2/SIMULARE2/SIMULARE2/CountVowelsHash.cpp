
#include<string.h>
#include <iostream>


#include "CountVowelsHash.h"
int CountVowelsHash::calculate_hash(const char* b)
{

	const char* s = "aeiouAEIOU";
	int count = 0;
	for(int i=0; i<strlen(b);i++)
	{ 
		if ( strchr(s, b[i]) )
		{
			count++;
		}
	}
	return count;
}
