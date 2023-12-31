#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;

void main()
{
	//랜덤 함수 : 무작위로 임의의 값이 나오는 함수 
	srand(time(NULL)); // 실제 실무에서 랜덤 알고리즘

	// seed 0
	/*cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;*/

	// rand() : seed에 해당하는 랜덤 난수를 발생
	// srand() : seed를 변경하여 초기화하는 함수
	// time(NULL) : UTC(세계 협정 시) : 1970년 1월 1일 0시 0분 / 2023년 08월 20일 6시 23분 00초     

	
	// 내가 무기 강화 / 피파 카드 강화 10% 1% 할 때 사용
	// 1. 내가 원하는 값의 범위로 변경

	//25614 = 0 ~ 99
	
	//25614 % 100 = 14

	//cout << rand() % 100 << endl;
	//cout << rand() % 100 << endl;
	//cout << rand() % 100 << endl;
	//cout << rand() % 100 << endl;
	//cout << rand() % 100 << endl; // 0 ~ 99
	//
	//cout << (rand() % 100) + 1 << endl; // 1 ~ 100

	// 1 ~ 100

	// 200 ~ 500

	/*
	rand() % 300 = 201 ~ 500 
	rand() % 301 = 0 ~ 300 + 200 
	*/

	/*
	1 ~ 3 100프로 성공 
	4 ~ 6 50 프로 성공
	7 ~ 9 25 프로 성공
	*/

	int num;
	cout << "강화할 수치를 입력하세요." << endl;
	cout << "1 ~ 9까지 수치를 입력해주세요." << endl;
	cin >> num;

	if (num <= 3)
	{
		cout << "업그레이드 성공 하셨습니다!!!" << endl;
	}
	// 
	else if (num > 3 && num < 7)
	{
		int rate = (rand() % 100) + 1;
		if (rate <= 50)
		{
			cout << "업그레이드 성공 하셨습니다!!!" << endl;
		}
		else
		{
			cout << "업그레이드 실패 하셨습니다!!!" << endl;
		}
	}

	/*
	가위, 바위, 보
	
	1. 질문 / 1. 가위, 2. 바위, 3.보 중 하나를 선택하세요.
	2. 입력 받는다.
	3. 컴퓨터 : 1 ~ 3 하나를 rand를 이용해서 값을 내뱉는다.
	4. if 조건을 이용해서 결과값을 출력한다.
	*/

	system("pause");

	/*
	로또 생성기

	rand() 7 띄우기
	*/

}