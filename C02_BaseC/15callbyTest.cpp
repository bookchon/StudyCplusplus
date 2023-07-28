#include <stdio.h>


// 1.
/*
int main()
{
	int n1 = 10;
	int n2 = 20;

	n1 = 20;
	n2 = 10;

	printf("n1: %d \n, n2: %d \n", n1, n2);
	printf("n1: %d \t n2: %d\n", n1, n2);

	return 0;
}
*/

// 2. 함수로 구현: call by value

/*
void swap(int n1, int n2)
{
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
	printf("n1: %d \t n2: %d \n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;

	swap(n1, n2);
	return 0;
}
*/

// 3. 포인터로 구현 : call by reference

void swap(int* pn1, int* pn2)
{
	int temp;
	temp = *pn1;
	*pn1 = *pn2;
	*pn2 = temp;
	//printf("n1: %d \t n2: %d \n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;

	swap(&n1, &n2);
	return 0;
}