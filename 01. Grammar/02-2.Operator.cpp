// operator : 연산자 / 자체 제작 가능 + => -
// +(더하기) -(빼기) *(곱하기) /(나누기) %(나머지)
// /,% : 0을 나눌 수 없다.

#include <iostream>
using namespace std;
void main()
{
	// int temp = 10 + 10;
	// int temp = 10 - 10;
	// int temp = 10 * 10;
	// int temp = 10 / 10;
	// int temp = 10 % 10;

	/*int temp = 10;
	temp += 10;
	temp -= 10;
	temp *= 10;
	temp /= 10;
	temp %= 10;*/

	// 관계 연산자 : 양 변의 관계를 true / false로 나타내는 연산자
	// < > >= <= != ==
	/*
	int temp1, temp2;
	temp1 = 10;
	temp2 = 20;

	cout << "temp1은 temp2보다 작다." << (temp1 < temp2) << endl;
	cout << "temp1은 temp2보다 크다." << (temp1 > temp2) << endl;
	cout << "temp1은 temp2보다 작거나 같다." << (temp1 <= temp2) << endl;
	cout << "temp1은 temp2보다 크거나 같다." << (temp1 >= temp2) << endl;
	cout << "temp1과 temp2는 같다" << (temp1 == temp2) << endl;
	cout << "temp1과 temp2는 다르다" << (temp1 != temp2) << endl;
	*/
	// 논리 연산자 : 양 변의 명제의 관계를 true/false로 나타내는 연산자
	// AND(그리고) (&&) / OR(또는) (||)

	/*
	*/

	/*
	   A  AND(&&)  B   OUT	  
	   1           1   1
	   0           1   0
	   1           0   0
	   0           0   0

	   A  OR(||)  B   OUT
	   1          1    1
	   1          0    1
	   0          1    1
	   0          0    0
	*/

	/*
	int temp1, temp2, temp3;
	temp1 = 10;
	temp2 = 20;
	temp3 = 30;

	cout << "temp1은 temp2보다 작고 temp3보다 작다." << ((temp1 < temp2) && (temp1 < temp3)) << endl;
	cout << "temp1은 temp2보다 작고 temp3보다 크다" << ((temp1 > temp2) && (temp1 > temp3)) << endl;
	*/

	bool ok = true;
	bool cancle = false;
	
	cout << "참 AND 참" << (ok && ok) << endl;
	cout << "참 AND 거짓" << (ok && cancle) << endl;
	cout << "참 OR 거짓" << (ok || cancle) << endl;
	cout << "거짓 OR  거짓" << (cancle || cancle) << endl;

	// 비트단위 연산자 : 비트 단위로 논리 연산을 하는 연산자.
	// AND(&) / OR(|) /XOR(^)
	/* AND 는 둘다 참인 경우 참
	   OR  는 둘중에 하나라도 참이면 참
	   XOR 는 두개가 서로 다르면 참

	 A  AND(&)  B   OUT	  
	 1           1   1
	 0           1   0
	 1           0   0
	 0           0   0

	 A  OR(|)  B   OUT
	 1          1    1
	 1          0    1
	 0          1    1
	 0          0    0

	 A  XOR(^)  B   OUT
	 1          1    0
	 1          0    1
	 0          1    1
	 0          0    0

	 3 & 1

	  0011
	 &0001
	  0001

	  0011
	 |0001
	  0011

	  0011
	 ^0001
	  0010


	  shift 연산자 : 비트를 한쪽으로 이동 시키는 연산자
	  << , >>

	  00010 <<  00100
	  00010 >>  00001
	*/

	int temp = 2;
	temp <<= 1;
	temp >>= 2;

	cout << temp;
	// 숙제
	// 복습!!

	/*
	
	int temp, temp2;
	
	temp = 100;
	temp2 = 90;

	cout << "100 & 90" << "AND 연산 내 답은 : ()" << (100 & 90) << endl;
	cout << "100 | 90" << "OR 연산 내 답은 : ()" << (100 | 90) << endl;
	cout << "100 ^ 90" << "XOR 연산 내 답은 : ()" << (100 ^ 90) << endl;

	cout << "90 << 3" << "내 답은 : ()" << (90 << 3) << endl;
	cout << "90 >> 5" << "내 답은 : ()" << (90 >> 5) << endl;
	
	AND  1 1 1
	     0 1 0
		 1 0 0
		 0 0 0
	100 / 2  0 
	50 / 2   0
	25 / 2   1
	12 / 2   0
	6  / 2   0
	3  / 2   1
	1  / 2 0 1
    
	64 + 32 +  4  
	
	0000011
	 
	0000 0000 / 0000 0000 / 0000 0000 / 0110 0100

	1100100 >> 1 = 0110010
	0110010 >> 1 = 0011001
	0011001 >> 1 = 0001100
	0001100 >> 1 = 0000110
	0000110 >> 1 = 0000011 = 3

	512 256 128 64 32 16 8 4 2 1
	1    1   0   0  1  0 0 0 0 0
	768 + 32 = 800

	1  1  0
	0  0  0
	1  0  1
	0  1  1
	
	1011010


	800  / 3

	90

	*/

}