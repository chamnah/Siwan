#include <iostream>

int main()
{
	//void temp;

	int; bool; float;

	void* ptr;
	bool* ptrBool;

	int a = 0;
	ptr = &a;
	//ptrBool = &a;

	//reinterpret_cast<>
	*(static_cast<int*>(ptr)) = 10;
	/*
	void*
	내가 자료형의 크기를 모를때
	*/
	return 0;
}