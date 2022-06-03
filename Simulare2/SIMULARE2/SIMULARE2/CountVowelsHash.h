#pragma once
#include "hash.h"

class CountVowelsHash: public Hash
{
public:
	int calculate_hash(const char* b) override;

};