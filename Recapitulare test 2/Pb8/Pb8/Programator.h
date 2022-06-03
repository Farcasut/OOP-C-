#pragma once
#include "Angajat.h"
class Programator :
    public Angajat
{
     string cod;
public:
    void Lucreaza() override;
    void Add(string cod);
    Programator(string n, int s, int i);
    string GetCode();
};

