
#include <iostream>


class numar
{
	int x;
public:
	numar(int value) : x(value){}
	void friend operator+=(numar n1, numar n2)
	{
		n1.x += n2.x;
	}
	int GetX() { return x; }
};

int main()
{
	numar n1(5), n2(6);
	n1 += n2;
	n2 += n1;
	n1 += n2;
	std::cout << n1.GetX();

    return 0;
}
