// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{

	srand(NULL);
	for(int i=0; i<3; i++)
	{	
		string cod;
		for(int i=0; i<rand()%4+1; i++)
		{
			if (rand()%2)
				cod.push_back('0');
			else
				cod.push_back('1');
		}
		cout << cod<<endl;
	}


}

