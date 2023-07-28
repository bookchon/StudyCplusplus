#include <iostream>
using namespace std;

class Myclass {
private:
	int val;
public:
	Myclass(int aval) : val(aval) {}
	Myclass operator+(const Myclass & other) {
		return Myclass(val + other.val);
	}
	void print() {
		cout << val << endl;
	}
};

int main()
{
	Myclass a(10);
	a.print();

	Myclass b(a);
	b.print();

	Myclass c = b;
	c.print();

	Myclass d = a + b + c;
	d.print();

	return 0;
}