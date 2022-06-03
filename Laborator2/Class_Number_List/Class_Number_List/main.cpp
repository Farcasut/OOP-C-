#include <iostream>
#include "NumberList.h"
using namespace std;
int main()
{
	NumberList a,b;
	int v[] = { 1,2,3,4,5,6,7,8,9 };

	a.InserList(0, v, sizeof(v) / sizeof(v[0]));
	int v2[] = { 1,1,1,1,1,1,1,1,1 };
	b.InserList(0, v2, sizeof(v2) / sizeof(v2[0]));
	a.Print();
	b.Print();
	NumberList c = a + b;
	c.Print();
	cout << c;
	NumberList d;
	cin >> d;
	cin >> d;
	cout << d;
	return 0;
}