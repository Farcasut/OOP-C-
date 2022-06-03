#pragma once
#include <iostream>
int INDEX = 0;

template <typename Map>
	class MapIterator 
{ 


};


template <typename T1, typename T2>
class Map
{
public:
	struct Map_Struct{
		int index;
		T1 first;
		T2 second;
	}M[100];
	Map()
	{
		for (int i = 0; i < 100; i++)
		{
			M[i].index  = INT_MAX;
		}
	}
		T2& operator[](T1 key)
	{	
		int i = INDEX++;
		M[i].index = i;
		M[i].first = key;
		return M[i].second;
	}
	void display()
	{
		for (int i = 0; i < INDEX; i++)
		{
			std::cout << "Index: " << i << " Key: " << M[i].first << " Value: " << M[i].second << "\n";
		}
	}
	void Set(T1 key, T2 value)
	{
		if (INDEX < 100) {
			M[INDEX].index = INDEX;
			M[INDEX].first = key;
			M[INDEX++].second = value;
		}
	}

	
};
