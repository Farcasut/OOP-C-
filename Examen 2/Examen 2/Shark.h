#pragma once
#include "Animal.h"
class Shark :
    public Animal
{
public:
    string GetName() override;
    bool IsABird() override;
    bool IsAFish() override;
    bool IsAMammal() override;
};

