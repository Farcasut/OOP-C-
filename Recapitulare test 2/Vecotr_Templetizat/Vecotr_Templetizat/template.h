#pragma once

#include<iostream>

using namespace std;
template <typename T>
class Vector
{
	T* vec;
	int count;
	int total;
public:
	Vector();
	Vector(int size);
	Vector(Vector& v);
	void display();
	int getCount();
	int getTotal();
	void push(T);
	void remove(int index);
	void insert(int index, T value);
	void sort(bool (*func)(T t1, T t2));
	T pop()
	{
		int  value = vec[count--];
		return value;
	}
	
	int& operator[](int );
};

template<typename T>
inline Vector<T>::Vector()
{
	count = 0;
	total = 20;
	vec = new T[20];
}

template<typename T>
inline Vector<T>::Vector(int size)
{
	count = 0;
	total = size;
	vec = new int[size];

}

template<typename T>
inline Vector<T>::Vector(Vector& v)
{
	count = v.getCount();
	total = v.getTotal()+10;

	this->vec = new int[v.getCount()+10];
	for (int i = 0; i < v.getCount(); i++)
	{
		vec[i] = v[i];
	}
}

template<typename T>
inline void Vector<T>::display()
{
	for (int i = 0; i < this->getCount(); i++)
	{
		cout << vec[i] << " ";
	}
	cout << "\n";
}

template<typename T>
inline int Vector<T>::getCount()
{
	
	return this->count;
}

template<typename T>
inline int Vector<T>::getTotal()
{
	return this->total;
}

template<typename T>
inline void Vector<T>::push(T a)
{
	vec[count] = a;
	count++;
}

template<typename T>
inline void Vector<T>::remove(int index)
{
	for (int i = index; i < this->getCount() - 1; i++)
	{
		vec[i] = vec[i + 1];
	}
	this->count--;
}

template<typename T>
inline void Vector<T>::insert(int index, T value)
{
	for (int i = this->getCount(); i > index; i--)
	{
		vec[i] = vec[i - 1];
	}
	vec[index] = value;
	this->count++;
}

template<typename T>
inline void Vector<T>::sort(bool(*func)(T t1, T t2))
{
	if (func == nullptr)
	{
		for (int i = 0; i < getCount(); i++)
		{
			for (int j = 0; j < getCount() - 1; j++)
			{
				if (vec[j] > vec[j + 1])
					swap(vec[j], vec[j + 1]);
			}
		}
	}
	else
	{
		for (int i = 0; i < getCount(); i++)
		{
			for (int j = 0; j < getCount() - 1; j++)
			{
				if (func(vec[j], vec[j+1]))
					swap(vec[j], vec[j + 1]);
			}
		}
	}
}

template<typename T>
inline int& Vector<T>::operator[](int index)
{
	return vec[index];
}
