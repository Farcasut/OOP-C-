#include "Programator.h"

void Programator::Lucreaza()
{
    cout << cod << "\n";
}

void Programator::Add(string cod)
{
    this->cod = cod;
}

Programator::Programator(string n, int s, int i) : Angajat(n,s,i)
{
}

string Programator::GetCode()
{
    return cod;
}
