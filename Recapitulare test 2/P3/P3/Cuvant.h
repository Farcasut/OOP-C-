#pragma once
#include "Text.h"
class Cuvant :
    public Text
{
protected:
    string name;
public:
    Cuvant(string a);
    void Afiseaza()override;
    void SetCuvant(string c);

};

