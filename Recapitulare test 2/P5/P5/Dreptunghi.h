#pragma once
#include "Figura.h"
class Dreptunghi :
    public Figura
{
public:
    Dreptunghi(string s) : Figura(s){};
    string GetName() override;
};

