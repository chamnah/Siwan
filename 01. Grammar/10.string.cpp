#include <iostream>
#include <Windows.h>
using namespace std;

void main()
{
	//char; // 1byte 문자 한개

	/*
	멀티 바이트 - 문자 중 영문자/숫자(아스키 코드)등은 1byte로 표기
				- 외국어(한국어, 영어가 아닌 문자) 및 특수문자 2byte표기
				//char; ""; - 멀티바이트
				char text[10] = "안a안";
				cout << text[2];
	*/
	// 문자열 뒤에는 보이지 않는 문자가 숨겨져 있다. \0
	// \0 - 문자열이 끝났다를 표기
	//char text[20] = "안녕하세요.";
	//char text2[2] = "ab";
	//cout << sizeof("안녕");

	/*
	유니코드 - 모든 문자를 2byte로 표기
				//wchar_t  L""
				wchar_t text2[20] = L"안녕";
			 - 메모리가 멀티바이트에 비해 더 크다.

			 cout << sizeof(L"AB"); // \0 - 2byte
	*/

	//TCHAR text[10] = L""; - 윈도우 제공 문자 자료형

	/*
	멀티바이트 용 문자열 함수
	- strlen(string length) : 문자열 길이 반환
	  cout << strlen("abab"); // \0무시한 길이 반환

	- strcpy(string copy) : 문자열 복사
	  char a[10] = "abcd";
	  char b[10];

	  strcpy_s(b,a); //b에다가 a를 복사한다.
	  cout << b;

	- strcat(string concatenation) : 문자열 합치기
		char a[10] = "abcd";
		char b[10] = "efgh";

		strcat_s(a, b);//a뒤에 b를 붙여 넣어라.
		cout << a;

	- strcmp(string compare) : 문자열 비교

	비교하는 대상인 b가 사전순으로 뒤에 있는 경우 -1
	*/
	/*
	char a[10] = "";

	char a[10] = "abcd";
	char b[10] = "abca";

	if (strcmp(a, b) == 0)
	{
		cout << "두 문자열은 동일합니다.";
	}
	else if (strcmp(a, b) > 0) // 양수
	{
		cout << "두번째 인자의 문자열이 첫번째 인자의 문자열 보다 사전상으로 앞에 존재합니다.";
	}
	else if (strcmp(a, b) < 0) // 음수
	{
		cout << "두번째 인자의 문자열이 첫번째 인자의 문자열 보다 사전상으로 뒤에 존재합니다.";
	}

	char text[10];
	cin >> text;
	*/
	/*
	문자열 다른 상황
	abcd - 4
	hg   - 2
	hgabcd

	문자열 같은 상황
	abcd
	abcf
	abcdabcf
	*/

	/*
	숙제
	1. 두 개의 문자열은 입력 받는다.
	2. 두 개의 문자열 중 길이가 더 짧은 문자열이 앞에 존재하도록 합쳐서 출력한다.
	3. 만약에 문자열의 길이가 서로 동일하다면, 사전상 더 앞 순서에 존재하는 문자열이 앞에 존재하도록 합쳐서 출력
	
	strcpy - 문자열 복사
	strcat - 문자열 이어 붙이기
	strcmp - 문자열 비교 - 0, 
	strlen - 문자열의 길이 - \0 : 길이 포함 안됨
	*/

	char arr[10] = "";
	char brr[10] = "";

	cin >> arr;
	cin >> brr;
	//1. arr 문자열 길이 계산 / brr 문자열 길이 계산
	//2. arr 문자열 길이 계산 / brr 문자열 길이 계산

	int arrLength = strlen(arr);
	int brrLength = strlen(brr);

	if (arrLength < brrLength)
	{
		strcat(arr, brr);
		cout << arr;
	}
	else if (arrLength == brrLength)
	{
		if (strcmp(arr, brr) < 0)
		{
			strcat(arr, brr);
			cout << arr;
		}
		else
		{
			strcat(brr, arr);
			cout << brr;
		}
	}
	else
	{
		strcat(brr, arr);
		cout << brr;
	}
}