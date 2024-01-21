#include <iostream>

using namespace std;

int main()
{
	// 포인터 자료형의 크기 8byte
	// 64비트 : 8byte / 32비트 : 4byte
	
	/*
	int* ptrInt;
	cout << sizeof(ptrInt) << endl;
	*/

	int arrInt[5] = { 1,2,3,4,5 };
	int* ptrInt; // 포인터 변수를 가지고 arrInt에 마지막 요소의 값을 100으로 변경

	return 0;
}