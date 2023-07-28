#include <stdio.h>

int main()
{
	/*
	int num = 10;
	printf("num: %d\n", num);

	num = 20;
	printf("num: %d\n", num);
	*/

	const int num = 10;
	int* p = &num;
	*p = 100;
	printf("num: %d\n", num);

	return 0;
}