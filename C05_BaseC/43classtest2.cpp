#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


// stack 영역 할당
class Human {
private:
	char name[20]; // 배열은 선언과 동시에 초기화가 가능함, 그러나 이후 선언은 불가능
	int id;
	int age;
public:
	Human(const char aname[20], int aid, int aage) { // 생성자
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	/*
	void setData(const char aname[20], int aid, int aage) {
		// name;
		strcpy(name, aname); // 이후 선언하려면 strcpy를 사용하여 선언하여야 함
		id = aid;
		age = aage;
	}
	*/
	void getData() {
		cout << "이름: " << name << "주민등록번호: " << id << "나이: " << age << endl;
	}
};

int main()
{
	// Human h;
	// h.setData("홍길동 ", 1 , 30);
	
	Human h("홍길동", 1, 30); // 생성자 출력 방법
	h.getData();
	return 0;
}