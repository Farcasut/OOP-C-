#include "Miscellaneous.h"

string Miscellaneous::getInfo()
{   
    
    return this->getName()+to_string(count)+ " items";
}

void Miscellaneous::setCount(int count)
{
    this->count = count;
}
