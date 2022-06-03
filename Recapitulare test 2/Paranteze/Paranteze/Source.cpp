#include <iostream>

using namespace std;
int paranth(int d, int s)
{
	if (d > s)
		return 0;
	if(d==0 && s==0)
	{
	return 1;
	}

	if(s==0)
	{
		return paranth(d - 1, 0);
	}
	if(d==0)
	{
		return paranth(0, s-1);
	}

	return paranth(d - 1, s) + paranth(d, s - 1);
}
int dinamic(int n)
{
	n = n / 2;
	int* d = new int[n+1 ];

	
	d[0] = 1;
	d[1] = 1;
	for(int i=2; i<=n;i++)
	{
		d[i] = 0;
		int k = i-1;
		int j = 0;
		while(k>=0)
		{
			d[i] += d[k] * d[j];
			k--;
			j++;
		}
	}
	return d[n];
}

int main()
{
	for (int i = 1; i < 10; i++)
	{
		if (i % 2 == 0) {
			cout << "Pentru n=" << i << endl;
			cout << paranth(i/2, i/2) << endl;
			//cout << dinamic(i)<<endl;
		}

	}

}