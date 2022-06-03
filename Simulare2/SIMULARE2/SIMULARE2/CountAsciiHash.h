#include "hash.h"

class CountAsciiHash : public Hash {
public:
    CountAsciiHash() {};
    int calculate_hash(const char* b) override;
};