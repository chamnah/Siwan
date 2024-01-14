#include<iostream>
using namespace std;
#define WIDTH 5 //정의하다
#define HEIGHT 5 //정의하다
#define BOARD_MAX (WIDTH * HEIGHT) //정의하다

int main()
{
	int bingoBoard[BOARD_MAX];
	
	// 빙고판 제조
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

// 숙제
// 1. 함수화
// 2. 빙고판 순서를 랜덤하게 변경 - 셔플 ex) 로또
// 3. AI 만들어보기 - rand();

/*
규칙
내 차례
숫자 입력 : cpu 빙고판도 별로 바뀜 / 내 빙고판도 별로 바뀜
cpu 차례
cpu 입력 : cpu 빙고판도 별로 바뀜 / 내 빙고판도 별로 바뀜

먼저 빙고가 3개가 완성되면 승리

AI

팁 : system("cls");
1. AI 빙고판만들기
2. 내가 입력하면 내 빙고판과 AI 빙고판 동시에 변경

AI 입력
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
1/13 숙제
1. 빙고 - 함수화하기 ex)코드 중복된거 최대한 줄여보기
2. 빙고 - AI 입력하기 + 플레이어처럼
*/

/*
1/14 숙제
함수화하기 - 정답없음
*/