#include <iostream>
#include <windows.h>

using namespace std;
#define SIZE 80 // ������ �ܰ迡�� ���� ã�� ���

void main()
{
	/*
	��� : ������ �ʴ� ��
	���� : ���ϴ� ��

	��� ����ϴ� ����

	Ư�� ������ ���� ����ޱ� ���ؼ�

	*/

	int val = 500;

	const int number = 100; // 4byte ����
	cout << number << endl;
	const int number2 = val; // ������ �ð��� ���

	constexpr int temp = SIZE; // ���� �ܰ� �� ������ ���� �ܰ迡�� ��������� ����

	/*
	���� ��ų / ���� - �������� ��

	HP ������ / ���ݷ� / ���� ���� / MP ������

	Ability += HP ������ / ���ܤ� 

	���ݷ� / ���� / HP / MP
	*/
	
	/*
	int Attack;
	int Defence;
	int HP;
	int MP;
	4byte + 4byte + 4byte; : ������ �������� �޸�(��)�� ����  
	*/

	// 0x : 16 ����

	const int Attack =       0x0001;  // 1        0000001
	const int Defence =      0x0002;  // 2        0000010
	const int HP =           0x0004;  //          0000100
	const int MP =           0x0008;  // 8        0001000           
	const int CriticalRate = 0x0010; // 16        0010000
	const int CriticalDmg =  0x0020; // 32        0100000
	const int Range		  =  0x0040; // 64        1000000
	                                 // 59  11111
	                    
	int mybuff = Attack | Defence | HP | MP | CriticalRate | CriticalDmg;
	mybuff = mybuff ^ HP; // ����
	mybuff = mybuff ^ HP; // �ѱ�

	//cout << "HP ���� �˻� :" << (mybuff & HP) << endl;

	// 0x0004; = 4

	/*
	* 
	cout << "Attack ���� �˻� :" << (mybuff & Attack) << endl; // 11110 & 00001 = 0 
	cout << "Defence ���� �˻� :" << (mybuff & Defence) << endl; 
	cout << "HP ���� �˻� :" << (mybuff & HP) << endl;  
	cout << "MP ���� �˻� :" << (mybuff & MP) << endl; 
	cout << "CriticalRate ���� �˻� :" << (mybuff & CriticalRate) << endl;
	*/
	/*
	ũ��Ƽ�� ������ ���� ���� �߰�
	HP ���� ����
	*/



	/*
	int 4byte
	
	0000 0000 0000 0000 0000 0000 0000 0000

	position X / Y

	                65,536                    2 
	0000 0000 0000 0001 / 0000 0000 0000 0010 = 65538 
	


	0000 0000 0000 0001 / 0000 0000 0000 0010  = 65538 

	 
	& 0000 0000 0000 0000   1111 1111 1111 1111  = 0xffff

	0xf =     0000 0000 0000 1111
	0xff =    0000 0000 1111 1111
	0xfff =   0000 1111 1111 1111
	0xffff =  1111 1111 1111 1111
                                           8421    	
	                                       1111  
	
	X : 1   / Y : 2

	*/

	int position = 65538;
	
	/*
	 
	* 
	position >>= 16; // ����� / ���� 2��Ʈ ����
	position = position & 0xffff; // ����� / ���� 2��Ʈ ����

	cout << "X ��ǥ�� :" << position << endl;
	cout << "Y ��ǥ�� :" << position << endl; 
	*/
	//position = position >> 16; // ����


	cout << "X ��ǥ�� :" << HIWORD(position) << endl;
	cout << "Y ��ǥ�� :" << LOWORD(position) << endl;

	HIWORD(position); // ���� ��Ʈ �� ����
	LOWORD(position); // ���� ��Ʈ �� ����

	/*
	�� �ؿ���
	����!!
	
	�� �� ������ �ؿ���
	int position;

	X ��ǥ : 700;
	Y ��ǥ : 500;
	
	position ���� ��Ʈ�� X ��ǥ ���� / ���� ��Ʈ�� Y ��ǥ ����

	cout << "X ��ǥ�� : " << () << endl;
	cout << "Y ��ǥ�� : " << () << endl;

	HIWORD 
	LOWORD 
	��� ���� �ʰ� ������!!!!
	*/

	/*
	��Ʈ ������ ���ذ� �� �ȉ��
	
	*/
}