// �ڷ��� : �����͸� ���� ����
/*
  ������ �ڷ��� : ���ڸ� �����Ѵ�. -0000 ~ 00000
  �Ǽ��� �ڷ��� : �Ҽ��� �����Ѵ�. -0000.0000 ~ 0000.0000
  ���� �ڷ���   : ������ �����Ѵ�. true / false
  ���� �ڷ���   : ���ڸ� �����Ѵ�. "�ȳ��ϼ���."
*/

/* ������ ũ��
bit : ��ǻ�Ϳ��� ������ �� �ִ� ���� ���� ���� - 0,1
1byte : 8bit     0000 0000 
1kb   : 1024byte 
1mb   : 1024kb
1gb   : 1024mb
1tb   : 1024gb
*/


/*
1byte = 8bit

0000 0000

-2^7 ~ 0 ~ 2^7 - 1
0000 0000 0000 0000

-2^15 ~ 0 ~ 2^15
*/

/*
* ���� ����ϴ� �ڷ��� 
����      |    �뷮(ũ��)    |   ��� ������  |   ǥ�� ����                      
*bool      |     1byte        |     ����       |  true / false                    
*char      |     1byte        |     ����       |  -128 ~ 127  
short     |     2byte        |     ����       |  -32768 ~ 32767(-2^15 ~ 2^15)
*int       |     4byte        |     ����       |  -21�� ~ 21��  (-2^31 ~ 2^31)
long      |     4byte        |     ����       |  -21�� ~ 21��  (-2^31 ~ 2^31)
long long|     8byte        |     ����       |  -2^63 ~ 2^63
*float     |     4byte        |     �Ǽ�       |
double    |     8byte        |     �Ǽ�       |
*/

#include <iostream>

using namespace std;
// int : ���� ��ȯ
// void : ��ȯ �Ұ� ����.
void main()
{
	bool check = true; // ���� �ʱ�ȭ
	bool check1;       // ���� ����
	check1 = false;    // ����

	// true  : 1 / 0�� �ƴ� ��
	// false : 0

	check1 = 100;
	//cout << "BOOL : " << check1;

	/*
	���� �̸� ������
	Ư������ ��� �Ұ� (_�� ���)bool !temp;
	�� �տ� ���� ��� �Ұ� bool 1_temp;
	�ѱ� �ǵ��� ���� ����
	*/

	// "aaafafaf"
	// ASC Code�� �̿��Ͽ� ���ڿ� ���� ��ȯ�ؼ� ����Ѵ�.
	//char text = 'a'; // char ''�� �Ѱ��� ���ڸ� ���� ����
	char text = 97;
	cout << text ;

	// ���� �÷ο� : �޸� ������ ����� ����
	//short number = 32767 + 1;
	//long long
	//long
	//int
	//short number = 10;
	//number = 100;
	//cout << number;

	float number = 0.1f;  // 4byte
	double number2 = 0.1; // 8byte

	number = number2; // ū �ڷ����� ���� �� ���� �ڷ����� ������ �����Ͱ� �߸� �� �ִ�.


	int temp; // 21�� 30�� 

	//unsigned �ڷ���
	// ������ ǥ������ �ʰ� ����� �� ū �������� ������ �� �ִ�.
	//unsigned int temp = 42��;
	unsigned short temp;
	short temp;

	/*
	int 21�� 
	�ٶ��� ���� : ���� �����÷ο� ���ܼ� ������ �߻�
	��Ʃ�� : ��ȸ�� - ���� ������Ÿ�� - 
	*/
}