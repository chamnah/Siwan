#include <iostream>
using namespace std;
// ��ȯ �Լ��̸� (����1, ����2)

//void : return �� �ʿ� ����
/*���ڰ� : �ڷ��� ������, �ڷ��� ������, �ڷ��� ������
��ȯ�� �Լ��̸� (���ڰ�)
{
������
}
*/
void func()
{
	cout << "func ȣ��~!!";
}

//���漱��
int Add(int a, int b);

void SetTest(int* a, int* b, int* c)
{
	a = 10;
}

void main()
{
	/*func();
	func();
	func();
	func();
	func();*/
	int result = Add(1, 5);
	//std::cout << result;

	//1. ���� �Լ�  
	// ���۰��� ���� 

	//������ ���� ��ȯ�����ִ� �Լ�
	//1.���ڰ����� ������ �����Ѵ�.
	//2.�ش� ������ ������ ���� ��ȯ �����ش�.

	/*
	2. swap�Լ�
	�ڸ��� �ٲ� ���� �ΰ�  

	*/
	int temp = 0;
	// SetTest;
	int a = temp;//������ ����
	a = 10;
	
	int* ptr = &temp;
	*ptr = 10;
	
	//SetTest(temp);

	cout << temp << endl;
}

int Add(int a, int b)
{
	return a + b;
}