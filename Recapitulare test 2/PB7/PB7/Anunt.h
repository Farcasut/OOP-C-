#pragma once
#include "Afisaj.h"
class Anunt :
    public Afisaj
{
    string mesaj;

public:
    Anunt(string s)
    {
        mesaj = s;
    }

    void Display() override
    {
        cout << "ANUNT:" << "[" << mesaj << "]\n";
       
    }
};

