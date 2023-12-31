#include <iostream>
#include <windows.h>

using namespace std;
#define SIZE 80 // 컴파일 단계에서 에러 찾기 어렵

void main()
{
	/*
	상수 : 변하지 않는 수
	변수 : 변하는 수

	상수 사용하는 이유

	특정 변수의 값을 보장받기 위해서

	*/

	int val = 500;

	const int number = 100; // 4byte 정수
	cout << number << endl;
	const int number2 = val; // 컴파일 시간에 계산

	constexpr int temp = SIZE; // 빌드 단계 중 컴파일 이전 단계에서 만들어지는 변수

	/*
	버프 스킬 / 포션 - 강해지는 거

	HP 증가량 / 공격력 / 방어력 버프 / MP 증가량

	Ability += HP 증가량 / 공겨ㄱ 

	공격력 / 방어력 / HP / MP
	*/
	
	/*
	int Attack;
	int Defence;
	int HP;
	int MP;
	4byte + 4byte + 4byte; : 변수가 많아지면 메모리(램)가 낭비  
	*/

	// 0x : 16 진수

	const int Attack =       0x0001;  // 1        0000001
	const int Defence =      0x0002;  // 2        0000010
	const int HP =           0x0004;  //          0000100
	const int MP =           0x0008;  // 8        0001000           
	const int CriticalRate = 0x0010; // 16        0010000
	const int CriticalDmg =  0x0020; // 32        0100000
	const int Range		  =  0x0040; // 64        1000000
	                                 // 59  11111
	                    
	int mybuff = Attack | Defence | HP | MP | CriticalRate | CriticalDmg;
	mybuff = mybuff ^ HP; // 끄기
	mybuff = mybuff ^ HP; // 켜기

	//cout << "HP 버프 검사 :" << (mybuff & HP) << endl;

	// 0x0004; = 4

	/*
	* 
	cout << "Attack 버프 검사 :" << (mybuff & Attack) << endl; // 11110 & 00001 = 0 
	cout << "Defence 버프 검사 :" << (mybuff & Defence) << endl; 
	cout << "HP 버프 검사 :" << (mybuff & HP) << endl;  
	cout << "MP 버프 검사 :" << (mybuff & MP) << endl; 
	cout << "CriticalRate 버프 검사 :" << (mybuff & CriticalRate) << endl;
	*/
	/*
	크리티컬 데미지 증가 버프 추가
	HP 버프 끄기
	*/



	/*
	int 4byte
	
	0000 0000 0000 0000 0000 0000 0000 0000

	position X / Y

	                65,536                    2 
	0000 0000 0000 0001 / 0000 0000 0000 0010 = 65538 
	


	0000 0000 0000 0001 / 0000 0000 0000 0010  = 65538 

	 
	& 0000 0000 0000 0000   1111 1111 1111 1111  = 0xffff

	0xf =     0000 0000 0000 1111
	0xff =    0000 0000 1111 1111
	0xfff =   0000 1111 1111 1111
	0xffff =  1111 1111 1111 1111
                                           8421    	
	                                       1111  
	
	X : 1   / Y : 2

	*/

	int position = 65538;
	
	/*
	 
	* 
	position >>= 16; // 축약형 / 상위 2비트 추출
	position = position & 0xffff; // 축약형 / 하위 2비트 추출

	cout << "X 좌표는 :" << position << endl;
	cout << "Y 좌표는 :" << position << endl; 
	*/
	//position = position >> 16; // 대입


	cout << "X 좌표는 :" << HIWORD(position) << endl;
	cout << "Y 좌표는 :" << LOWORD(position) << endl;

	HIWORD(position); // 상위 비트 값 추출
	LOWORD(position); // 하위 비트 값 추출

	/*
	꼭 해오기
	복습!!
	
	할 수 있으면 해오기
	int position;

	X 좌표 : 700;
	Y 좌표 : 500;
	
	position 상위 비트에 X 좌표 저장 / 하위 비트에 Y 좌표 저장

	cout << "X 좌표는 : " << () << endl;
	cout << "Y 좌표는 : " << () << endl;

	HIWORD 
	LOWORD 
	사용 하지 않고 만들어보기!!!!
	*/

	/*
	비트 연산이 이해가 잘 안됬고
	
	*/
}