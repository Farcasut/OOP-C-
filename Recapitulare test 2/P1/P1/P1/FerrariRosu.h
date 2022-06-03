#pragma once
#include "Masina.h"
class FerrariRosu :
    public Masina
{
    string color;
public:
    FerrariRosu(string a);
    FerrariRosu();
    string GetColor() override;
    string GetName() override;

};

