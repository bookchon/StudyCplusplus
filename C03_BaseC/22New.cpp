/*
메모리 동적할당
*/
#include <iostream>
using namespace std;

int main(void)
	int* arr;	// 할당 될 메모리의 주소
	char size;

	printf("배열방의 갯수: ");
	scanf_s("%d", &size); // scanf로 입력을 받을 때는 주소 연산자가 필요함(&)
	
	/*
	arr = (int*)malloc(sizeof(int)); // heap 영역에 메모리 할당
	// int 형태의 크기를 나타냄 / heap 영역에 메모리가 할당 됨. 메모리를 사용하려면 주소가 있어야 함. 할당 된 메모리의 시작 주소를 리턴하기 때문에 주소가 필요함
	printf("만들어진 배열 크기: %d\n", sizeof(arr));

	free(arr); // 할당 된 메모리를 해제함
	*/
	return 0;
}