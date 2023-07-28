	/* 
  콜론 초기화가 필요한 경우
	1. 상수 멤버 변수
	2. 객체 멤버 변수
	3. 참조 멤버 변수
	4. 멤버 변수
	*/
#include <iostream>
using namespace std;

class ConstSome {
public:
	const int val; // 상수 멤버 변수
	ConstSome(int n) : val(n) {}
	void printval() {
		cout << val << std::endl;
	}
};
class RefSome {
public:
	int &ref; // 참조 멤버 변수
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