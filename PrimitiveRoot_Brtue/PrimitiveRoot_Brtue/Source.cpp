#include  <iostream>
using namespace std;

int main()
{
	while (1)
	{
		int mod = 0;
		int a = 0;
		cin >> mod;
		cin >> a;
		system("CLS");
		for(int i=1 ; i<mod; i++)
		{
			int temp = pow(a, i);
			cout <<i<<":"<< temp % mod << endl;
		}
	}

	return 0;
}