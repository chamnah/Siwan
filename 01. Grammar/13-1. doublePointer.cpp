#include <iostream>
using std::cout;
using std::endl;
int main()
{
	/*
	int a = 0;
	int* ptr = &a; // 변수 즉, 값이 들어있는 메모리 주소

	cout << a << endl;
	*ptr = 10;
	int** pptr = &ptr; // 포인터의 주소를 저장

	64비트일때 8byte / 32비트일 때 4byte

	*(*pptr) = 10;
	cout << a << endl;
	int*** ppptr = &pptr;
	***ppptr = 20;
	cout << a << endl;
	//int****************************** ptrTemp3;
	*/

	/*int arr[10];
	arr[0];
	arr[1];*/

	int arr[10][10];
	int (*ptr)[10] = arr;
	ptr[0][9] = 10;


	int A = 10;
	int* pA = &A;
	int*** pppA;
	// 이걸 이용해서 A의 값을 30으로 변경
	return 0;
}