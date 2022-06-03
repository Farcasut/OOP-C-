
#include <iostream>
#include <string>
#include <map>
#include <vector>

using namespace std;

void pb1(string st)
{
	map<char, int> frecventa;
	for (int i = 0; i < st.size(); i++)
	{

		st[i] = tolower(st[i]);
		if (!('a' <= st[i] && st[i] <= 'z' || st[i] == ' ' || '0' <= st[i] && st[i] <= '9'))
		{
			st.erase(i, 1);
		}
		else
		{
			frecventa[st[i]]++;
		}
	}

	vector<pair<char, int>> vector_sort;
	for (auto x : frecventa)
	{
		vector_sort.push_back(x);
	}

	for (int i = 0; i < vector_sort.size(); i++)
	{
		for (int j = 0; j < vector_sort.size() - 1; j++)
		{
			if (vector_sort[j].second < vector_sort[j + 1].second)
			{
				swap(vector_sort[j], vector_sort[j + 1]);
			}
			if (vector_sort[j].second == vector_sort[j + 1].second)
			{
				if (vector_sort[j].first > vector_sort[j + 1].first)
				{
					swap(vector_sort[j], vector_sort[j + 1]);
				}
			}
		}
	}
	int i = 0;
	for (auto x : vector_sort)
	{

		frecventa[x.first] = i;
		i++;
	}
	int suma = 0;
	for (int i = 0; i < st.size(); i++)
	{
		suma += frecventa[st[i]] + i;
	
		
	}
	cout << suma;
	
}
int main()
{
	pb1("test Bitdefender internship 2022");
	return 0;
}