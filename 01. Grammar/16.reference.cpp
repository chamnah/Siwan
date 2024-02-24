#include <iostream>

using namespace std;

void Func(int& a)
{
	a = 10;
}

int main()
{
	/*
	//레퍼런스 - 특정 변수를 참조하는 참조자 - 별명
	포인터랑 비슷함

	가리키는 대상을 변경할 수 없다.(안전)


	*/
	/*
	int a = 10;
	int b = 20;
	int* pA = &a;
	*pA = 20;

	int& refA = a; // int 레퍼런스 자료형 / int만 가리킬 수 있음
	refA = 30;
	/*refA = b;
	Func(b);*/
	//cout << b << endl;
	/*
	cout << "pA 주소 :" << &pA << endl;
	cout << "a 주소 :" << &a << endl;
	cout << "refA 주소 :" << &refA << endl;

	*/
	/*int a = 50;
	int b = 70;*/
	//Func(a, b);

	//b == 50
	//a == 70
	//swap함수 - 레퍼런스

	/*
	숙제 : 복습~!!!
	*/

	//레퍼런스

	int a = 0; // 4byte int 변수
	int b = 0;
	int& refA = a; // a라는 변수 참조
	refA = 20; // 참조한 a의 값을 20으로 변경
	refA = b; // a = b;

	int* ptr;
	const int& refB = b; //무조건 참조를 시켜야한다.
	
	cout << a << endl;
	/*
	const int const* const tempA = nullptr;

	const int* tempB = nullptr;
	*tempB = 20;
	tempB = &a;

	int const* tempC = nullptr;
	*tempC = 20;
	tempC = &a;

	int* const tempD = nullptr;
	*tempD = 20;
	tempD = &a;
	*/
	return 0;
}