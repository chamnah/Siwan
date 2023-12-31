#include <iostream>

// 반환 함수이름 (인자1, 인자2)

int Add(int a, int b)
{
	return a + b;
}

void func()
{

}

void main()
{
	int result = Add(1, 5);
	std::cout << result;
}