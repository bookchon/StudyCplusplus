#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person {
private:
	char name[30];
	int age;
public:
	Person(const char*, int);
	void getData();
};

Person::Person(const char* b, int a) {
	strcpy(name, b);
	age = a;
}

void Person::getData() {
	cout << "pepe" << endl;
}

void getData() {
	cout << "Person: " << endl;
}

class Student : public Person {
private:
	int StudentId;
public:
	Student(const char*, int, int) : Person();
	void showData();
	// ��� ���迡�� ����Լ� �̸��� ���� ���� �Լ� �������̵�(������)�̶�� �� �����ε�(��������)�� �׳� �Լ� �̸��� ���� ��
};

Student::Student(const char* b, int a, int c) {
	this -> StudentId = c;
}

void Student::showData()
{
	cout << "Student: " << endl;
}


int main(void)
{
	Person gd("��������", 20);
	gd.getData();
	getData();

	Student sd("��������", 20, 9602212616816);
	sd.showData();
	return 0;
}

