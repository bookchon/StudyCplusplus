#author ��������
#include <iostream>
using namespace std;

int main() {
    char cper = '+';
    double x = 0;       
    double y = 0;
    double result = 0;

    cout << "���� ���ø����̼�" << endl << endl;
    cout << "���͸� ������ ���˴ϴ�." << endl;

    Calculator c;
        while (true)
        {
            cin >> x >> cper >> y;
            if (cper == '/' && y == 0) // 0���� ������ �� ����ڿ��� �޼��� ���
            {
                cout << "0���� ���� �� �����ϴ�." << endl;
                continue;
            }
            else
            {
                result = c.Calculate(x, cper, y); // ���� ���� calculator �Լ� ȣ��
            }
         cout << x << cper << y << " ��� : " << result << endl;
    }

    return 0;
}