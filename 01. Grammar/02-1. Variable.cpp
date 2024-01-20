// 자료형 : 데이터를 저장 형태
/*
  정수형 자료형 : 숫자를 저장한다. -0000 ~ 00000
  실수형 자료형 : 소수를 저장한다. -0000.0000 ~ 0000.0000
  명제 자료형   : 명제를 저장한다. true / false
  문자 자료형   : 문자를 저장한다. "안녕하세요."
*/

/* 데이터 크기
bit : 컴퓨터에서 저장할 수 있는 가장 작은 단위 - 0,1
1byte : 8bit     0000 0000 
1kb   : 1024byte 
1mb   : 1024kb
1gb   : 1024mb
1tb   : 1024gb
*/


/*
1byte = 8bit

0000 0000

-2^7 ~ 0 ~ 2^7 - 1
0000 0000 0000 0000

-2^15 ~ 0 ~ 2^15
*/

/*
* 많이 사용하는 자료형 
종류      |    용량(크기)    |   취급 데이터  |   표현 범위                      
*bool      |     1byte        |     명제       |  true / false                    
*char      |     1byte        |     문자       |  -128 ~ 127  
short     |     2byte        |     정수       |  -32768 ~ 32767(-2^15 ~ 2^15)
*int       |     4byte        |     정수       |  -21억 ~ 21억  (-2^31 ~ 2^31)
long      |     4byte        |     정수       |  -21억 ~ 21억  (-2^31 ~ 2^31)
long long|     8byte        |     정수       |  -2^63 ~ 2^63
*float     |     4byte        |     실수       |
double    |     8byte        |     실수       |
*/

#include <iostream>

using namespace std;
// int : 숫자 반환
// void : 반환 할게 없다.
void main()
{
	bool check = true; // 변수 초기화
	bool check1;       // 변수 선언
	check1 = false;    // 대입

	// true  : 1 / 0이 아닌 수
	// false : 0

	check1 = 100;
	//cout << "BOOL : " << check1;

	/*
	변수 이름 유의점
	특수문자 사용 불가 (_는 허용)bool !temp;
	맨 앞에 숫자 사용 불가 bool 1_temp;
	한글 되도록 쓰지 말자
	*/

	// "aaafafaf"
	// ASC Code를 이용하여 숫자와 문자 변환해서 사용한다.
	//char text = 'a'; // char ''로 한개의 문자만 저장 가능
	char text = 97;
	cout << text ;

	// 오버 플로우 : 메모리 범위를 벗어나는 현상
	//short number = 32767 + 1;
	//long long
	//long
	//int
	//short number = 10;
	//number = 100;
	//cout << number;

	float number = 0.1f;  // 4byte
	double number2 = 0.1; // 8byte

	number = number2; // 큰 자료형의 값을 더 작은 자료형에 넣으면 데이터가 잘릴 수 있다.


	int temp; // 21억 30억 

	//unsigned 자료형
	// 음수를 표현하지 않고 양수를 더 큰 범위까지 저장할 수 있다.
	//unsigned int temp = 42억;
	unsigned short temp;
	10; // -부호

	short temp;

	/*
	int 21억 
	바람의 나라 : 돈이 오버플로우 생겨서 문제가 발생
	유튜브 : 조회수 - 싸이 강남스타일 - 
	*/
}