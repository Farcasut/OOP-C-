#pragma once
#include "Item.h"
class Food :
    public Item
{
    float quantity;
public:
    void setQuantity(float quantity);
    string getInfo();

};

