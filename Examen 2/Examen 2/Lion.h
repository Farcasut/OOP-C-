#pragma once
#include "Feline.h"
class Lion :
    public Feline
{public:
    bool IsABird() override;
    bool IsAFish() override;
    bool IsAMammal() override;
    string GetName() override;
    int GetSpeed() override;
};

