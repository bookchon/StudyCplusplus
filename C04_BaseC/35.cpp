#include <iostream>
using namespace std;

// Ŭ���� ��� ������ ������ �� �ִ� ����� 3������ ���� ��(����)
class Myclass {
	// ��� ���� : �Ӽ�
private:
	char id;
	int age;
	char *name[10];
		// ��� �Լ�(=�޼ҵ�) ����
public:
	void set(char aid, int aage, char* aname)
		void getData();

};

	Myclass::Myclass(char aid, in aage, const char* aname) : id(aid), age(aage) {
		{
		printf("������ ȣ��\n");
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