#include <iostream>
using namespace std;

class MyClass {
private: // 접근 차단
	int private_val;
public: // 접근 허용
	int public_val;
protected: // 상속시 접근 허용
	int portected_val;

public: // 멤버 함수는 무조건 public
	void set(int an) {
		private_val = an;
	}
	void get() {
		cout << "public_val: " << public_val << endl;
		cout << "private_val: " << private_val << endl;
	}
};

int main()
{
	MyClass o;
	o.public_val = 100; // private, protected는 사용할 수 없음(외부에서 접근할 수 있는 것을 제한하고 있음)

	o.get();
	
	return 0;
}