#include <iostream>
#include <conio.h>
#include <Windows.h>
using namespace std;

#define BOARD_WIDTH 40
#define BOARD_HEGIT 30
wchar_t Board[BOARD_HEGIT][BOARD_WIDTH];

struct Object
{
	int posX, posY;
	wchar_t image[10]; // 플레이어 모습
};

Object player;

void SetBoard(const Object& obj) // 복사비용 아끼기 위해 레퍼런스 사용
{
	int imageIdx = 0;
	while (true)
	{
		if (obj.image[imageIdx] == L'\0')
		{
			break;
		}

		Board[obj.posY][obj.posX + imageIdx] = obj.image[imageIdx++];
	}
}

int main()
{
	system("mode con:cols=80 lines=45"); // 창크기 설정

	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = false;
	cursorInfo.dwSize = 1; // 1 ~ 100

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);//커서 제거

	player.posX = 20;
	player.posY = 15;
	wcscpy_s(player.image, L">-O-<"); // 플레이어 정보 세팅

	while (true)
	{
		system("cls");
		
		if (_kbhit() != 0) // 키보드를 눌렀다면,
		{
			switch (_getch()) // 키입력
			{
			case 'w':
			case 'W':
				player.posY -= 1;
				break;
			default:
				break;
			}
		}
		
		//cin - Enter를 써야하므로 여기에서는 쓰지 않겠음

		SetBoard(player); // 플레이어 그리기

		//게임 보드 출력
		for (size_t h = 0; h < BOARD_HEGIT; h++)
		{
			for (size_t w = 0; w < BOARD_WIDTH; w++)
			{
				wcout << Board[h][w];
			}

			wcout << endl;
		}

		// 게임 보드 초기화
		for (size_t h = 0; h < BOARD_HEGIT; h++)
		{
			for (size_t w = 0; w < BOARD_WIDTH; w++)
			{
				Board[h][w] = L' ';
			}
		}

		Sleep(20); // 잠시 멈추는 기능 20 / 1000 초
	}

	return 0;
}

// 숙제
/*
1. 모든 방향 이동되게 만들기
2. 게임 판 밖으로 나가지 않게 막기
3. 나만의 캐릭터만들기
4. 적 비행기 만들기 - Object 구조체 활용
5. 게임판 꾸미기 - 경계 만들기

=============================
|                           |
|                           |
|                           |
|                           |
|                           |
|                           |
|                           |
|                           |
=============================
*/


/*
기획
1. 비행기(플레이어)
 - 이동 기능
 - 발사 입력 후 - 총알 생성

2. 적
 - 총알 맞고 죽음 - 점수 오름

3. 총알
 - 위로 자동 이동

4. 게임판
 - 점수 표시
 - 게임판 밖으로 나가지 못하게 막기(적,플레이어,총알)
*/
