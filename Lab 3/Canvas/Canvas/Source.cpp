#include <iostream>
#include "Canvas.h"
int main() {

	Canvas ecran(20,20);

	
	ecran.DrawCircle(10, 10, 5, '*');
	ecran.Print();

	return 0;
}