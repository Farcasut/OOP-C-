#include <iostream>
#include <thread>
void troll()
{	
	while (1)

	{
		int x = 1000000000 % 93231;
	}
}
int main()
{
	
	int processor_count = std::thread::hardware_concurrency();
	for (int i = 0; i < processor_count; i++)
	{
	
		std::thread worker(troll);
		std::thread worker1(troll);
		std::thread worker2(troll);
		std::thread worker3(troll);
		std::thread worker4(troll);
		worker.join();
		worker1.join();
		worker2.join();
		worker3.join();
		worker4.join();
		
	}
	
	return 0;
}