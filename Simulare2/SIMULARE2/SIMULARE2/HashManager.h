#pragma once
#include <iostream>
#include "CountVowelsHash.h"
#include "CountConsonantHash.h"
#include "CountAsciiHash.h"
#include "easyhash.h"


class HashManager
{
	int count;
	struct  Hashes{
		Hash* hash;
		const char* name;
	};
	
	Hashes _Vector[20];
public:
	HashManager();
	Hash*& operator[](const char*);
	void print(const char* b);
};