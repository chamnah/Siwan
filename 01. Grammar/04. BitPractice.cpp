#include <iostream>
#include <windows.h>
using namespace std;

void main()
{
	const int Attack	= 0x0001; // 1  0001 
	const int Defence	= 0x0002; // 2  0010
	const int HP		= 0x0004; // 4  0100

	/*
	Attack =  0001
	Defence = 0010
	          
	myBuff = 0111
			 0100
			 0000(0 = false)
			  AND(&)
			  

	myBuff = 0111
	         0100

	myBuff = 0011
	XOR : 서로 다르면 참 / 같으면 거짓
	*/
	int myBuff = Attack | Defence | HP;

	bool checkHP = false;
	checkHP = myBuff & HP;
	cout << "Hp Check 결과 값은 : " << checkHP << endl;

	/*
	myBuff =  0111
	         ^0100

	myBuff =  0011
	         &0100
			  0000 = false
	*/

	myBuff ^= HP; // myBuff = myBuff ^ HP;
	checkHP = myBuff & HP;
	cout << "Hp Check 결과 값은 : " << checkHP << endl;

	/*
	myBuff =  0011
			 ^0100
			  0111

	myBuff =  0111
			 &0100
			  0100 = true
	*/
	myBuff ^= HP;
	checkHP = myBuff & HP;
	cout << "Hp Check 결과 값은 : " << checkHP << endl;

	/*
	
	int position; 4byte;
	
	X : 1 / 2byte - 상위 비트 
	Y : 2 / 2byte - 하위 비트
	
	1byte = 8bit
	00000000 00000000 / 00000000 00000000
	       (X 저장)           (Y 저장)          
	*/

	int X = 0; // 00000000 00000000 / 00000000 00000000
	X = 1; // 00000000 00000000 / 00000000 00000001
	X <<= 16; // 00000000 00000001 / 00000000 00000000
	
	int Y = 0; // 00000000 00000000 / 00000000 00000000
	Y = 2;// 00000000 00000000 / 00000000 00000010


	int position = 0; // 00000000 00000000 / 00000000 00000000
	position = 2; // 00000000 00000000 / 00000000 00000010
	/*
	 00000000 00000001 / 00000000 00000000
	|00000000 00000000 / 00000000 00000010
	 00000000 00000001 / 00000000 00000010
	*/

	position = X | Y; // 00000000 00000001 / 00000000 00000010

	X = position >> 16; // 00000000 00000000 00000000 00000001
	cout << "X 좌표 : ()" << X << endl;

	// 00000000 00000001 / 00000000 00000010
	
	
	// 

	//Y = position << 16 ; //00000000 00000010 00000000 00000000
	//Y = Y >> 16 ; //00000000 000000 00000000 00000010

	Y = position & 0xffff;

		// 0xf  1111
		// 0xff 1111 1111

		//          0000 0000 0000 0001 0000 0000 0000 0010      
		// 0xffff & 0000 0000 0000 0000 1111 1111 1111 1111
		//          0000 0000 0000 0000	0000 0000 0000 0010	
		// LOWORD();

}