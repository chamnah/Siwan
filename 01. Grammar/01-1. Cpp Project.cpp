#include <iostream>
#include "library.h"
// namespace : 이름영역 
// 1반 김철수 2반 김철수

//namespace std
//{
//	cout;
//}
//
//namespace ttd
//{
//	cout;
//}

// namespace 정의 하는 방법
/*

*/

//1. using namespace std; - 전역 네임스페이스 선언
//2. using std::cout;
/*
using std::cout;
using std::endl;
*/
//3. std::cout / std::endl;

namespace A
{
	void func1()
	{
		std::cout << "네임 스페이스 A func1 출력입니닷!" << std::endl;
	}
}

namespace B
{
	void func1()
	{
		std::cout << "네임 스페이스 B func1 출력입니닷!" << std::endl;
	}
}
void main()
{
	//std::cout << "안녕하시\n렵니까" << std::endl << "하잇" << std::endl;

	//A::func1();
	//B::func1();

	SoccerTeam1::Messi();
	SoccerTeam2::Son();
	/*
	숙제
	네임스페이스 Siwan
	{
		void Grap()
		{
			cout << "공을 잡았다." << endl;  
		}
		 
		void Strike()
		{
			cout << "공을 잡았다." << endl;
		}

	}
	
	cpp 구현

	Siwan::Grap();
	던졌다.
	맞췄다.
	스트라이크.
	세리나모

	복습 꼼꼼히

	*/
	Siwan::Grap();


	// 출력 기능
	// endl (endline) : 개행 기능
}