#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


// stack ���� �Ҵ�
class Human {
private:
	char name[20]; // �迭�� ����� ���ÿ� �ʱ�ȭ�� ������, �׷��� ���� ������ �Ұ���
	int id;
	int age;
public:
	Human(const char aname[20], int aid, int aage) { // ������
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	/*
	void setData(const char aname[20], int aid, int aage) {
		// name;
		strcpy(name, aname); // ���� �����Ϸ��� strcpy�� ����Ͽ� �����Ͽ��� ��
		id = aid;
		age = aage;
	}
	*/
	void getData() {
		cout << "�̸�: " << name << "�ֹε�Ϲ�ȣ: " << id << "����: " << age << endl;
	}
};

int main()
{
	// Human h;
	// h.setData("ȫ�浿 ", 1 , 30);
	
	Human h("ȫ�浿", 1, 30); // ������ ��� ���
	h.getData();
	return 0;
}