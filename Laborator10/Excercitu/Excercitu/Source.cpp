#include <iostream>
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class MyVector {
public:
    int v[100] = { 0 };
    int capacitate = 0;
    bool Add(int); // return true if the value was added. As a result, the size of the vector increases with one.
    bool Delete(int index); // returns true if the value from the index was removed. As a result, the size of the vector decreases with one.
    void Print()
    {
        for (int i = 0; i < capacitate; i++)
            cout << v[i]<<" ";
    }
    void Iterate(void (*func)(int& element));
    void Filter(bool (*func)(int element));
};

bool MyVector::Add(int a)
{
    if (this->capacitate < 100)
    {
        v[capacitate++] = a;
        return 1;
    }
    return 0;
}
bool MyVector::Delete(int index)
{
    if (index < capacitate)
    {
        for (int i = index; i < capacitate-1; i++)
        {
            v[i] = v[i + 1];
            
        }
        capacitate--;
        return 1;
    }
    return 0;
}
void MyVector::Iterate(void (*func)(int& element))
{
    for (int i = 0; i < capacitate; i++)
    {
        func(v[i]);
    }
}
void MyVector::Filter(bool(*func)(int element))
{
    for (int i = 0; i < capacitate; i++)
    {
        if (func(v[i]))
        {
            this->Delete(i);
        }
    }
}

int main()
{
    MyVector a;
    a.Add(1);
    a.Add(2);
    a.Add(3);
    a.Add(4);
   // a.Delete(1);
   // auto f = [](int &a) { a*=3; };
   // a.Iterate(f);

    //auto f2 = [](int& a) { a += 10;  };
   // a.Iterate(f2);
  
    auto filter = [](int a) { if (a % 2 == 1) return true;
    return false;
    };
    a.Filter(filter);
    a.Print();


}