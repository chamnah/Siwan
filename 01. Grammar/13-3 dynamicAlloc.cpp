#include <iostream>

int main()
{
	/*
	동적 (메모리)할당 : dynamic alloc(할당)
	- 런타임(프로그램 실행 중) - 메모리 할당
	- 사용자가 원할 때 할당

	정적 (메모리)할당
	- 컴파일 단계에서 미리 할당
	*/

	int a; // 정적 할당 4byte
	bool b;
	char c;

	{
		char c;
	}

	/*
	시완이 집 : 경남 진주시 00구 00동 00 - 00번지

	시완이 집


	C언어 -> 확장판 C++
	C/C++
	C 스타일
	C++ 스타일
	*/

	// C 스타일
	//malloc(12); // 12바이트만큼 동적할당

	/*int* ptr = static_cast<int*>(malloc(8));
	*ptr = 10;
	free(ptr);*/ //메모리 해제

	//동적할당 시켜서 20바이트 크기로 할당
	//int*를 이용해서 배열 5개짜리처럼 사용하여
	//4,5,6,7,8
	/*
	int* ptr = static_cast<int*>(malloc(4)); // memory alloc
	free(ptr); // 자유
	ptr = nullptr;
	*ptr = 10;
	//해제한 메모리에 접근하면 프로그램 죽을 수 있음
	//댕글링 포인터 현상

	ptr = static_cast<int*>(malloc(sizeof(int) * 10));
	free(ptr);
	*/





	//C++ 스타일
	/*
	int* ptr = new int; // 동적할당
	delete ptr;

	ptr = new int[10];
	delete[] ptr;
	*/
	// 윈도우 버전 낮거나 / 리눅스 / Mac / 안드로이드 / ios
	
	//int a[10];

	/*
	C++스타일
	동적할당 시켜서 6바이트 크기로 할당
	char*를 이용해서 배열 6개짜리처럼 사용하여
	abcde까지 저장하고, 출력하기
	*/
	/*char* ptr;

	for (size_t i = 0; i < 6; i++)
	{
		ptr[i] = 'a' + i;
	}*/

	/*
	숙제
	- 가변 배열 함수 만들기

	1. 배열 변수를 하나 만든다.
	2. 배열에 값을 순차적으로 넣는 함수 만들기.
	3. 배열 꽉 찬 경우 동적할당을 이용하여 배열 크기를 늘리는 함수 만들기
	   1. 동적할당 시켜서 배열 크기를 새로 받아서 만들기
	   2. 기존에 배열에 존재하는 값들을 새로운 배열에 옮기기
	   3. 기존 배열은 해제하기
	*/


	/*int* ptr = static_cast<int*>(malloc(20));

	for (int i = 0; i < 5; i++)
	{
		ptr[i] = i + 4;
		std::cout << ptr[i];
	}

	free(ptr);*/
	return 0;
}