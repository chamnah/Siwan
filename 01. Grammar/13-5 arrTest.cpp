#include <iostream>

int maxSize = 10;
int arr[10] = {}; // int*
int size = 0;

void Add(int a)
{
	arr[size++] = a;

	if (size > maxSize)
	{
		maxSize = 20;
	}
}

int main()
{
	for (size_t i = 0; i < 10; i++)
	{
		Add(5);
	}
}

/*
복습 - 미니게임

가위,바위,보

숫자 야구 게임
*/