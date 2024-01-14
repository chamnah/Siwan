#include <iostream>
#include <Windows.h>
#pragma execution_character_set("utf-8")
using namespace std;

/*
함수

코드 중복된 경우
기능을 분할하기 위한 용도

*/

enum ROCK_PAPER_SCISSORS
{
	ROCK = 1,
	PAPER,
	SCISSORS
};

void PrintTitle()
{
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
}
void PrintResult(int userNum, int computerNum)
{
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
}
int GetUserInput()
{
	int userNum = 0;
	cin >> userNum;
	return userNum;
}
int GetRandom(int begin, int end)
{
	end = end - begin;
	return rand() % end + begin; // 0 + begin ~ end + (begin - begin)
}
void PrintInput(int num)
{
	switch (num)
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
		break;
	case SCISSORS:
		break;
	default:
		break;
	}
}

void main()
{
	srand(time(NULL)); // rand 함수 초기화

	int userNum = 0;
	int computerNum = 0;

	SetConsoleOutputCP(65001);
	SetConsoleTitle(L"주먹 가위 보 게임"); // 콘솔창 제목 짓기
	system("mode con:cols=67 lines=36"); // 창 크기

	while (true)
	{
		system("cls"); // 콘솔창에 적힌 모든 문자 제거

		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

		PrintTitle();

		userNum = GetUserInput();

		computerNum = GetRandom(100, 3000);

		PrintInput(userNum);
		PrintInput(computerNum);
		PrintResult(userNum, computerNum);
		system("pause");
	}
}