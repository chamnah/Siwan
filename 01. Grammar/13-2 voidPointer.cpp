#include <iostream>


int main()
{
	//void temp;

	int; bool; float;

	void* ptr; // 64��Ʈ 8byte / 32bit 4byte
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