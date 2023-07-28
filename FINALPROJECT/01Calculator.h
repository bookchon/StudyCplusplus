#author 오슬예나
#include <iostream>
using namespace std;

class Calculator {
public:
    double Calculate(double x, char cper, double y) { // 10진수 지원하는 수 형식 및 함수 선언(claculate)
        switch (cper)   // cper와 관련하여 switch문을 사용하여 case안에 들어있는 연산자만 처리하도록 함
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