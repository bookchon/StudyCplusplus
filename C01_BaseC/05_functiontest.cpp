#include <iostream>

/*
int main()
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;

	return 0;
}
*/

// 출력 함수이름(입력)

/*
void func(void) // 입, 출력이 없는 함수
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;

}

int main()
{
	func();		//함수 호출
	return 0;
}
*/

/* 오답
int main()
{
	int a1, b1;
	int result = 0;
	std::cout << "a: ";
	std::cout << "b: ";
	std::cin >> a1 >> b1;

	int result = a1 + b1;
	std::cout<<"결과: " << result << std::endl;

	return 0;
}
*/

/*
void func(int n1, int n2) // 입력을 만드는 방법 : 매개변수를 선언해야 함
{
	int res = n1 + n2;
	std::cout << "res: " << res << std::endl;
}

int main()
{
	int n1 = 50;
	int n2 = 20;
	func(n1, n2); // 입력으로 전달해주는 것을 실인수(n1, n2)라고 부름
		return 0;
}
*/

// 입출력이 다 있는 형태


int func(int n1, int n2);				//함수 선언

int main()
{
	int num1 = 50;
	int num2 = 20;

	int res = func(num1, num2); // 입력으로 전달해주는 것을 실인수(n1, n2)라고 부름
	std::cout << "res : " << res << std::endl;
	std::cout << "res : " << func(num1, num2) << std::endl;
}

int func(int n1, int n2) // 출력은 무조건 int가 와야 함 / 함수 정의
{
	int res = n1 + n2;
	return res;
	//std::cout << "res: " << res << std::endl;
}