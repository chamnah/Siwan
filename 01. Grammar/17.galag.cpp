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
	wchar_t image[10]; // �÷��̾� ���
};

Object player;

void SetBoard(const Object& obj) // ������ �Ƴ��� ���� ���۷��� ���
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
	system("mode con:cols=80 lines=45"); // âũ�� ����

	CONSOLE_CURSOR_INFO cursorInfo;
	cursorInfo.bVisible = false;
	cursorInfo.dwSize = 1; // 1 ~ 100

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);//Ŀ�� ����

	player.posX = 20;
	player.posY = 15;
	wcscpy_s(player.image, L">-O-<"); // �÷��̾� ���� ����

	while (true)
	{
		system("cls");
		
		if (_kbhit() != 0) // Ű���带 �����ٸ�,
		{
			switch (_getch()) // Ű�Է�
			{
			case 'w':
			case 'W':
				player.posY -= 1;
				break;
			default:
				break;
			}
		}
		
		//cin - Enter�� ����ϹǷ� ���⿡���� ���� �ʰ���

		SetBoard(player); // �÷��̾� �׸���

		//���� ���� ���
		for (size_t h = 0; h < BOARD_HEGIT; h++)
		{
			for (size_t w = 0; w < BOARD_WIDTH; w++)
			{
				wcout << Board[h][w];
			}

			wcout << endl;
		}

		// ���� ���� �ʱ�ȭ
		for (size_t h = 0; h < BOARD_HEGIT; h++)
		{
			for (size_t w = 0; w < BOARD_WIDTH; w++)
			{
				Board[h][w] = L' ';
			}
		}

		Sleep(20); // ��� ���ߴ� ��� 20 / 1000 ��
	}

	return 0;
}

// ����
/*
1. ��� ���� �̵��ǰ� �����
2. ���� �� ������ ������ �ʰ� ����
3. ������ ĳ���͸����
4. �� ����� ����� - Object ����ü Ȱ��
5. ������ �ٹ̱� - ��� �����

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
��ȹ
1. �����(�÷��̾�)
 - �̵� ���
 - �߻� �Է� �� - �Ѿ� ����

2. ��
 - �Ѿ� �°� ���� - ���� ����

3. �Ѿ�
 - ���� �ڵ� �̵�

4. ������
 - ���� ǥ��
 - ������ ������ ������ ���ϰ� ����(��,�÷��̾�,�Ѿ�)
*/
