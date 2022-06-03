#pragma once
#include <iostream>


using namespace std;
template <class My_Vector>
class Vector_
{
	int size = 50;
	int fill =0;
	My_Vector* p = new My_Vector[size];
	
	
	void resize()
	{
		size = size * 2;
		My_Vector *temp = new My_Vector[size];
		
		for (int i = 0; i < fill; i++)
		{
			temp[i] = p[i];
		}
		delete []p;
		p = temp;
		
	}
public:


	void push(My_Vector value);
	void insert(int index, My_Vector value);
	void sort(int (*compare)(My_Vector a, My_Vector b));
	My_Vector pop()
	{
		return p[fill-1];
	}
	void remove(int index);
	int GetFill() {
		return fill;
	}
	void display();
	My_Vector getElement(int index);
	int count();
	void setElement(int index, My_Vector value) 
	{
		p[index] = value;
	}
	int firstIndexOf(int(*isEqual)(My_Vector a, My_Vector b), My_Vector parameter);
};


template <typename My_Vector>
void Vector_<My_Vector>::push(My_Vector value) {
	if (fill == size)
		resize();

	p[fill] = value;
	fill++;


}
template <typename My_Vector>
void Vector_<My_Vector>::insert(int index, My_Vector value)
{
	if (fill == size)
		resize();
	for (int i = fill - 1; i >= index; i--)
		p[i + 1] = p[i];
	p[index] = value;
	fill++;
}

template<class My_Vector>
void Vector_<My_Vector>::sort(int(*compare)(My_Vector a, My_Vector b))
{
	if (compare == nullptr)
	{
			
		for (int i = 0; i < fill; i++)
			for (int j = 0; j < fill - 1; j++)
			{
				if ((p[j]> p[j + 1]))
				{
					int temp = p[j + 1];
					p[j + 1] = p[j];
					p[j] = temp;
				}
			}
	
	}
	else
	{
		for(int i=0; i<fill; i++)
			for (int j = 0; j < fill - 1; j++)
			{
				if (compare(p[j], p[j+1]))
				{
					int temp = p[j+1];
					p[j+1] = p[j];
					p[j] = temp;
				}
			}
	}

}

template<class My_Vector>
 void Vector_<My_Vector>::remove(int index)
{
	{
		for (int i = index; i < fill; i++)
		{
			p[i] = p[i + 1];
		}
		fill--;

	}
}

template<class My_Vector>
 void Vector_<My_Vector>::display()
{
	{
		for (int i = 0; i < fill; i++)
			std::cout << p[i] << " "; 

		std::cout <<"      current elements and size    " << fill << " " << size<<endl;
	}
}

template<class My_Vector>
My_Vector Vector_<My_Vector>::getElement(int index)
{
	return p[index];
}

template<class My_Vector>
 int Vector_<My_Vector>::count()
{
	return 0;
}

 template<class My_Vector>
 inline int Vector_<My_Vector>::firstIndexOf(int (*isEqual)(My_Vector a, My_Vector b), My_Vector parameter)
 {
	 int index = -1;
	 if (isEqual == nullptr)
	 {
		 for (int i = 0; i < fill; i++)
		 {
			 if (p[i] == parameter)
			 {
				 index = i;
				 break;
			 }
		 }
	 }
	 else{
	 for (int i = 0; i < fill; i++)
		 if (isEqual(p[i], parameter))
		 {
			 index = i;
			 break;

		 }
	 }
	 return index;
 }
