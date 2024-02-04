#include <iostream>
using namespace std;
// 반환 함수이름 (인자1, 인자2)

//void : return 할 필요 없음
/*인자값 : 자료형 변수명, 자료형 변수명, 자료형 변수명
반환형 함수이름 (인자값)
{
구현부
}
*/
void func()
{
	cout << "func 호출~!!";
}

//전방선언
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

	//1. 랜덤 함수  
	// 시작값과 끝값 

	//랜덤한 값을 반환시켜주는 함수
	//1.인자값으로 범위를 지정한다.
	//2.해당 범위의 랜덤한 값을 반환 시켜준다.

	/*
	2. swap함수
	자리를 바꿀 인자 두개  

	*/
	int temp = 0;
	// SetTest;
	int a = temp;//별개의 변수
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