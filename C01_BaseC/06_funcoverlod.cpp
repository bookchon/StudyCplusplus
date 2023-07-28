#include <iostream>

/*
void func()
{
	std::cout << "func()" << std::endl;
}

void func(int a)
{
	std::cout << "func(a)" << std::endl;
}

int main()
{
	int n = 10;
	func();
	func(n);

	return 0;
}
*/

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}