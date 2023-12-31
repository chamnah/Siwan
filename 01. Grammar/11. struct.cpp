#include <iostream>
using namespace std;

enum jobtype
{
	ass,
	war
};

struct Player // 커스텀 자료형(int char) // 설계도*****
{
	int hp;
	int mp;
	int attack;
	int defence;
	int money;
	char sz[10];
	jobtype type;
};

void main()
{
	//int a;
	/*Player ply = {100, 10, 50, 10, 1000};
	ply.hp = 100;
	ply.money = 1000;
	ply.attack = 10;
	ply.defence = 5;

	cout << ply.attack;*/

	/*
	텍스트 알피지
	캐릭터 만들기

	*/

	Player siwan;
	cout << "어서오시게나 용사여~~!!" << endl;
	cout << "자네의 이름은 무엇인가." << endl;

	char name[20];
	cin >> name;
	//이름 받기
	cout << "직업을 고르세요." << endl;
	//직업 맞는 능력치 넣기
	//직업 마법사면 ply에 마법사 능력치 넣기
	//직업 전사면 ply에 전사 능력치 넣기
	siwan.hp = 250;
	siwan.mp = 120;
	//siwan.name = name;

	// 나의 상태창 표시
	

	//enum 1234
	//enum 
	
	// 숙제
	/*
	enum jobtype
	1. 직업을 고르고, 어떤 직업인지 Player 구조체에 넣기
	2. Player의 직업을 나의 능력치 표시할 때 같이 출력하기

	if(player type == war)
	{
		cout << "전사";
	}

	enum jobType
	{
	   w,
	   m
	}

	Player
	jobType = job;

	나의 직업 출력하기
	*/

	/*
	포인터 - c의 수문장
	
	깃
	git - 소스 관리 프로그램
	프로그래머 - 필수 프로그램

	클라우드(구름) - 자료를 보관해주는 서비스

	github - 소스 클라우드

	언제 어디서든 내가 만든 코드 인터넷에 보관
	언제 어디서든 꺼낼 수 있음
	어제 짠 코드 오늘 짠 코드 비교해서 뭐가 달라졌는지도 볼 수 있음
	
	포인터 - c와 c++ 꽃 
	포인터 - 메모리 주소를 저장하는 자료형 int float
	
	장점 : 속도가 빠름 / 간편
	단점 : 위험하다
	const - 상수 : 변하지 않는 수
	
	게임 / 실시간 연산 필요한 곳 / AI / 로봇 / 인공위성 소프트웨어
	메모리 크기가 작은 환경
	속도가 중요한 환경

	자바 / 파이썬 / c# - 포인터x
	*/

	//const int a = 10;
	//a = 20; // 포인터로 const값 변경 가능
}