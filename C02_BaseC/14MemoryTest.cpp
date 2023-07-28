#include <stdio.h>

int g = 0;

int main()
{
	int n = 10;		// 지역변수 main함수 안에 선언 된 지역 변수
	printf("local n: %p\n", &n);
	printf("global g: %p\n", &g);

	return 0;
}