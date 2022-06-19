#pragma once
#include "Animal.h"
class Cow :
    public Animal
{
public:
    string GetName() override;
    bool IsAFish() override;
    bool IsABird() override;
    bool IsAMammal() override;
};

