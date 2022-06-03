#include <iostream>

using namespace std;

void copy(int n, int a[], int b[])
{
    ///// 0 1 2 3 4 5 6 7 8 9 10 .. w
    ///// 1 0 0 0 0 0 0 0 0 0  0
    ///// 2 
    for (int i = 0; i < n + 1; i++)
    {
        a[i] = b[i];
    }
}
void  Knapsack1_0(int n, int w, int V[], int W[])
{
    int* a = new int[w + 1];
    int* b = new int[w + 1];

    for (int i = 0; i < w + 1; i++)
        a[i] = 0;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int cap = 0; cap < w + 1; cap++)
        {
            b[cap] = a[cap];
            if (cap != 0 && cap % W[i] == 0)

            {
                k++;
                // cout << k << " " << W[i] << " " << cap<<endl;
            }
            if (cap >= W[i])
            {
                if (b[cap] < max(a[cap - k * W[i]] + k * V[i], a[cap - W[i]] + V[i]))
                    b[cap] = max(a[cap - k * W[i]] + k * V[i], a[cap - W[i]] + V[i]);
            }
        }
        copy(w + 1, a, b);
        for (int i = 0; i < w + 1; i++)
        {
            cout << b[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;
    int w = 12;
    int value[] = { 30,16,16,9 };
    int weight[] = { 6,3,4,2 };
    cout << "Test 1\n";
    Knapsack1_0(n, 12, value, weight);
    n = 5;
    w = 8;
    cout << "\nTest 2\n";
    int value2[] = { 14,12,3,7,6 };
    int weight2[] = { 3,  4,2,1,3 };
    Knapsack1_0(n, 8, value2, weight2);
}

