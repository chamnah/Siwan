#include <iostream>
using namespace std;

void main()
{
	if (false) // ���࿡ true ���
	{
		//...
	}
	else if (true) // ���� true��� 
	{
		//...
	}
	else if (true) // ���� true��� 
	{
		//...
	}
	else if (true) // ���� true��� 
	{
		//...
	}
	else if (true) // ���� true��� 
	{
		//...
	}
	else if (true) // ���� true��� 
	{
		//...
	}
	else if (true) // ���� true��� 
	{
		//...
	}
	else if (true) // ���� true��� 
	{
		//...
	}
	else
	{
		//...
	}

	// if ���ǹ�
	/*
	if �� : () ������ ��(true) ���� / ����(false) ���� ���ϰ� ���� �������� �Ѿ


	1. ù��° if ������ ���� �Ұ�
	2. else�� else if ���� ����
	3. if�� else�� �Ѱ��� ���� �� ����
	4. else if�� ���Ѵ�� ���� �� ����
	*/


	const int Attack = 0x0001; // 1  0001 
	const int Defence = 0x0002; // 2  0010
	const int HP = 0x0004; // 4  0100

	int myBuff = Attack | HP;

	/*if (myBuff & Defence)
	{
		cout << "���� ��� ������ �־�!!!" << endl;
	}
	else
	{
		cout << "���� ��� ������ ����!!!" << endl;
	}*/

	/*if ((myBuff & Defence) == false)
	{
		cout << "���� ��� ������ �־�!!!" << endl;
	}
	else if (myBuff & Attack)
	{
		cout << "���� ���� ������ �־�!!!" << endl;
	}
	else if (myBuff & HP)
	{
		cout << "���� ü�� ������ �־�!!!" << endl;
	}
	else
	{
		cout << "���� ������ ����!!!" << endl;
	}*/

	/*if (false) 
	{
		cout << "ù ��°" << endl;
	}
	else if (false)
	{
		cout << "�� ��°" << endl;
	}
	else if (true)
	{
		cout << "�� ��°" << endl;
	}
	else
	{
		cout << "������" << endl;
	}*/

	/*if (true)
		cout << "���� ���� ��� �Դϴ�. " << endl;
	else
		cout << "������ ���� ��� �Դϴ�. " << endl;*/


	if (true)
		//...
		
	// �̰Ŵ� ���� üũ
	if (false)
	{
		if (true)
		{
			cout << "First" << endl;
		}
		else if (true)
		{
			if (true)
			{
				cout << "Second" << endl;
			}
		}
	}


	// �̰Ŵ� �÷��̾� �ο�� ����
	{

	}

	int num;
	cout << "���̸� �Է��ϼ���." << endl;
	cin >> num;

	if (num <= 10)
	{
		cout << "����� �Ʊ� ����." << endl;
	}
	else if (num > 10 && num < 20)
	{
		cout << "����� û�ҳ��̱���." << endl;
	}
	else if (num >= 20 && num < 30)
	{
		cout << "����� û���̱���." << endl;
	}
	else
	{
		cout << "����� �ľ�����." << endl;
	}

	int num;
	cout << "�������� �Է��ϼ���." << endl;
	cout << "1. ���� 2. ���� 3. ���� ����" << endl;
	cin >> num;

	if (num == 1)
	{
		cout << "����� ����� ������." << endl;
	}

	/*
	����
	����!!!!!
	
	�ɸ��׽�Ʈ ������
	*/
}