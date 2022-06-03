#pragma once
#include "Text.h"
#include "Cuvant.h"
#include "Propozitie.h"
class Paragraf :
    public Text
{
protected:
    vector<Text*> par;
public:
    void Afiseaza() override;
    void Add(Text*);
};

