#include <iostream>

int main()
{
	/*
	동적 (메모리)할당 : dynamic alloc(할당)
	- 런타임(프로그램 실행 중) - 메모리 할당
	
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
	C 스타일
	C++ 스타일
	*/

	// C 스타일
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
	
	int a[10];
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

	return 0;
}