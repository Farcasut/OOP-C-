#pragma once
#include "Shapes.h"
class Rectangle :
    public Shape
{   
    string color;
public:
    Rectangle(string c) : Shape("Rectangle") { color = c; };
    string getColor()
    {
        return color;
    }
};

