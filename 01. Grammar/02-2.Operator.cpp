// operator : ������ / ��ü ���� ���� + => -
// +(���ϱ�) -(����) *(���ϱ�) /(������) %(������)
// /,% : 0�� ���� �� ����.

#include <iostream>
using namespace std;
void main()
{
	// int temp = 10 + 10;
	// int temp = 10 - 10;
	// int temp = 10 * 10;
	// int temp = 10 / 10;
	// int temp = 10 % 10;

	/*int temp = 10;
	temp += 10;
	temp -= 10;
	temp *= 10;
	temp /= 10;
	temp %= 10;*/

	// ���� ������ : �� ���� ���踦 true / false�� ��Ÿ���� ������
	// < > >= <= != ==
	/*
	int temp1, temp2;
	temp1 = 10;
	temp2 = 20;

	cout << "temp1�� temp2���� �۴�." << (temp1 < temp2) << endl;
	cout << "temp1�� temp2���� ũ��." << (temp1 > temp2) << endl;
	cout << "temp1�� temp2���� �۰ų� ����." << (temp1 <= temp2) << endl;
	cout << "temp1�� temp2���� ũ�ų� ����." << (temp1 >= temp2) << endl;
	cout << "temp1�� temp2�� ����" << (temp1 == temp2) << endl;
	cout << "temp1�� temp2�� �ٸ���" << (temp1 != temp2) << endl;
	*/
	// �� ������ : �� ���� ������ ���踦 true/false�� ��Ÿ���� ������
	// AND(�׸���) (&&) / OR(�Ǵ�) (||)

	/*
	*/

	/*
	   A  AND(&&)  B   OUT	  
	   1           1   1
	   0           1   0
	   1           0   0
	   0           0   0

	   A  OR(||)  B   OUT
	   1          1    1
	   1          0    1
	   0          1    1
	   0          0    0
	*/

	/*
	int temp1, temp2, temp3;
	temp1 = 10;
	temp2 = 20;
	temp3 = 30;

	cout << "temp1�� temp2���� �۰� temp3���� �۴�." << ((temp1 < temp2) && (temp1 < temp3)) << endl;
	cout << "temp1�� temp2���� �۰� temp3���� ũ��" << ((temp1 > temp2) && (temp1 > temp3)) << endl;
	*/

	bool ok = true;
	bool cancle = false;
	
	cout << "�� AND ��" << (ok && ok) << endl;
	cout << "�� AND ����" << (ok && cancle) << endl;
	cout << "�� OR ����" << (ok || cancle) << endl;
	cout << "���� OR  ����" << (cancle || cancle) << endl;

	// ��Ʈ���� ������ : ��Ʈ ������ �� ������ �ϴ� ������.
	// AND(&) / OR(|) /XOR(^)
	/* AND �� �Ѵ� ���� ��� ��
	   OR  �� ���߿� �ϳ��� ���̸� ��
	   XOR �� �ΰ��� ���� �ٸ��� ��

	 A  AND(&)  B   OUT	  
	 1           1   1
	 0           1   0
	 1           0   0
	 0           0   0

	 A  OR(|)  B   OUT
	 1          1    1
	 1          0    1
	 0          1    1
	 0          0    0

	 A  XOR(^)  B   OUT
	 1          1    0
	 1          0    1
	 0          1    1
	 0          0    0

	 3 & 1

	  0011
	 &0001
	  0001

	  0011
	 |0001
	  0011

	  0011
	 ^0001
	  0010


	  shift ������ : ��Ʈ�� �������� �̵� ��Ű�� ������
	  << , >>

	  00010 <<  00100
	  00010 >>  00001
	*/

	int temp = 2;
	temp <<= 1;
	temp >>= 2;

	cout << temp;
	// ����
	// ����!!

	/*
	
	int temp, temp2;
	
	temp = 100;
	temp2 = 90;

	cout << "100 & 90" << "AND ���� �� ���� : ()" << (100 & 90) << endl;
	cout << "100 | 90" << "OR ���� �� ���� : ()" << (100 | 90) << endl;
	cout << "100 ^ 90" << "XOR ���� �� ���� : ()" << (100 ^ 90) << endl;

	cout << "90 << 3" << "�� ���� : ()" << (90 << 3) << endl;
	cout << "90 >> 5" << "�� ���� : ()" << (90 >> 5) << endl;
	
	AND  1 1 1
	     0 1 0
		 1 0 0
		 0 0 0
	100 / 2  0 
	50 / 2   0
	25 / 2   1
	12 / 2   0
	6  / 2   0
	3  / 2   1
	1  / 2 0 1
    
	64 + 32 +  4  
	
	0000011
	 
	0000 0000 / 0000 0000 / 0000 0000 / 0110 0100

	1100100 >> 1 = 0110010
	0110010 >> 1 = 0011001
	0011001 >> 1 = 0001100
	0001100 >> 1 = 0000110
	0000110 >> 1 = 0000011 = 3

	512 256 128 64 32 16 8 4 2 1
	1    1   0   0  1  0 0 0 0 0
	768 + 32 = 800

	1  1  0
	0  0  0
	1  0  1
	0  1  1
	
	1011010


	800  / 3

	90

	*/

}