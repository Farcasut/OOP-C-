#pragma once
#include "Angajat.h"
class Manager :
    public Angajat
{
    vector<Angajat*> echipa;
    string NumeEchipa;
public:
    void Lucreaza() override
    {
        cout << "===========\n" << NumeEchipa << "\n===========\n";
	    for(auto x: echipa)
        {
            cout << "[" << x->GetNume() << "]\n";
            x->Lucreaza();
            cout << endl;
	    }
    }
    bool Angajeaza(Angajat* p)
    {
        echipa.push_back(p);
        return true;
    }
    bool Concediaza(Angajat* p)
    {
        int i = 0;
	    for(auto x : echipa)
        {   
            if (x == p)
            {
                echipa.erase(echipa.begin() + i);
                return true;
            }
            i++;
        }
        return false;
    }
    Angajat* GetAngajat(int id);
    Manager(string numeE, string nume, int salariu, int id) :Angajat(nume, salariu, id)
    {
        NumeEchipa = numeE;
    }


public:
};

