#include <iostream>
using namespace std;

class MyClass {
private: // ���� ����
	int private_val;
public: // ���� ���
	int public_val;
protected: // ��ӽ� ���� ���
	int portected_val;

public: // ��� �Լ��� ������ public
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
	o.public_val = 100; // private, protected�� ����� �� ����(�ܺο��� ������ �� �ִ� ���� �����ϰ� ����)

	o.get();
	
	return 0;
}