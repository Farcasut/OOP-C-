#include <iostream>
#include "string_numbers.h"
  
int main()
{
	Number d("123", 10);
	Number c("2", 10);
	d.SwitchBase(16);
	d +=c;
	d.SwitchBase(10);
	d.Print();
	int *v=new int[100000000];
	int *v1=new int[100000000];
	return 0;
}