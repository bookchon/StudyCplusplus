#include <iostream>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) {
		num = n;
		cout << num << "CTest Constructor" << endl;
	}
	~CTest() {
		cout << num << "CTest Constructor" << endl;
	}
};

class CTestSub : public CTest {
private:
	int subn;
	CTestSub(int sn, int n) : CTest(sn) {
		subn = n;
		cout << subn << " CTestSub Constructor" << endl;
	}
	~CTestSub()
	{
		cout << "STestSubDestructor" << endl;
	}
};

int main()
{
	CTest c1(10);
	cout << " ------------------------------------- " << endl;
	CTestSub c2(1, 10);
	return 0;
}