#include <iostream>

int main()
{
	//void temp;// �����Ʈ�� ������ �� ���� ���⶧����
	//void temp;

	int; bool; float;

	
	bool* ptrBool;

	/*
	��� ������ �ڷ����� �޸� �ּҸ� ������ �� �ִ�.
	*/


	int a = 0;
	int* pA = &a;
	*pA; // 4byte��ŭ ���� �д´�.
	short* pB = nullptr;
	*pB = 10;// 2byte

	

	//ptrBool = &a;

	//reinterpret_cast<>
	*(static_cast<int*>(ptr)) = 10;
	/*
	void*
	���� �ڷ����� ũ�⸦ �𸦶�
	*/

	void* ptr; // 64��Ʈ 8byte / 32bit 4byte
	ptr = &a;
	*static_cast<int*>(ptr) = 10;

	char arrChar[6] = "abcde";
	void* pVoid;
	// e�� ���� x�� ����
	return 0;
}