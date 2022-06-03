
#include <fstream>
#include <iostream>
#include <string>
#include <map>
#include <queue>



using namespace std;

/*void delete_spaces(string& line)
{

	int k = 0;
	while (k <= line.length()) {

		if (line[k] == ' ' && line[k + 1] == ' ')
		{
			line.replace(k, 2, " ");
		}
		else {
			k++;
		}
	}
	if (line.at(0) == ' ')
		line.erase(0, 1);
	if (line.at(line.length() - 1) == ' ')
		line.erase(line.length() - 1, 1);
}*/


void map_constructor(string line, map<string, int >& h)
{
	    string debugg;
	while (line.length())
	{
		int i = line.find_first_of(" .,!:");
	     debugg = line.substr(0, i);
		 for (int i = 0; i < debugg.length(); i++)
		 {
			 if (debugg.at(i) >= 65 && debugg.at(i) <= 90)
			 {
				 debugg.at(i) += 32;
			 }
		 }
		if (debugg.length() != 0) {
			h[debugg]++;
		}
			line.erase(0, i + 1);
		
	}
}

void sort(priority_queue<pair<int, string>>& prio, map <string, int> h)
{

	for (auto i : h)
	{
		prio.push(make_pair(i.second, i.first));
	}

}

int main()
{

	fstream f;
	string line;
	f.open("test_.txt");
	
	
	//delete_spaces(line);
	map <string, int>m;
	
	//cout << line;
	while (!f.eof())
	{
		getline(f, line);
		cout << line<<endl;
		map_constructor(line, m);

	}



	/*for (auto elem : m)
	{
		cout << elem.first << " : " << elem.second << endl;
	}*/
	cout << endl << endl;
	priority_queue<pair<int, string>> prio;
	sort(prio, m);

	while (!prio.empty())
	{
		pair<int, string> afisare = prio.top();
		cout << afisare.second << " => " << afisare.first << endl;
		prio.pop();
	}



	return 0;
}