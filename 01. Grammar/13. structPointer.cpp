#include <iostream>

struct tagTemp
{
	int a;
	int b;
	int c;

};

void main()
{
	tagTemp temp;
	temp.a = 10;
	temp.b;

	tagTemp* pTemp = &temp;
	(*pTemp).a = 10;
	pTemp->a = 10; // ���� (*pTemp).a�� ������ �ǹ�
}