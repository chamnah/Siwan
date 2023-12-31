#include <iostream>

using namespace std;

void main()
{
	int num = 0;

	while (true)
	{
		cout << "반복 출력 : " << num << endl;
		
		++num;

		if (num > 5)
		{
			break;
		}
	}


	/*
	하나 입력
	프로그램 끝
	다시 실행
	하나 입력
	프로그램 끝
	*/
}