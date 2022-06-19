#include<iostream>

class MyTest 
{
    public:
        MyTest() { std::cout << "A"; }
};
int main() {
    MyTest* t = new MyTest[10];
	return 0;
}