#include <iostream>
using namespace std;

enum jobtype
{
	ass,
	war
};

struct Player // Ŀ���� �ڷ���(int char) // ���赵*****
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
	�ؽ�Ʈ ������
	ĳ���� �����

	*/

	Player siwan;
	cout << "����ðԳ� ��翩~~!!" << endl;
	cout << "�ڳ��� �̸��� �����ΰ�." << endl;

	char name[20];
	cin >> name;
	//�̸� �ޱ�
	cout << "������ ������." << endl;
	//���� �´� �ɷ�ġ �ֱ�
	//���� ������� ply�� ������ �ɷ�ġ �ֱ�
	//���� ����� ply�� ���� �ɷ�ġ �ֱ�
	siwan.hp = 250;
	siwan.mp = 120;
	//siwan.name = name;

	// ���� ����â ǥ��
	

	//enum 1234
	//enum 
	
	// ����
	/*
	enum jobtype
	1. ������ ����, � �������� Player ����ü�� �ֱ�
	2. Player�� ������ ���� �ɷ�ġ ǥ���� �� ���� ����ϱ�

	if(player type == war)
	{
		cout << "����";
	}

	enum jobType
	{
	   w,
	   m
	}

	Player
	jobType = job;

	���� ���� ����ϱ�
	*/

	/*
	������ - c�� ������
	
	��
	git - �ҽ� ���� ���α׷�
	���α׷��� - �ʼ� ���α׷�

	Ŭ����(����) - �ڷḦ �������ִ� ����

	github - �ҽ� Ŭ����

	���� ��𼭵� ���� ���� �ڵ� ���ͳݿ� ����
	���� ��𼭵� ���� �� ����
	���� § �ڵ� ���� § �ڵ� ���ؼ� ���� �޶��������� �� �� ����
	
	������ - c�� c++ �� 
	������ - �޸� �ּҸ� �����ϴ� �ڷ��� int float
	
	���� : �ӵ��� ���� / ����
	���� : �����ϴ�
	const - ��� : ������ �ʴ� ��
	
	���� / �ǽð� ���� �ʿ��� �� / AI / �κ� / �ΰ����� ����Ʈ����
	�޸� ũ�Ⱑ ���� ȯ��
	�ӵ��� �߿��� ȯ��

	�ڹ� / ���̽� / c# - ������x
	*/

	//const int a = 10;
	//a = 20; // �����ͷ� const�� ���� ����
}