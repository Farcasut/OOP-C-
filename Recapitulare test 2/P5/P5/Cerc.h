#pragma once
#include "Figura.h"
class Cerc :
    public Figura
{
public:
    Cerc(string s) : Figura(s){};
    string GetName() override;
};

