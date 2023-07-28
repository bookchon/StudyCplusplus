#include <iostream>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) : num(n) {
		cout << num << "CTest constructor" << endl;
	}
	void func() {
		cout << "CTest func()" << endl;
	}
	virtual void vfunc() {
		cout << "CTest vfunc()" << endl;
	}
};

class CtestSub : private CTest {
private:
	int snum;
public:
	CtestSub(int n1, int n2) : CTest(n1), snum(n2) 
	{ cout << snum << "CTest constructor" << endl; }
	~CtestSub()
	{
		cout << snum << "CTest constructor" << endl;
	}
	void vfunc() {
		cout << "CTestSub func()" << endl;
	}
};

int main() {
	return 0;
}