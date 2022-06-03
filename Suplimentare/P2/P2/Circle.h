#pragma once
#include "Shapes.h"


class circle :
    public Shape
{   
    string color;
public:
    circle(string c) : Shape("Circle") {
       color = c;
    };
    string getColor()
    {
        return color;
    }
};

