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
	// 상속 관계에서 멤버함수 이름이 같은 것은 함수 오버라이딩(재정의)이라고 함 오버로딩(다중정의)은 그냥 함수 이름이 같을 때
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
	Person gd("오슬예나", 20);
	gd.getData();
	getData();

	Student sd("오슬예나", 20, 9602212616816);
	sd.showData();
	return 0;
}

