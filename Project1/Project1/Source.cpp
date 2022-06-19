
#include <iostream>

class TEST
{
private:
	TEST();
	~TEST();
	static  TEST* test;

public:
	static TEST* Metoda()
	{
		if(!test)
			test = new TEST();
		return test;
	}
};

int main()
{
	TEST* inst = TEST::Metoda();

}