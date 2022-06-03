
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{

   
    int m[4][4] = {
         {3,0,0,0},{7,4,0,0},{2,4,6,0},{8,5,9,3} };
    int initial = m[0][0];
    for (int i = 2; i >= 0; i--)
    {
        for (int j = 0; j < i+2-1; j++)
        {
            
            m[i][j]+=  max(m[i + 1][j], m[i + 1][j+1]);

        }
    }
    cout << "Maxim "<< m[0][0];
}

