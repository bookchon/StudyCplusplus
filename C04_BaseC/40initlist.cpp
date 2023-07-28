	/* 
  �ݷ� �ʱ�ȭ�� �ʿ��� ���
	1. ��� ��� ����
	2. ��ü ��� ����
	3. ���� ��� ����
	4. ��� ����
	*/
#include <iostream>
using namespace std;

class ConstSome {
public:
	const int val; // ��� ��� ����
	ConstSome(int n) : val(n) {}
	void printval() {
		cout << val << std::endl;
	}
};
class RefSome {
public:
	int &ref; // ���� ��� ����
	RefSome(int n) : ref(n) {}
	void printref() {
		cout << ref << std::endl;
	}
};
class Position {
public:
	int x, y;
	Position(int ax, int ay) {
		x = ax;
		y = ay;
	}
};
class ObjSome {
public:
	Position pos;
	ObjSome(int ax, int ay) : pos(ax, ay) {}
	void printObj() {
		cout << pos.x << ' ' << pos.y << std::endl;
	}
};
int main()
{
	ConstSome c(10);
	c.printval();

	int n = 20;
	RefSome r(n);
	r.printref();

	ObjSome o(10, 20);
	o.printObj();
	return 0;
}