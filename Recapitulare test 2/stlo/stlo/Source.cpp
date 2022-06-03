#include <iostream>
#include <string>
#include <map>
#include <queue>

using namespace std;

map<string, int> create_map(string a)
{
	map<string, int> tmp;
	while (a.length())
	{
		int i = a.find_first_of(" .!,?");
		string sub = a.substr(0, i);
		string::iterator it = sub.begin();
		for (; it != sub.end(); it++)
		{
			char c = tolower(*it);
			*it = c;
		}
		if (sub.length() != 0)
		{
			tmp[sub]++;
		}
	
		a.erase(0, i + 1);

	}
	return tmp;
}

int main()
{
	string text = "I bought an apple. Then I eat an apple. Apple is my favorite.";
	map <string, int> cuvinte =  create_map(text);
	priority_queue<pair<int, string>> prio;
	for (auto x : cuvinte)
	{
		prio.push(make_pair(x.second, x.first));
	}
	while (!prio.empty())
	{
		auto x = prio.top();
		cout << x.second << " " << x.first << endl;
		prio.pop();
	}
	return 0;
}