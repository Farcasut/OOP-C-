#include <iostream>
#include "template.h"
int main()
{
	Vector<int> v;
	 v.push(10);
	 v.push(12);
	 v.push(13);
	 v.insert(1, 100);
	 v.sort(nullptr);
	 v.display();
	
	//printf("\n\n\n");
	Vector<int> v2(10);
	v2.display();
	Vector<int> v3(v);
	v3.display();

	return 0;
}