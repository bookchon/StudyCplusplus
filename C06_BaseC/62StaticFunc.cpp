#include <iostream>
using namespace std;

class staticTest
{
private:
	static int a;					// 멤버변수의 static
	int b;
public:
	staticTest();
	static void setData(int aa);	// 멤버함수의 static
	void print();
};

int staticTest::a = 10;				// static 멤버변수 초기화

staticTest::staticTest()
{
	this-> b = 20;
}

void staticTest::setData(int aa)
{
	// this->a = 30; this는 객체를 표현하기 때문에 객체 포인터로 접근할 수 없음
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

	s1.setData(30);				// setData 메서드를 호출하여 s1을 통해, a라는 멤버변수의 값 변경
	s1.print();
	s2.print();					// s2를 통해 s1과 공유한다는 사실을 알 수 있음

	staticTest::setData(100);	// 이것 또한 값이 변경 됨. 객체를 통해 접근하는 것이 아니라 class로 접근하여 변경하여 가능함. static이 클래스이기 때문에 가능
	s1.print();
	s2.print();
	return 0;
}