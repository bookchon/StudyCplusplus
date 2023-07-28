#include <iostream>
using namespace std;

class Myclass {
	int num1, num2;
	const char* name;
public:
	Myclass(int anum, int anum2, const char* aname) : num1(anum), num2(anum2), name(aname) {}
		void showData() {
			cout << num1 << "," << num2 << "," << name << endl;
		}
};

int main(void)
{
	Myclass m(1, 2, "ȫ�浿");
	m.showData();
	Myclass cm(m);
	cm.showData();

	return 0;
}