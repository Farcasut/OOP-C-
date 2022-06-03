#include <iostream>
#include <vector>

using namespace std;

void Continous_knapsack(int n, int total_weight, vector<double> value, vector<double> weight)
{
	////Sort by value/weight
	vector<double> p;

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n - 1; j++)
		{
			if (value[j] / weight[j] < value[j + 1] / weight[j + 1])
			{
				swap(value[j], value[j + 1]);
				swap(weight[j], weight[j + 1]);

			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		if (total_weight >= weight[i])
		{
			p.push_back(1);
			total_weight -= weight[i];
		}
		else
		{
			p.push_back( (total_weight / weight[i])&& total_weight>0);
			total_weight -= weight[i];
		}
	}
	for (auto x : p)
	{
		cout << x << " ";
	}
}

void Discret_knapsack(int n, int total_weight)
{
	int weight[10] = { 1,3,4,5};
	int value[10] = { 0, 7,5,20,7 };
	int v[50][50] = {};
	for (int cap = 0; cap < n; cap++) { v[0][cap] = 0; }

	for (int i = 1; i <= n; i++)
	{
		for (int cap = 0; cap <= total_weight; cap++)
		{
			v[i][cap] = v[i - 1][cap];
			if (cap >= weight[i])
			{
				if (v[i][cap] < v[i-1][cap- weight[i]]+value[i]);
				{
					v[i][cap]= v[i-1][cap - weight[i] + value[i]];
				}
			}

	
		}
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 11; j++)
		{
			cout << v[i][j];
		}
		cout << endl;
	}

}
void LongestIncresingSubsequence(int n, vector<int> main)
{
	int a[100] = { 0 };
	int max = 0;
	int path[100] = { 0 };
	int k = 0;
	for (int j = 1; j < n; j++)
	{
		a[j] = 1;
		for (int i = 0; i < j; i++)
		{
			if (main[i] < main[j] && a[j] < a[i] + 1)
			{
				a[j] = a[i] + 1;
			}
		}
		if (a[j] > max)
		{
			max = a[j];
		}
	}
	printf("%d", max);
}

int main()
{

	//Continous_knapsack(3, 5, { 100,15,20 }, {5,2,3});
	//LongestIncresingSubsequence(9, { 5, 2, 8, 6, 3, 6, 3, 7, 1 });

	Discret_knapsack(4, 10);
	
	return 0;
}