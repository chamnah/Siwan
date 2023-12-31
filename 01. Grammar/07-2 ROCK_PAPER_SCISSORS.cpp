#include <iostream>
#include <Windows.h>
#pragma execution_character_set("utf-8")
using namespace std;

enum ROCK_PAPER_SCISSORS
{
	ROCK = 1,
	PAPER,
	SCISSORS
};

void main()
{
	srand(time(NULL)); // rand 함수 초기화

	int userNum = 0;
	int computerNum = 0;
	

	//char = 1byte;  // 영어 숫자
	//wchar = 2byte; // 한글 특수문자 중국어 각종 외국어
	SetConsoleOutputCP(65001);
	SetConsoleTitle(L"주먹 가위 보 게임"); // 콘솔창 제목 짓기
	system("mode con:cols=67 lines=36"); // 창 크기

	while (true)
	{
		system("cls"); // 콘솔창에 적힌 모든 문자 제거

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		cout << "ROCK PAPER SCISSORS" << endl;
		cout << "	⠀⠀⠀⠀⠀⣠⡴⠖⠒⠲⠶⢤⣄⡀⠀ ⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⠀  ⠀⣠⡴⠖⠒⢶⣄⠀⠀⠀⠀⠀⠀⠀		 " << endl;
		cout << "	⠀⠀⠀⢀⡾⠁⠀⣀⠔⠁⠀ ⠈⠙⠷⣤⠦⣤⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀   ⠀⢀⡼⠋⠀ ⠀⠀⢀⡿⠀⠀⠀⠀⠀⠀⠀		" << endl;
		cout << "	 ⣠⠞⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠘⢧⠈⢿⡀⢠⡶⠒⠳⠶⣄⠀⠀ ⠀ ⠀⣴⠟⠁ 　 ⠀⣰⠏⢀⣤⣤⣄⡀⠀⠀	  " << endl;
		cout << "	⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠟⠛⠛⠃⠸⡇⠈⣇⠸⡇⠀⠀⠀⠘⣇⠀ ⠀⣠⡾⠁⠀⠀ ⠀⢀⣾⣣⡴⠚⠉　⠈⠹⡆⠀	   " << endl;
		cout << "	⣹⡷⠤⠤⠤⠄⠀⠀⠀⠀⢠⣤⡤⠶⠖⠛⠀⣿⠀⣿⠀⢻⡄⠀⠀⠀⢻⣠⡾⠋⠀　⠀⠀⣠⡾⠋⠁⠀⠀　⠀⢀⣠⡾⠃⠀	  " << endl;
		cout << "	⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡤⠖⠋⢀⣿⣠⠏⠀⠀⣿⠀⠀⠀⠘⠉⠀⠀⠀⠀⠀⡰⠋⠀⠀⠀⠀　⣠⠶⠋⠁⠀⠀⠀		" << endl;
		cout << "	⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠁⠀⠀⠠⡏⠀⠀⠀⠀⠀⠀⠀⠀⠀⠐⠁⠀ ⠀⠀⢀⣴⡿⠥⠶⠖⠛⠛⢶⡄		" << endl;
		cout << "	⠀⠉⢿⡋⠉⠉⠁⠀⠀⠀⠀⠀⢀⣠⠾⠋⠀⠀⠀⠀⢀⣰⡇⠀⠀⢀⡄⠀⠀⠀⠀⠀⠀⠀⠀⢀⡴⠋⠀⠀⠀⠀⠀⢀⣠⠼⠃		" << endl;
		cout << "	⠀⠀⠈⠛⠶⠦⠤⠤⠤⠶⠶⠛⠋⠁⠀⠀⠀⠀⠀⠀⣿⠉⣇⠀⡴⠟⠁⣠⡾⠃⠀⠀⠀⠀⠀⠈⠀⠀⠀⣀⣤⠶⠛⠉⠀⠀⠀	   " << endl;
		cout << "	⠀⠀⠀⠀⢀⣠⣤⣀⣠⣤⠶⠶⠒⠶⠶⣤⣀⠀⠀⠀⢻⡄⠹⣦⠀⠶⠛⢁⣠⡴⠀⠀⠀⠀⠀⠀⣠⡶⠛⠉⠀⠀⠀⠀⠀⠀⠀	   " << endl;
		cout << "	⠀⠀⢀⡴⠋⣠⠞⠋⠁⠀⠀⠀⠀⠙⣄⠀⠙⢷⡀⠀⠀⠻⣄⠈⢷⣄⠈⠉⠁⠀⠀⠀⢀⣠⡴⠟⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀	   " << endl;
		cout << "	⠀⢀⡾⠁⣴⠋⠰⣤⣄⡀⠀⠀⠀⠀⠈⠳⢤⣼⣇⣀⣀⠀⠉⠳⢤⣭⡿⠒⠶⠶⠒⠚⠋⠁⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀	  " << endl;
		cout << "	⠀⢸⠃⢰⠇⠰⢦⣄⡈⠉⠀⠀⠀⠀⠀⠀⠀⠀⠈⠉⠉⠉⠛⠛⠓⠲⢦⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀		" << endl;
		cout << "	⠀⠸⣧⣿⠀⠻⣤⡈⠛⠳⠆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀ ⢻⡆⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀	  " << endl;
		cout << "	⠀⠀⠈⠹⣆⠀⠈⠛⠂⠀⠀⠀⠀⠀⠀⠈⠐⠒⠒⠶⣶⣶⠶⠤⠤⣤⣠⡼⠃⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀		" << endl;
		cout << "	⠀⠀⠀⠀⠹⣦⡀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠙⠳⢦⣀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀		  " << endl;
		cout << "	⠀⠀⠀⠀⠀⠈⠻⣦⣀⠀⠀⠀⠀⠐⠲⠤⣤⣀⡀⠀⠀⠀⠀⠀⠉⢳⡄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀		 " << endl;
		cout << "	⠀⠀⠀⠀⠀⠀⠀⠀⠉⠛⠶⠤⠤⠤⠶⠞⠋⠉⠙⠳⢦⣄⡀⠀⠀⠀⡷⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀		 " << endl;
		cout << "⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀　　　　　　　⠈⠙⠳⠦⠾⠃" << endl << endl;

		cout << "1. 주먹" << endl;
		cout << "2. 보" << endl;
		cout << "3. 가위" << endl;
		cout << "4. 종료" << endl;

		cin >> userNum;

		computerNum = rand() % 3 + 1; // 0 ~ 2 -> 1 ~ 3 

		switch (userNum)
		{
		case ROCK:
			break;
		case PAPER:
			break;
		case SCISSORS:
			break;
		default:
			break;
		}

		switch (computerNum)
		{
		case ROCK:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_GREEN);
			cout << "⠀⠀⠀⠀⠀⣠⡴⠖⠒⠲⠶⢤⣄⡀" << endl;
			cout << "⠀⠀⠀⢀⡾⠁⠀⣀⠔⠁⠀ ⠈⠙⠷⣤⠦⣤⡀" << endl;
			cout << " ⣠⠞⠛⠛⠛⠋⠉⠀⠀⠀⠀⠀⠀⠀⠘⢧⠈⢿⡀" << endl;
			cout << "⣿⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠟⠛⠛⠃⠸⡇⠈⣇" << endl;
			cout << "⣹⡷⠤⠤⠤⠄⠀⠀⠀⠀⢠⣤⡤⠶⠖⠛⠀⣿⠀⣿" << endl;
			cout << "⡟⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡤⠖⠋⢀⣿⣠⠏" << endl;
			cout << "⢿⣄⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⣠⡾⠋⠁" << endl;
			cout << "⠀⠉⢿⡋⠉⠉⠁⠀⠀⠀⠀⠀⢀⣠⠾⠋" << endl;
			cout << "⠀⠀⠈⠛⠶⠦⠤⠤⠤⠶⠶⠛⠋⠁" << endl;
			break;
		case PAPER:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_BLUE);
			break;
		case SCISSORS:
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), FOREGROUND_RED);
			break;
		default:
			break;
		}

		switch (userNum)
		{
		case ROCK:
			break;
		case PAPER:
			break;
		case SCISSORS:
			break;
		default:
			break;
		}



		switch (userNum)
		{
		case ROCK: // 주먹이라면

			if (computerNum == ROCK)
			{
				cout << "비겼습니다." << endl;
			}
			else if (computerNum == PAPER)
			{
				cout << "졌습니다." << endl;
			}
			else if (computerNum == SCISSORS)
			{
				cout << "이겼습니다." << endl;
			}

			break;
		case PAPER:// 보라면 
			if (computerNum == ROCK)
			{
				cout << "이겼습니다." << endl;
			}
			else if (computerNum == PAPER)
			{
				cout << "비겼습니다." << endl;
			}
			else if (computerNum == SCISSORS)
			{
				cout << "졌습니다." << endl;
			}
			break;
		case SCISSORS: // 가위라면
			if (computerNum == ROCK)
			{
				cout << "졌습니다." << endl;
			}
			else if (computerNum == PAPER)
			{
				cout << "이겼습니다." << endl;
			}
			else if (computerNum == SCISSORS)
			{
				cout << "비겼습니다." << endl;
			}
			break;
		default:
			break;
		}

		system("pause");
	}


	/*
	특수 문자를 출력하려면 문자 인코딩 변경
	한국어에 맞는 문자 인코딩 기본
	*/

	/*
	숙제
	
	while 문 활용해서 강화 기능 만들기

	0강 ~ 9강까지 강화가 가능하도록

	1. 강화하기 - 강화 시도
	2. 종료

	현재 강화 수치는 : 3강

	강화 결과 : 성공
	            실패

	0강

	게임머니 / 아이템

	1강 
	2강
	3강
	*/
}

/*
22일날 시험 끝

9월 2,3일
23일, 24일

2일,23일 6시
3일 24 12시

다른날 보충을 잡아서 하기
*/


