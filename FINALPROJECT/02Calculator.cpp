#author 오슬예나
#include <iostream>
using namespace std;

int main() {
    char cper = '+';
    double x = 0;       
    double y = 0;
    double result = 0;

    cout << "계산기 어플리케이션" << endl << endl;
    cout << "엔터를 누르면 계산됩니다." << endl;

    Calculator c;
        while (true)
        {
            cin >> x >> cper >> y;
            if (cper == '/' && y == 0) // 0으로 나눴을 때 사용자에게 메세지 출력
            {
                cout << "0으로 나눌 수 없습니다." << endl;
                continue;
            }
            else
            {
                result = c.Calculate(x, cper, y); // 이전 정의 calculator 함수 호출
            }
         cout << x << cper << y << " 결과 : " << result << endl;
    }

    return 0;
}