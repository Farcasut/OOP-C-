#pragma once
#include "Feline.h"
class Tiger :
    public Feline
{
public:
    string GetName() override;
    bool IsABird() override;
    bool IsAFish() override;
    bool IsAMammal() override;
    int GetSpeed() override;
};

