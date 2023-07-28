#include <iostream>

#define SUM(x, y)	x + x		// 매크로 함수
#define SQLARE(x) x * x
void func()
{

}

int main()
{
	std::cout << SUM(10, 20) << std::endl;
	//func();
	std::cout << SQLARE(10) << std::endl;
	return 0;
}