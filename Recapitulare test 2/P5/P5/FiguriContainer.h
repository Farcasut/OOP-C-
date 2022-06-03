#pragma once
#include "Color.h"
#include "Dreptunghi.h"
#include "Patrat.h"
#include  "Cerc.h"
class FiguriContainer :
    public Color
{
    vector<Figura*> fig;

public:
    FiguriContainer() : Color((""))
    {
	    
    }
    void Add(Figura *p)
    {
        fig.push_back(p);
    }
    void ShowAll()
    {
	    for(auto x : fig)
	    {
            cout << x->GetName() << " " << x->GetCuloare() << endl;
	    }
    }
    void ShowByColor(Color * p)
    {
        cout << "*Figuri cu culoarea " << p->GetColor()<<endl;
	    for(auto x : fig)
	    {
		    if(p->HasColor(x->GetCuloare()))
		    {
                cout << x->GetName()<<endl;
		    }
	    }
    }
};

