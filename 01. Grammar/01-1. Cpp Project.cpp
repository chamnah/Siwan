#include <iostream>
#include "library.h"
// namespace : �̸����� 
// 1�� ��ö�� 2�� ��ö��

//namespace std
//{
//	cout;
//}
//
//namespace ttd
//{
//	cout;
//}

// namespace ���� �ϴ� ���
/*

*/

//1. using namespace std; - ���� ���ӽ����̽� ����
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
		std::cout << "���� �����̽� A func1 ����Դϴ�!" << std::endl;
	}
}

namespace B
{
	void func1()
	{
		std::cout << "���� �����̽� B func1 ����Դϴ�!" << std::endl;
	}
}
void main()
{
	//std::cout << "�ȳ��Ͻ�\n�ƴϱ�" << std::endl << "����" << std::endl;

	//A::func1();
	//B::func1();

	SoccerTeam1::Messi();
	SoccerTeam2::Son();
	/*
	����
	���ӽ����̽� Siwan
	{
		void Grap()
		{
			cout << "���� ��Ҵ�." << endl;  
		}
		 
		void Strike()
		{
			cout << "���� ��Ҵ�." << endl;
		}

	}
	
	cpp ����

	Siwan::Grap();
	������.
	�����.
	��Ʈ����ũ.
	��������

	���� �Ĳ���

	*/
	Siwan::Grap();


	// ��� ���
	// endl (endline) : ���� ���
}