#include <iostream>
#include <cstring>
#pragma warning(disable:4996)
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const Person& copy) : age(copy.age)
	{
		this -> name = new char[strlen(copy.name) + 1];
		strcpy(this-> name, copy.name);
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()
	{
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("ȫ�浿", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}