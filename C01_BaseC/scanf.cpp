# include <iostream>

int main()
{
	int val1;
	std::cout << "첫 번째 숫자 입력: ";
	std::cin >> val1; // >> 는 cin 이라는 객체를 통해서 val1에 입력한 숫자를 집어 넣으라는 뜻

	int val2;
	std::cout << "두 번째 숫자 입력: ";
	std::cin >> val2;

	int result = val1 + val2;
	std::cout << "덧셈결과: " << result << std::endl;

	return 0;
}