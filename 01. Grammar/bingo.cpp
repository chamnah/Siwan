#include<iostream>
using namespace std;
#define WIDTH 5 //�����ϴ�
#define HEIGHT 5 //�����ϴ�
#define BOARD_MAX (WIDTH * HEIGHT) //�����ϴ�

int main()
{
	int bingoBoard[BOARD_MAX];
	
	// ������ ����
	for (int i = 0; i < BOARD_MAX; i++)
	{
		bingoBoard[i] = i + 1;
	}

	for (int i = 0; i < HEIGHT; i++)
	{
		for (int j = 0; j < WIDTH; j++)
		{
			//i == 0 -> 0 ~ 4
			//i == 1 -> 0 + 5 ~ 9(4 + 5)
			cout << bingoBoard[i * WIDTH + j] << "\t";

			if (bingoBoard[i * WIDTH + j] == 0)
			{
				cout << "*";
			}
		}
		cout << endl;
	}

	return 0;
}

// ����
// 1. �Լ�ȭ
// 2. ������ ������ �����ϰ� ���� - ���� ex) �ζ�
// 3. AI ������ - rand();

/*
��Ģ
�� ����
���� �Է� : cpu �����ǵ� ���� �ٲ� / �� �����ǵ� ���� �ٲ�
cpu ����
cpu �Է� : cpu �����ǵ� ���� �ٲ� / �� �����ǵ� ���� �ٲ�

���� ���� 3���� �ϼ��Ǹ� �¸�

AI

�� : system("cls");
1. AI �����Ǹ����
2. ���� �Է��ϸ� �� �����ǰ� AI ������ ���ÿ� ����

AI �Է�
*/
#define board_max 25
enum PlayerType
{
	PLAYER,
	AI,
	END
};
int board[PlayerType::END][board_max];

board[PlayerType::AI][0];

int CreateBoard(PlayerType type, int a)
{
	board[type];
	return 0;
}

/*
1/13 ����
1. ���� - �Լ�ȭ�ϱ� ex)�ڵ� �ߺ��Ȱ� �ִ��� �ٿ�����
2. ���� - AI �Է��ϱ� + �÷��̾�ó��
*/

/*
1/14 ����
�Լ�ȭ�ϱ� - �������
*/