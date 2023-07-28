#include <iostream>

int main() // 함수 머리 : 출력 함수이름(입력), 정수(int), 실수(float), 문자(char), 
{	// 함수 시작

	int num = 20;
	std::cout << "Hello World!" << std::endl;
	std::cout << num << std::endl;
	std::cout << num << 'A';
	std::cout << "Hi" << std::endl;
	
	return 0; // 리턴 (출력문이 있으면 리턴이 와야 함. void는 리턴문을 쓰지 않음)
} // 함수 끝