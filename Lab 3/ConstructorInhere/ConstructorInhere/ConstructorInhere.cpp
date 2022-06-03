
#include <iostream>
using namespace std;


class Base
{
public:
    Base()
    {
        cout << "Non-param base\n";
    }
    Base(int x) {
        cout << "Param of base\n";
    }
};
class Derive : public Base {
public:

    Derive()
    {
        cout << "Non-param Derive\n";
    }
    Derive(int x) {
        cout << "Param of Derive\n";
    }
    Derive(int x, int a) : Base(a) {
        cout << "2param";
    }

};



int main()
{
    Derive a;
    
    
}

