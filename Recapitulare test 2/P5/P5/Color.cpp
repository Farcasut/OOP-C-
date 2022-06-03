
#include "Color.h"

bool Color::HasColor(string s)
{
    if(this->GetColor().compare(s)==0)
    {
        return true;
    }
    return  false;
}

string Color::GetColor()
{
    return culoare;
}
