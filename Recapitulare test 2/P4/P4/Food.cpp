#include "Food.h"

void Food::setQuantity(float quantity)
{
    this->quantity = quantity;
}

string Food::getInfo()
{
    string str_s;
    return this->getName() +  to_string(quantity)+" kg";
}
