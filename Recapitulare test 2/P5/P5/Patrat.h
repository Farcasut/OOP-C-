#pragma once
#include "Dreptunghi.h"
class Patrat :
    public Dreptunghi
{
public:
    Patrat(string s) : Dreptunghi(s){};
    string GetName() override;
};

