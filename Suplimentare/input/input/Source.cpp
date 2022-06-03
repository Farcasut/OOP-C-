#include <iostream>
#include <vector>
using namespace std;
int main()

{

	bool flag_no_1=false;
	bool flag_no_2 = false;
	int no1;
	int no2;
	while (!flag_no_1 || !flag_no_2)
	{
		if (!flag_no_1)
		{
			printf("Enter a number between 0 and 255\n");
			cin >> no1;
			if (0 <= no1 && no1 <= 255)
			{
				flag_no_1 = true;
			}
		}
		if (!flag_no_2)
		{
			printf("Enter a number between 0 and 255\n");
			cin >> no2;
			if (0 <= no2 && no2 <= 255)
			{
				flag_no_2 = true;
			}
		}
	}
	vector<int> nums = { 1,2,3,45 };
	for (int i = 0; i < nums.size(); i++)
		cout << nums.at(i);

	return 0;
}