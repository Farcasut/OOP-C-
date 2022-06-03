#pragma once
#include "Masina.h"
class Toyota :
    public Masina
{
    string color;
public:
    Toyota(string a);
    string GetColor() override;
    string GetName()override;
};

