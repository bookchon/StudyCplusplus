#include <iostream>
using namespace std;

void divide(int a, int b)
{
	int c, d;
	cout << "���� ���� �Է��ϼ���: " << endl;
	cin >> a;
	cout << "������ �Է��ϼ���." << endl;
	cin >> b;

	try
	{
		if (b == 0) throw b;
		c = a / b;
		cout << "��: " << c << endl;
		d = a % b;
		cout << "������: " << d << endl;
	}
	catch (int ex) {
		cout << ex << "�� ���� �� �����ϴ�." << endl;
	}
}

int main()
{

	devide(10, 3);
	devide(100, 5);
	devide(3, 0);
	devide(100, 20);

	cout << "���� �߻����� ��������." << endl;

	return 0;
}