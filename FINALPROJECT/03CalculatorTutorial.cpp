#author ��������
#include <iostream>
using namespace std;

class Calculator {
public:
    double Calculate(double x, char cper, double y) { // 10���� �����ϴ� �� ���� �� �Լ� ����(claculate)
        switch (cper)   // cper�� �����Ͽ� switch���� ����Ͽ� case�ȿ� ����ִ� �����ڸ� ó���ϵ��� ��
        {
        case '+':
            return x + y;
        case '-':
            return x - y;
        case '*':
            return x * y;
        case '/':
            return x / y;
        default:
            return 0;
        }
    };
};