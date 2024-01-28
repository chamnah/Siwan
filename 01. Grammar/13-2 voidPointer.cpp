#include <iostream>

int main()
{
	//void temp;// 몇바이트로 만들지 알 수가 없기때문에
	//void temp;

	int; bool; float;

	
	bool* ptrBool;

	/*
	모든 종류의 자료형의 메모리 주소를 저장할 수 있다.
	*/


	int a = 0;
	int* pA = &a;
	*pA; // 4byte만큼 값을 읽는다.
	short* pB = nullptr;
	*pB = 10;// 2byte

	

	//ptrBool = &a;

	//reinterpret_cast<>
	*(static_cast<int*>(ptr)) = 10;
	/*
	void*
	내가 자료형의 크기를 모를때
	*/

	void* ptr; // 64비트 8byte / 32bit 4byte
	ptr = &a;
	*static_cast<int*>(ptr) = 10;

	char arrChar[6] = "abcde";
	void* pVoid;
	// e의 값을 x로 변경
	return 0;
}