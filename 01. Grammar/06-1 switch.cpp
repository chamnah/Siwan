#include <iostream>
using namespace std;

/*
enum : 열거형
다양한 상태에 이름을 매겨서 편하게 사용하는 용도 / 형변환 가능

enum class : 열거형
enum과 같은 용도로 사용 / 형변환 불가능(형변환을 막고자 사용한다.)
*/

/*
	숙제
	복습!!!!!!!!!!!!!

	자판기 만들기

	enum 음료 타임
	{
		사과 음료
		오렌지 음료
	}

	1. 음료 2. 음료 3. 음료
	2. switch 문으로 선택한 음료를 출력

	*/

enum FRUIT_TYPE  // 열거형
{
	APPLE = 1, // 0
	ORANGE = 5, // 1
	PINEAPPLE, // 2
	PEAR // 3
};

// 자료형 : int / double / long / short /float

// 숙제



//int num;
//FRUIT_TYPE fruit;
//cin >> ;
/*
enum class FRUIT_TYPE  // 열거형
{
	APPLE, // 0
	ORANGE, // 1
	PINEAPPLE, // 2
	PEAR // 3
};
*/
int main()
{
	// 조건문 : if / switch

	/*
	switch 문 특징
	break를 사용해서 탈출하지 않으면 아래 있는 구문이 실행된다.
	안에서 변수 초기화 불가 - 하고자하면 중괄호 넣기

	if VS switch

	if문은 복잡한 조건 처리 가능
	switch문은 값이 무엇인가에 대한 조건만 가능


	if문은 조건이 적은 경우 더 빠르다.
	switch문은 조건이 많은 경우 더 빠르다.
	
	switch - Jump Table기법을 사용함 - 미리 조건 테이블을 만들어서 바로 조건 처리 가능
	*/

	if (false)
	{
		int a;
	}
	else if (false)
	{
		int a;
	}
	else if (false)
	{
		int a;
	}
	else
	{
		int a;
	}
	int num = 6;

	switch (num)
	{
	case APPLE:

		break;
	case ORANGE:

		break;
	case PINEAPPLE:

		break;
	case PEAR:
		break;
	default:
		break;
	}

	switch (num)
	{
	case 1:
	case 2:
	{
		cout << "1을 선택하였습니다." << endl;
		cout << "2을 선택하였습니다." << endl;
		int temp = 100;
	}
		break;
	case 3:
		cout << "3을 선택하였습니다." << endl;
		break;
	default:
		cout << "잘못 선택하였습니다." << endl;
		break;
	}
	

	FRUIT_TYPE myFruit;

	myFruit = APPLE;

	int myType = myFruit;

	cout << myType << endl;

	switch (myFruit)
	{
	case APPLE:
		cout << "너 사과 좋아하는구나." << endl;
		break;
	case ORANGE:
		cout << "너 오렌지 좋아하는구나." << endl;
		break;
	case PINEAPPLE:
		cout << "너 파인애플 좋아하는구나." << endl;
		break;
	case PEAR:
		cout << "너 배 좋아하는구나." << endl;
		break;
	default:
		break;
	}

	
	system("pause");
}

// 복습!!!!
/*
	1. 저번 시간에 무엇을 했는지 조사
	2. cpp를 하나 만들어서 내가 스스로 수업 때 했던 내용을 직접 입력해서 출력해보기
	3. 최대한 보지 않고 만드는 노력을 해보기
*/