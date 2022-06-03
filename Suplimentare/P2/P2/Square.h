#pragma once
#include "Shapes.h"
class Square :
    public Shape
{
    string color;
public:
    Square(string c) : Shape("Square") { color = c; };
    string getColor()
    {
        return color;
    }
};

