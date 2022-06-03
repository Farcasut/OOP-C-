#pragma once

template <typename T1>
class Vector
{
	int max;
	T1* ele;
	int curent;
public:
	Vector()
	{
		ele = new T1[50];
		max = 50;
		curent = 0;
	}
	void push(int elem)
	{
		if (curent < max)
		{
			ele[curent++] = elem;
		}
		else
		{
			T1* temp = new T1[max + 50];
			for (int i = 0; i < max; i++)
				temp[i] = ele[i];
			delete[]ele;
			ele = temp;
		}
	}
	T1 pop()
	{
		curent--;
		return ele[curent];
	}
};