#include <iostream>
#include <vector>
#include<string>
#include <algorithm>
using namespace std;
int main()
{	
	/*int c;
	std::cin >> c;
	
	auto f = [&](int a, int b)
	{
		return a + b+c;
	};
	std::cin >> c;
	std::cout << f(10, 20);*/
	//############################//
	auto f_sort = [](string a, string b)
	{
		if (a.length() == b.length())
		{
			return a < b;
		}
		return a.length() < b.length();
	};
	std::vector<std::string> a = { "this", "is","a", "test" };
	sort(a.begin(), a.end(), f_sort);
	for (auto x : a)
	{
		cout << x<<endl;
	}

	for (vector<string>::iterator it = a.begin(); it != a.end(); it++)
	{
		cout << *it << endl;
	}

	return 0;
}