#include "FerrariRosu.h"

FerrariRosu::FerrariRosu(string a) :  color(a)
{
}

FerrariRosu::FerrariRosu() : color("rosu")
{
}

string FerrariRosu::GetColor()
{
    return color;
}

string FerrariRosu::GetName()
{
    return "Ferrari";
}
