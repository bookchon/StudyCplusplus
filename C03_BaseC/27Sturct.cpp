// ����� ���� �ڷ��� ����ü
// #include <iostream>
#include <stdio.h>

struct human {
	char name[20];
	int age;
};

int main()
{
	// int h;
	struct human h = { "ȫ�浿", 23 }; // �޸� Ÿ���� ����(����ü ���� ����)
	printf("�̸�: %s\n", h.name);
	printf("����: %d\n", h.age);
	return 0;
}