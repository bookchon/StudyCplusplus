#include <iostream>
using namespace std;

// 클래스 멤버 변수에 접근할 수 있는 방법은 3가지로 구분 됨(은닉)
class Myclass {
	// 멤버 변수 : 속성
private:
	char id;
	int age;
	char *name[10];
		// 멤버 함수(=메소드) 가능
public:
	void set(char aid, int aage, char* aname)
		void getData();

};

	Myclass::Myclass(char aid, in aage, const char* aname) : id(aid), age(aage) {
		{
		printf("생성자 호출\n");
		strcpy_s(name, 10, aname);
		}
	void Myclass::getData()
	{
		std::cout << id << ' ' << name << ' ' << age << endl;
	}
};

int main(void)
{
	Myclass s{
		
	};
	return 0;
}