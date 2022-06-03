#include "CountConsonantHash.h"

#include <string.h>
int CountConsonantHash::calculate_hash(const char* b)
{
	const char* s = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
	int count = 0;
	for (int i = 0; i < strlen(b); i++)
	{
		if (strchr(s, b[i]))
		{
			count ++;
		}
	}
	return count;
}
