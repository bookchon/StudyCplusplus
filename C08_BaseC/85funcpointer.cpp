#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
	char name[30];
	int birthday;
public:
	Person(const char* aname, int abirth) {
		strcpy(name, aname);
		birthday = abirth;
	}
	void showPerson();

	~Person()
	{
		delete[]name;
		cout << "~Person()" << endl;
	}
};

Person::Person(const Person& copy)
{
	name = new char[strlen(copy.name) + 1];
	strcpy(name, copy.name);
}

void Person::showPerson() {
		cout << "이름: " << name << " " << "생일: " << birthday << endl;
}

int main()
{
	Person p1("홍길동", 19990909);
	p1.showPerson();

	Person p2(p1);
	p2.showPerson();

	Person p3 = p2;
	p3.showPerson();

	Person p4("강감찬", 20001201);
	p4 = p1;
	p4.showPerson();
}