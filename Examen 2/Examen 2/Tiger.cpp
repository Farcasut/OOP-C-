#include "Tiger.h"

string Tiger::GetName()
{
    return "Tiger";
}

bool Tiger::IsABird()
{
    return false;
}

bool Tiger::IsAFish()
{
    return false;
}

bool Tiger::IsAMammal()
{
    return true;
}

int Tiger::GetSpeed()
{
    return 100;
}
