#include <iostream>
using namespace std;

class Super {
public:
	Super() 
	{ 
		cout << "Super()" << endl; 
	}
	~Super()
	{
		cout << "~Super()" << endl;
	}
};

class Sub : public Super {
public:
	Sub()
	{
		cout << "Sub()" << endl;
	}
	~Sub()
	{
		cout << "~Sub()" << endl;
	}
};

int main()
{
	cout << "Start" << endl;
	Sub obj;								// Sub class instance 서브 클래스가 생성되면 서브 클래스에 있는 생성자가 먼저 호출된 후, 상속 받은 클래스가 호출 된 후 실행
	cout << "Stop" << endl;
	return 0;
}