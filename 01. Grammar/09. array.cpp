#include <iostream>
using namespace std;

void main()
{
	/*int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	int e = 0;
	int f = 0;
	int g = 0;
	int h = 0;
	int i = 0;*/

	/*
	�迭 - �ڷ��� ����

	1. �ε����� 0 ~ �迭ũ�� - 1
	*/
	/*
	int temp = 10;

	int arrayInt[20] = {1,2,3,4,5,6}; // ���� �ε��� : 0 ~ ���� - 1 (20����)

	arrayInt[0];

	for (size_t i = 0; i < 20; i++)
	{
		cout << arrayInt[i];
	}
	*/

	/*
	int evenList[5] = {2,4,6,8,10};
	int oddList[5] = {1,3,5,7,9};
	int arr[10] = {}; 
	
	// index : 0 1 2 3 4 5 6 7 8 9
	// value : 1,2,3,4,5,6,7,8,9,10

	bool temp = (0 % 2 == 0);

	for (size_t i = 0; i < 10; i++)
	{
		if ((i + 1) % 2 == 0)
		{
			arr[i] = evenList[i / 2];
		}
		else
		{
			arr[i] = oddList[i / 2];
		}
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << arr[i];
	}
	*/

	/*
	swap
	int a = 10;
	int b = 20;
	int temp = 0;

	temp = a;
	a = b;
	b = temp;*/

	/*
	a = 20(b)
	b = 10(a)
	*/

	/*
	shuffle : ����

	srand(time(NULL));
	int arrayInt[10] = {1,2,3,4,5,6,7,8,9,10};

	for (size_t i = 0; i < 100; i++)
	{
		int first = rand() % 10;// 0 ~ 9
		int second = rand() % 10;// 0 ~ 9
		int c = 0;

		c = arrayInt[first];
		arrayInt[first] = arrayInt[second];
		arrayInt[second] = c;
	}

	for (size_t i = 0; i < 10; i++)
	{
		cout << arrayInt[i] << ", ";
	}
	*/
	
	/*
	[0] - [0][1][2]
	[1] - [0][1][2]
	[2] - [0][1][2]
	
	*/
	
	int arrayInt[3][3] = { {1,2,3},{4,5,6}, {7,8,9} };

	for (size_t i = 0; i < 3; i++)
	{
		for (size_t j = 0; j < 3; j++)
		{
			cout << arrayInt[i][j];
		}
	}

	/*
	����
	
	1.
	�ζ� ������
	1. 1~45�� ���� �� ������ 7���� ���ڸ� ����Ͻÿ�.
	2. 7���� ���ڴ� ���� �ߺ����� �ʴ´�.

	2.
	�����ϱ�

	1. ���� 1 ~ 10���� ����ִ� �迭�� ���� ��Ű�� ��� �����

	int arrayInt[10] = {1,2,3,4,5,6,7,8,9,10}; // ��������

	
	index([0])        : 0, 1 2 3 4 5 6 7 8 9
	value(arrayInt��) : 10,9,8,7,6,5,4,3,2,1

	*/
}