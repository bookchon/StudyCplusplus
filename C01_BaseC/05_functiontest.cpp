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

// ��� �Լ��̸�(�Է�)

/*
void func(void) // ��, ����� ���� �Լ�
{
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res : " << res << std::endl;

}

int main()
{
	func();		//�Լ� ȣ��
	return 0;
}
*/

/* ����
int main()
{
	int a1, b1;
	int result = 0;
	std::cout << "a: ";
	std::cout << "b: ";
	std::cin >> a1 >> b1;

	int result = a1 + b1;
	std::cout<<"���: " << result << std::endl;

	return 0;
}
*/

/*
void func(int n1, int n2) // �Է��� ����� ��� : �Ű������� �����ؾ� ��
{
	int res = n1 + n2;
	std::cout << "res: " << res << std::endl;
}

int main()
{
	int n1 = 50;
	int n2 = 20;
	func(n1, n2); // �Է����� �������ִ� ���� ���μ�(n1, n2)��� �θ�
		return 0;
}
*/

// ������� �� �ִ� ����


int func(int n1, int n2);				//�Լ� ����

int main()
{
	int num1 = 50;
	int num2 = 20;

	int res = func(num1, num2); // �Է����� �������ִ� ���� ���μ�(n1, n2)��� �θ�
	std::cout << "res : " << res << std::endl;
	std::cout << "res : " << func(num1, num2) << std::endl;
}

int func(int n1, int n2) // ����� ������ int�� �;� �� / �Լ� ����
{
	int res = n1 + n2;
	return res;
	//std::cout << "res: " << res << std::endl;
}