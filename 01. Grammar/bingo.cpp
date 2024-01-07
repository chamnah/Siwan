#include<iostream>
using namespace std;
#define WIDTH 5 //정의하다
#define HEIGHT 5 //정의하다
#define BOARD_MAX (WIDTH * HEIGHT) //정의하다

int main()
{
	int bingoBoard[BOARD_MAX];
	
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
// 2. 빙고판 순서를 랜덤하게 변경 - 셔플 ex 로또
// 3. AI 만들어보기 - rand();

/*
규칙
내 차례
숫자 입력 : cpu 빙고판도 별로 바뀜 / 내 빙고판도 별로 바뀜
cpu 차례
cpu 입력 : cpu 빙고판도 별로 바뀜 / 내 빙고판도 별로 바뀜

먼저 빙고가 3개가 완성되면 승리
*/