/*
�޸� �����Ҵ�
*/
#include <iostream>
using namespace std;

int main(void)
	int* arr;	// �Ҵ� �� �޸��� �ּ�
	char size;

	printf("�迭���� ����: ");
	scanf_s("%d", &size); // scanf�� �Է��� ���� ���� �ּ� �����ڰ� �ʿ���(&)
	
	/*
	arr = (int*)malloc(sizeof(int)); // heap ������ �޸� �Ҵ�
	// int ������ ũ�⸦ ��Ÿ�� / heap ������ �޸𸮰� �Ҵ� ��. �޸𸮸� ����Ϸ��� �ּҰ� �־�� ��. �Ҵ� �� �޸��� ���� �ּҸ� �����ϱ� ������ �ּҰ� �ʿ���
	printf("������� �迭 ũ��: %d\n", sizeof(arr));

	free(arr); // �Ҵ� �� �޸𸮸� ������
	*/
	return 0;
}