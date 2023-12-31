#include <iostream>
using namespace std;

void main()
{
	if (false) // 만약에 true 라면
	{
		//...
	}
	else if (true) // 만약 true라면 
	{
		//...
	}
	else if (true) // 만약 true라면 
	{
		//...
	}
	else if (true) // 만약 true라면 
	{
		//...
	}
	else if (true) // 만약 true라면 
	{
		//...
	}
	else if (true) // 만약 true라면 
	{
		//...
	}
	else if (true) // 만약 true라면 
	{
		//...
	}
	else if (true) // 만약 true라면 
	{
		//...
	}
	else
	{
		//...
	}

	// if 조건문
	/*
	if 문 : () 조건이 참(true) 실행 / 거짓(false) 실행 안하고 다음 조건으로 넘어감


	1. 첫번째 if 조건은 생략 불가
	2. else와 else if 생략 가능
	3. if와 else는 한개만 만들 수 있음
	4. else if는 무한대로 만들 수 있음
	*/


	const int Attack = 0x0001; // 1  0001 
	const int Defence = 0x0002; // 2  0010
	const int HP = 0x0004; // 4  0100

	int myBuff = Attack | HP;

	/*if (myBuff & Defence)
	{
		cout << "나는 방어 버프가 있어!!!" << endl;
	}
	else
	{
		cout << "나는 방어 버프가 없다!!!" << endl;
	}*/

	/*if ((myBuff & Defence) == false)
	{
		cout << "나는 방어 버프가 있어!!!" << endl;
	}
	else if (myBuff & Attack)
	{
		cout << "나는 공격 버프가 있어!!!" << endl;
	}
	else if (myBuff & HP)
	{
		cout << "나는 체력 버프가 있어!!!" << endl;
	}
	else
	{
		cout << "나는 버프가 없다!!!" << endl;
	}*/

	/*if (false) 
	{
		cout << "첫 번째" << endl;
	}
	else if (false)
	{
		cout << "두 번째" << endl;
	}
	else if (true)
	{
		cout << "세 번째" << endl;
	}
	else
	{
		cout << "마지막" << endl;
	}*/

	/*if (true)
		cout << "한줄 조건 출력 입니다. " << endl;
	else
		cout << "마지막 조건 출력 입니다. " << endl;*/


	if (true)
		//...
		
	// 이거는 조건 체크
	if (false)
	{
		if (true)
		{
			cout << "First" << endl;
		}
		else if (true)
		{
			if (true)
			{
				cout << "Second" << endl;
			}
		}
	}


	// 이거는 플레이어 싸우는 로직
	{

	}

	int num;
	cout << "나이를 입력하세요." << endl;
	cin >> num;

	if (num <= 10)
	{
		cout << "당신은 아기 군요." << endl;
	}
	else if (num > 10 && num < 20)
	{
		cout << "당신은 청소년이군요." << endl;
	}
	else if (num >= 20 && num < 30)
	{
		cout << "당신은 청년이군요." << endl;
	}
	else
	{
		cout << "당신은 늙었군요." << endl;
	}

	int num;
	cout << "선택지를 입력하세요." << endl;
	cout << "1. 좋음 2. 나쁨 3. 아주 나쁨" << endl;
	cin >> num;

	if (num == 1)
	{
		cout << "당신은 기분이 좋군요." << endl;
	}

	/*
	숙제
	복습!!!!!
	
	심리테스트 만들어보기
	*/
}