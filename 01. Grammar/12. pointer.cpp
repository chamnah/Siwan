#include <iostream>
using namespace std;
int main()
{
	/*
	포인터 : 메모리의 주소를 저장하는 자료형
	int, char, double, float, bool, short
	*/

	//int 4byte, bool 1byte, float 4byte, char : 1byte

	//int a; // a라는 이름으로 메모리 4byte만큼 생성해줘\
	//
	//cout << "a의 주소 : " << &a << endl;

	//int* ptrA; // int형 메모리의 주소를 저장하는 자료형 생성
	//ptrA // 64비트 8바이트 / 32비트 4바이트
	/*
	int* ptrInt; // int 값이 저장된 메모리 주소를 가리킴
	bool* ptrBool; // bool 값이 저장된 메모리 주소를 가리킴

	int a = 10;
	ptrInt = &a; // &변수 : 변수의 메모리 주소를 반환
	cout << a << endl;
	*ptrInt = 20; // *포인터변수 : 원본 값에 접근
	cout << a;
	*/
	// const 상수 : 값을 변경할 수 없다.
	// const -> constant : 상수
	//const int temp = 10; 
	//temp = 20;
	/*
	const pointer : 포인터 값 변경 불가
	*/
	
	/*
	int a = 10;
	int b = 20;
	const int const * const ptrInt = &a;
	//*ptrInt = 20;
	//ptrInt = &b;
	
	대상 값 수정 불가능
	가리키는 대상 변경 불가능
	*/

	/*
	int a = 10;
	int b = 10;
	const int* pInt = &a;
	*pInt = 20; 불가능
	pInt = b;   가능
	
	대상 값 수정 불가능
	가리키는 대상 변경 가능
	*/

	/*
	int a = 10;
	int b = 10;
	int const* pInt = &a;
	//*pInt = 20;
	pInt = &b;
	
	대상 값 수정 불가능
	가리키는 대상 변경 가능
	*/
	/*
	int a = 10;
	int b = 20;
	int* const pInt = &a;
	*pInt = 20;
	pInt = &b;

	대상 값 수정 가능
	가리키는 대상 변경 불가능
	*/
	
	/*
	int a = 10;
	int b = 20;
	const int const* const pInt = &a;
	*pInt = 20;
	pInt = &b;
	// 원본 값 수정 불가능
	// 메모리 주소 변경 불가능
	*/

	// 프로그래밍 필기 시험 단골 손님

	/*int* ptrInt;
	cout << sizeof(ptrInt); 

	bool* ptrBool;
	cout << sizeof(ptrBool);*/

	//포인터 자료형 크기 : 32bit : 4byte / 64bit : 8byte
	//모든 포인터 형식의 자료형 크기는 동일하다.

	/*
	32비트  : 메모리에 접근할 수 있는 범위가 램 4기가
	x86 - 32비트
	64비트  : 메모리에 접근할 수 있는 범위 제한 없음
	*/

	
	return 0;
}