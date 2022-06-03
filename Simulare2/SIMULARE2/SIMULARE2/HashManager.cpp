#include "HashManager.h"

HashManager::HashManager()
{
	count = 0;
}

Hash*& HashManager::operator[](const char*c)
{
	_Vector[count].name = c;
	Hash*& a = _Vector[count].hash;
	count++;
	return a;
}

void HashManager::print(const char* b)
{
	for (int i = 0; i < count; i++)
	{
		std::cout << _Vector[i].name << " " << _Vector[i].hash->calculate_hash(b) << std::endl;
	}
}
