#pragma once
#include "hash.h"

class CountConsonantHash : public Hash
{
public:
	int calculate_hash(const char* b) override;

};