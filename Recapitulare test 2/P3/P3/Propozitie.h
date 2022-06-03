#pragma once
#include "Text.h"
#include "Cuvant.h"
class Propozitie :
    public Text
{
protected:
    vector<Cuvant> prop;
public:
    Propozitie(string st);
    void Afiseaza() override;
    void AddCuvant(Cuvant cuv);

};

