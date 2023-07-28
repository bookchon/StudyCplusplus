#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// 힙 영역 할당 43번에서 이어서 하기
class Human {
private:
	char* name;
	int id;
	int age;
public:
	Human(const char aname[20], int aid, int aage) { 
		name = new char[strlen(aname) + 1]; // 메모리 동적할당 받을 크기 설정, strlen은 문자열 크기 설정 가능 null문자열 추가하기 위해 +1 추가
		strcpy(name, aname);
		id = aid;
		age = aage;
	}

	~Human() {
		delete[] name; // 동적할당 해제, name이 배열이기 때문에 []도 같이 써줌. index위치 잘 볼것
	}

	void getData() {
		cout << "이름: " << name << "주민등록번호: " << id << "나이: " << age << endl;
	}
};

int main()
{
	Human h("홍길동", 1, 30);
	h.getData();

	Human hary[3] = { Human("김영희", 2, 23), Human("김철수", 3, 33), Human("이기영", 4, 14)};
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}