#include <iostream>
using namespace std;

int main()
{
	int a, b, c, d;
	cout << "피젯 수를 입력하세요: " << endl;
	cin >> a;
	cout << "젯수를 입력하세요." << endl;
	cin >> b;
	try
	{
		if (b == 0) throw b;
		c = a / b;
		cout << "몫: " << c << endl;
		d = a % b;
		cout << "나머지: " << d << endl;
	}
	catch (int ex) {
		cout << ex << "로 나눌 수 없습니다." << endl;
	}

	cout << "예외 발생으로 정상종료." << endl;

	return 0;
}