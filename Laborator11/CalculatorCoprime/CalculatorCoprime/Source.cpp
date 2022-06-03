#include <iostream>

using namespace std;

void CoPrime(int m, int range)
{
    int count = 0;
    int m2 = m;
    for (int n2=1; n2 <= range; n2++)
    {
        m = m2;
        int n = n2;
        while (n != m)
            if (n > m)
                n -= m;
            else
                m -= n;
        if (n == 1)
        {
            std::cout << n2 << " ";
            count++;
        }
    }
    std::cout <<"\n"<< count;
}


int main()
{

    CoPrime(25, 25);

	return 0;
}