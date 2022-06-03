
#include <iostream>
using namespace std;

int f(int x, int y)
{
    if (y == 0) throw x;
    return x % y;
}
int main()
{
    try {

        std::cout << f(5, 0);

        }
    catch (char const* msg)
    {
        cout << msg;

    }
}

