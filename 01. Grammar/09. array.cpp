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
	배열 - 자료형 묶음

	1. 인덱스는 0 ~ 배열크기 - 1
	*/
	/*
	int temp = 10;

	int arrayInt[20] = {1,2,3,4,5,6}; // 선언 인덱스 : 0 ~ 갯수 - 1 (20가지)

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
	shuffle : 섞기

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
	숙제
	
	1.
	로또 생성기
	1. 1~45의 숫자 중 랜덤한 7개의 숫자를 출력하시오.
	2. 7개의 숫자는 서로 중복되지 않는다.

	2.
	정렬하기

	1. 값이 1 ~ 10까지 들어있는 배열을 반전 시키는 기능 만들기

	int arrayInt[10] = {1,2,3,4,5,6,7,8,9,10}; // 오름차순

	
	index([0])        : 0, 1 2 3 4 5 6 7 8 9
	value(arrayInt값) : 10,9,8,7,6,5,4,3,2,1

	*/
}