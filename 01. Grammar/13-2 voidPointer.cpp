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
	���� �ڷ����� ũ�⸦ �𸦶�
	*/
	return 0;
}