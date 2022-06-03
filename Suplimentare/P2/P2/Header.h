#pragma once
#include <iostream>
#include "Circle.h"
#include "Rectangle.h"
#include "Shapes.h"
#include "Square.h"
#include <vector>

class Repo
{

private: 
	vector<Shape*> v;
public:
	Shape* GetShape(string Shape_Type, string color)
	{
		if (Shape_Type.compare("Circle") == 0)
		{
			return new circle(color);
		}
		if (Shape_Type.compare("Square") == 0)
		{
			return new Square(color);
		}
		if (Shape_Type.compare("Rectangle") == 0)
		{
			return new Rectangle(color);
		}
		
		return NULL;
	}
	void Add(Shape* p)
	{
		v.push_back(p);
	}
	void Remove(string info)
	{
		for (int i=0; i < v.size(); i++)
		{
			if (v[i]->getColor().compare(info) == 0 || v[i]->GetName().compare(info))
			{
				v.erase(v.begin() + i);
			}
		}
	}
	void PrintAll()
	{
		for (auto x : v)
		{
			cout << "Shape : " << x->GetName();
			cout << "\nColor : " << x->getColor()<<endl;
		}
		cout << "----";
	}
};