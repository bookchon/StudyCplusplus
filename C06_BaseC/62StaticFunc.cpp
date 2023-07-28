#include <iostream>
using namespace std;

class staticTest
{
private:
	static int a;					// ��������� static
	int b;
public:
	staticTest();
	static void setData(int aa);	// ����Լ��� static
	void print();
};

int staticTest::a = 10;				// static ������� �ʱ�ȭ

staticTest::staticTest()
{
	this-> b = 20;
}

void staticTest::setData(int aa)
{
	// this->a = 30; this�� ��ü�� ǥ���ϱ� ������ ��ü �����ͷ� ������ �� ����
	a = aa;
}

void staticTest::print()
{
	cout << "a: " << a << " "<< "b: " << b << endl;
}

int main(void)
{
	staticTest s1, s2;
	s1.print();
	s2.print();

	s1.setData(30);				// setData �޼��带 ȣ���Ͽ� s1�� ����, a��� ��������� �� ����
	s1.print();
	s2.print();					// s2�� ���� s1�� �����Ѵٴ� ����� �� �� ����

	staticTest::setData(100);	// �̰� ���� ���� ���� ��. ��ü�� ���� �����ϴ� ���� �ƴ϶� class�� �����Ͽ� �����Ͽ� ������. static�� Ŭ�����̱� ������ ����
	s1.print();
	s2.print();
	return 0;
}