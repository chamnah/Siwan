#include <iostream>
using namespace std;

void main()
{
	// 전위 연산자 / 후위 연산자

	int num = 100;

	// 전위 연산 : 가장 먼저 연산을 진행한다.
	// 후위 연산 : 가장 마지막에 연산을 진행한다.

	++num;// 전위 연산  1증가 
	num++; // 후위 연산 1증가

	--num;// 전위 연산  1감소
	num--; // 후위 연산 1감소

	//cout << ++num << endl;
	
	int val = 0;

	//cout << ++val << endl; // 1
	//cout << val++ << endl; // 1
	//cout << val << endl;   // 2

	int result;

	//result = 100 + val++;
	//cout << result << endl; // 100

	//result = 100 + val;
	//cout << result << endl; // 101

	result = 100 + ++val;
	cout << result << endl; // 

	result = 100 + (val++);
	cout << result << endl;

	++val; //val += 1; val = val + 1; 

	// 시퀀스 포인트 : 한줄의 모든 연산이 끝난 지점.



}