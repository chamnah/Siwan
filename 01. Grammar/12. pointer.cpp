#include <iostream>
using namespace std;
int main()
{
	/*
	������ : �޸��� �ּҸ� �����ϴ� �ڷ���
	int, char, double, float, bool, short
	*/

	//int 4byte, bool 1byte, float 4byte, char : 1byte

	//int a; // a��� �̸����� �޸� 4byte��ŭ ��������\
	//
	//cout << "a�� �ּ� : " << &a << endl;

	//int* ptrA; // int�� �޸��� �ּҸ� �����ϴ� �ڷ��� ����
	//ptrA // 64��Ʈ 8����Ʈ / 32��Ʈ 4����Ʈ
	/*
	int* ptrInt; // int ���� ����� �޸� �ּҸ� ����Ŵ
	bool* ptrBool; // bool ���� ����� �޸� �ּҸ� ����Ŵ

	int a = 10;
	ptrInt = &a; // &���� : ������ �޸� �ּҸ� ��ȯ
	cout << a << endl;
	*ptrInt = 20; // *�����ͺ��� : ���� ���� ����
	cout << a;
	*/
	// const ��� : ���� ������ �� ����.
	// const -> constant : ���
	//const int temp = 10; 
	//temp = 20;
	/*
	const pointer : ������ �� ���� �Ұ�
	*/
	
	/*
	int a = 10;
	int b = 20;
	const int const * const ptrInt = &a;
	//*ptrInt = 20;
	//ptrInt = &b;
	
	��� �� ���� �Ұ���
	����Ű�� ��� ���� �Ұ���
	*/

	/*
	int a = 10;
	int b = 10;
	const int* pInt = &a;
	*pInt = 20; �Ұ���
	pInt = b;   ����
	
	��� �� ���� �Ұ���
	����Ű�� ��� ���� ����
	*/

	/*
	int a = 10;
	int b = 10;
	int const* pInt = &a;
	//*pInt = 20;
	pInt = &b;
	
	��� �� ���� �Ұ���
	����Ű�� ��� ���� ����
	*/
	/*
	int a = 10;
	int b = 20;
	int* const pInt = &a;
	*pInt = 20;
	pInt = &b;

	��� �� ���� ����
	����Ű�� ��� ���� �Ұ���
	*/
	
	/*
	int a = 10;
	int b = 20;
	const int const* const pInt = &a;
	*pInt = 20;
	pInt = &b;
	// ���� �� ���� �Ұ���
	// �޸� �ּ� ���� �Ұ���
	*/

	// ���α׷��� �ʱ� ���� �ܰ� �մ�

	/*int* ptrInt;
	cout << sizeof(ptrInt); 

	bool* ptrBool;
	cout << sizeof(ptrBool);*/

	//������ �ڷ��� ũ�� : 32bit : 4byte / 64bit : 8byte
	//��� ������ ������ �ڷ��� ũ��� �����ϴ�.

	/*
	32��Ʈ  : �޸𸮿� ������ �� �ִ� ������ �� 4�Ⱑ
	x86 - 32��Ʈ
	64��Ʈ  : �޸𸮿� ������ �� �ִ� ���� ���� ����
	*/

	
	return 0;
}