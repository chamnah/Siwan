#include <iostream>
using namespace std;

enum class MyEnum
{
	A
};

enum class MyEnum2
{
	A
};

enum class FRUIT_TYPE  // 열거형
{
	APPLE = 1, // 0
	ORANGE = 5, // 1
	PINEAPPLE, // 2
	PEAR // 3
};

void main()
{
	//FRUIT_TYPE fruit = FRUIT_TYPE::APPLE;
	int fruit = static_cast<int>(FRUIT_TYPE::APPLE);
	/*
	casting : 형변환
	
	자료형 변환

	int -> float
	float -> int

	double -> short
	short -> long

	*/

	float num1 = 0.1f;
	int   num2 = 0;
	//num2 = num1; //묵시적 형변환

	// C 스타일 형변환 - 간편한다. / 강력하다.
	//num2 = (int)num1;//명시적 형변환
	
	// C++ 스타일 형변환 - 복잡하다. / 안전하다.
	/*
	*static_cast - 일반적인 형변환에서 사용된다. - 묵시적 형변환을 명시하는 역할
	int, float, short, long
	
	dynamic_cast - 클래스(사용자 정의 자료형)에서 부모 자식간에 형변환 
	const_cast - const를 제거하거나 const를 붙이는데 사용된다.
	- 되도록 사용하지 말것
	reinterpret_cast - 강제 형변환 - C스타일의 캐스팅처럼 형변환
	- 되도록 사용을 권장하지 않는다.
	- 서버와 클라간에 통신을 할 때()
	- 자료형을 알수가 없을 때 (template)
	*/

	num2 = static_cast<int>(num1);
}
