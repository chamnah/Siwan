#include <iostream>

using namespace std;

int globalValue = 10; // 전역 변수 - 데이터 영역

int main()
{
// 초기식; 조건식; 증감식
//for (size_t i = 0; i < length; i++)
//{
//
//}

/*
if문

if(true/false)
{
}

while(true/false)
{
 // true면 실행
}



int arrInt

*/

//int arr[10] = { 1,2,3,4,5,6 }; //0 ~ 9

//char arrChar[4] = "abc"; //\0 : 문자열 끝

//sizeof("abc"); // 4
//strlen("abc"); // 3
/*
strlen : string length - 문자열 길이를 반환
strcpy : string copy - 문자열 복사
strcat : - 문자열 이어붙이기
strcmp : string compare - 문자열 비교
- 문자열이 같으면 0을 반환
- 사전순 양수 / 음수 반환
*/

// 바이트 패딩
/*
struct AA
{
	int a; //4byte - 4번 접근
	int b; //4byte - 4번 접근
	char c; // 1byte - 1번 접근
			//3byte - bytepadding
};
*/
//#pragma pack(1) //

	/*
	struct B
	{
		int a;
		long long c; // 8byte
		int b;
	};

	//cpu 1byte씩 9번 접근
	//cpu 4byte씩 3번 접근
	//cout << sizeof(B);

	B temp = {1,2,3};
	temp.a = 10;

	int a = 10; // 4byte
	//4byte크기의 메모리 공간에 10을 저장
	//해당 공간 이름을 a라고 명칭

	//포인터 : 메모리 주소 저장
	char* ptrChar;
	ptrChar + 1; // 1byte

	char arrChar[3];
	arrChar[2];
	int* ptr = &a; //int 자료형 크기의 메모리 주소를 저장
	*ptr = 20;

	int** pptr; // 더블 포인터
	int*** ppptr;

	int arr[3];
	ptr = arr; // 배열의 이름이 주소
	ptr = &arr[0]; // 위와 동일

	ptr[1];
	arr + 1;

	cout << a;
	*/
	/*
	char arr[10] = "abcd";
	const char* pChar = "안녕하세요";

	//x86 : 32bit 4byte
	//x64 : 64bit 8byte
	cout << sizeof(L"안녕하세요"); // L""유니코드
	//한글 2byte 영문자 숫자 1byte 멀티 바이트
	*/

	//32기가 - os / 인터넷 / 프로그램(할당)

	/*
	동적 할당 : 사용자가 원하는 순간에 할당
			  : 사용이 끝나면 해제를 해줘야한다.
	*/

	//C 스타일
	/*
	int* ptr = static_cast<int*>(malloc(sizeof(int)));//c스타일 동적할당 함수
	*ptr = 10;

	cout << *ptr;
	free(ptr);
	*/
	/*
	int* ptr = static_cast<int*>(malloc(sizeof(int)*10));
	ptr[0] = 20;
	ptr[9] = 30;
	free(ptr);
	*/
	//C++ 스타일
	/*
	int* ptr = new int;
	*ptr = 10;
	delete ptr;
	*/
	/*
	int* ptr = new int[10]; // 배열 할당
	delete[] ptr; // 배열 해제
	*/

	/*
	메모리 영역 4개

	코드 영역 : 실제 코드가 올라가는 영역
	데이터 영역 : 전역변수 - 프로그램이 시작할 때 할당 / 끝나면 해제
	스택 영역 : 지역변수 - 중괄호 시작할 때 할당 / 끝나면 해제
	힙 영역 : 동적할당된 사용자 변수
	*/
	{
		int ababab = 0; //지역 변수
		//지역변수 특징 : 중괄호 시작할 때 할당
		//                중괄호 끝나면 해제
	}
	
	return 0;
}