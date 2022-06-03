#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Sort.h"

int main()
{
	Sort a(10, 1, 100);
	a.BubbleSort();
	a.Print();

	Sort b({ 12,2,7,1,413,3 });
	b.InsertSort();
	b.Print();


	int v[] = { 5,3,2,1,0};
	Sort c(v, sizeof(v)/sizeof(v[0]));
	c.InsertSort();
	c.Print();

	Sort d(10,1,2,3,4,5,6,7,8,9,10);
	d.InsertSort();
	d.Print();

	Sort e("10,40,100,5,70");
	e.Print();
	
	return 0;
}