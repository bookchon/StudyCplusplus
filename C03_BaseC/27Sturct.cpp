// 사용자 정의 자료형 구조체
// #include <iostream>
#include <stdio.h>

struct human {
	char name[20];
	int age;
};

int main()
{
	// int h;
	struct human h = { "홍길동", 23 }; // 휴먼 타입의 변수(구조체 변수 선언)
	printf("이름: %s\n", h.name);
	printf("나이: %d\n", h.age);
	return 0;
}