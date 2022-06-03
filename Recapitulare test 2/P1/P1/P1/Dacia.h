#pragma once
#include "Masina.h"
class Dacia :
    public Masina
{
    string color;
public:
    Dacia(string a);
    string GetColor() override;
    string GetName() override;
    
};

