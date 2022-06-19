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




void Knapsack1_0(int n, int v[], int w[],int we)
{

/// 0 1 2 3 4 5 6 7 8 9 10
/// 1 0 0 0 0 0 0 0 0 0  0
/// 2 
/// 3
/// 4
/// 
/// 
    //int matrix[5][11];
    int** matrix = new int*[n + 1];
    for (int i = 0; i < n + 1; i++)
    {
        matrix[i] = new int[we + 1];
    }
    
    for (int i = 0; i < 11; i++)
    {
        matrix[0][i] = 0;
    }

    for (int i = 1; i < 5; i++)
    {
        for (int cap = 0; cap < 11; cap++)
        {
            matrix[i][cap] = matrix[i - 1][cap];
           
            if (cap >= w[i - 1])

            { 
            if (matrix[i][cap] < matrix[i - 1][cap - w[i - 1]] + v[i - 1])
            {
                matrix[i][cap] = matrix[i - 1][cap - w[i-1]] + v[i-1];
            }
        }
        }
    }
    printf("\n\n\n\n");
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 11; j++)
        {
            std::cout << matrix[i][j]<<" ";
        }
        std::cout << std::endl;
    }
	vector<int> obj;

	int cap = we;
	for(int i=n; i>0; i--)
	{
		if (matrix[i][cap] != matrix[i - 1][cap])
		{
			cap -= w[i];
			obj.push_back(i);
		}
	}
	cout << "\n\n";
	for (auto x : obj)
		cout << x << " ";
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
	int max2=max;
	for(int i=n; i>=0; i--)
	{
		if(a[i]==max2 && max2 >=1)
		{
			printf("%d ", main[i]);
			max2--;
		}
	}
	printf("\n%d", max);
}


void rodCutting()
{
	int price[] = {0 ,150, 250,350, 350};
	int profit[] = {0 ,150, 250,350, 350};
	int n = 4;
	
	for(int j=1; j<=n; j++)
	{
		for(int i=1; i<=j; i++)
		{
			if(profit[j]<price[i]+profit[j-i])
			{
				profit[j] = price[i] + profit[j - i];
			}
		}
	}

	for(auto x :  profit)
	{
		cout << x << " ";
	}
}
int main()
{

	//Continous_knapsack(3, 5, { 100,15,20 }, {5,2,3});
	//LongestIncresingSubsequence(9, { 5, 2, 8, 6, 3, 6, 3, 8,7, 1 });
	//Discret_knapsack(4, 10);
	//rodCutting();
	int value[] = { 30,16,16,9 };
	int weight[] = { 6,3,4,2 };
	Knapsack1_0(4, value, weight, 12);
	return 0;
}