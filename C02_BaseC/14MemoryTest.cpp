#include <stdio.h>

int g = 0;

int main()
{
	int n = 10;		// �������� main�Լ� �ȿ� ���� �� ���� ����
	printf("local n: %p\n", &n);
	printf("global g: %p\n", &g);

	return 0;
}