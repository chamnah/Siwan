#include <iostream>
using std::cout;
int main()
{
	//"afaf"; // const char[5];

	//const char* ptrChar = "안녕하세요.";
	//cout << ptrChar;

	const char* ptrChar = "abcdefg";

	//a + 5 - 아스키코드
	std::cout << *ptrChar;
	//ptrChar로 0번째 인덱스의 값 a 출력
	// (1 + 2) * 3 - 1 + 2하고 * 3 


	char charArr[6] = "abcde"; //문자열 끝에 보이지 않는 \0 문자열 끝 
	char* ptrChar;
	// c의값을 h로 변경
	// 배열 전체 출력


	/*
	더블 포인터 - 포인터의 주소
	트리플 포인터 - 더블 포인터의 주소
	
	함수 포인터
	
	구조체 포인터
	
	클래스 포인터
	*/

	/*
	숙제
	- 복습~~~~!!!!
	
	*/

	return 0;
}