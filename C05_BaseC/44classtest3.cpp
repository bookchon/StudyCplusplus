#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

// �� ���� �Ҵ� 43������ �̾ �ϱ�
class Human {
private:
	char* name;
	int id;
	int age;
public:
	Human(const char aname[20], int aid, int aage) { 
		name = new char[strlen(aname) + 1]; // �޸� �����Ҵ� ���� ũ�� ����, strlen�� ���ڿ� ũ�� ���� ���� null���ڿ� �߰��ϱ� ���� +1 �߰�
		strcpy(name, aname);
		id = aid;
		age = aage;
	}

	~Human() {
		delete[] name; // �����Ҵ� ����, name�� �迭�̱� ������ []�� ���� ����. index��ġ �� ����
	}

	void getData() {
		cout << "�̸�: " << name << "�ֹε�Ϲ�ȣ: " << id << "����: " << age << endl;
	}
};

int main()
{
	Human h("ȫ�浿", 1, 30);
	h.getData();

	Human hary[3] = { Human("�迵��", 2, 23), Human("��ö��", 3, 33), Human("�̱⿵", 4, 14)};
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}