#include <iostream>
#include "Map.h"

using namespace std;
int main()
{
    Map<int, const char*> m;

    m[10] = "C++";
    m[20] = "test";
    m[30] = "Poo";
    Map<int, const char*> m1;
    m1[50] = "DADADAD";
    m1[10] = "JAVA";

    for (auto [key, value, index] : m)

    {

        printf("Index:%d, Key=%d, Value=%s\n", index, key, value);

    }
    m.add(m1);
    m.Print();
}