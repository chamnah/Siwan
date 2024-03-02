#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <time.h>
using namespace std;

#define BOARD_WIDTH 40
#define BOARD_HEGIT 30
#define BULLET_COOLTIME 1
wchar_t Board[BOARD_HEGIT][BOARD_WIDTH];

struct Object
{
	int posX, posY;
	wchar_t image[10]; // �÷��̾� ���
};

enum DirectionType
{
	Up,
	Down
};

Object player;
Object bullet[30]; // �Ѿ� ������ ���
time_t bulletDeltaTime = 0;

void MoveBullet(DirectionType type)
{
	type == //
}

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

	wcout.imbue(locale("Kor"));

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
			case ' ':
			{


				// �����̽��� ������ �ð� üũ
				bool CoolTimefunc(bulletDeltaTime, BULLET_COOLTIME)
				{
					//��Ÿ�� ��� �� ��ȯ
				}

				time_t currentTime = clock(); // ���� �帥 �ð� ��ȯ
				double diffTime = static_cast<double>((currentTime - bulletDeltaTime)) / CLOCKS_PER_SEC;

				if (diffTime >= BULLET_COOLTIME)
				{
					bulletDeltaTime = clock();
					// �Ѿ� ����
				}
			}
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

		wcout << endl;
		wcout << L"����";

		Sleep(20); // ��� ���ߴ� ��� 20 / 1000 ��
	}

	return 0;
}

// 02/24 ����
/*
1. ��� ���� �̵��ǰ� �����
2. ���� �� ������ ������ �ʰ� ����
3. ������ ĳ���͸����
4. �� ����� ����� - Object ����ü Ȱ��
5. ������ �ٹ̱� - ��� �����

=================>-0-<========
|                           |
|                           |
|                           |
|                           |
|                           |
|                           |
|                           |
|                           |
=============================


// 02/25 ����
1. ��輱 �����θ� �̵� �ǵ��� ����(�÷��̾�, ��)
2. �Լ�ȭ - �뵵����
3. �Ѿ˸����
   - �����̽��ٸ� ������, �Ѿ��� ���� �� �̵�
     < ���� : �÷��̾� ��ġ���� ����
	 < ���� �������� ��� �̵�
	 < ���� ��輱�� �����Ѵٸ� �Ѿ� ����
4. �Ѿ˰� ���� �ε����� �� ���� + �Ѿ� ���� +���� (�ð� ������ �غ���)
5. �ʼ� ���� : ���� - cpp�ļż� ���� ������
*/

/* 03/02 ����
1. �Լ�ȭ �ϱ� - �뵵����
1-1 �÷��̾� �Ѿ� / �� �Ѿ� - �Լ�ȭ ���
2. �����Ѱ� ����
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
