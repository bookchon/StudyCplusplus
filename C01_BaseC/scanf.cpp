# include <iostream>

int main()
{
	int val1;
	std::cout << "ù ��° ���� �Է�: ";
	std::cin >> val1; // >> �� cin �̶�� ��ü�� ���ؼ� val1�� �Է��� ���ڸ� ���� ������� ��

	int val2;
	std::cout << "�� ��° ���� �Է�: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "�������: " << result << std::endl;

	return 0;
}