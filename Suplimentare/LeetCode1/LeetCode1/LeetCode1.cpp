
#include <iostream>
#include "Solution.h"
int main()
{
    Solution a;
    vector<int> s = { 1,3,2 };
    vector<int > solution = a.twoSum(s, 3);
    for (auto x : solution)
    {
        std::cout << x;
    }
    std::cout << "Hello World!\n";
}
