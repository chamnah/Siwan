#include <iostream>

using namespace std;

void Func(int& a)
{
	a = 10;
}

int main()
{
	/*
	//���۷��� - Ư�� ������ �����ϴ� ������ - ����
	�����Ͷ� �����

	����Ű�� ����� ������ �� ����.(����)


	*/

	int a = 10;
	int b = 20;
	int* pA = &a;
	*pA = 20;

	int& refA = a; // int ���۷��� �ڷ��� / int�� ����ų �� ����
	refA = 30;
	/*refA = b;
	Func(b);*/
	//cout << b << endl;

	cout << "pA �ּ� :" << &pA << endl;
	cout << "a �ּ� :" << &a << endl;
	cout << "refA �ּ� :" << &refA << endl;


	/*int a = 50;
	int b = 70;*/
	//Func(a, b);

	//b == 50
	//a == 70
	//swap�Լ� - ���۷���

	/*
	���� : ����~!!!
	
	*/


	return 0;
}