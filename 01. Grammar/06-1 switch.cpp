#include <iostream>
using namespace std;

/*
enum : ������
�پ��� ���¿� �̸��� �Űܼ� ���ϰ� ����ϴ� �뵵 / ����ȯ ����

enum class : ������
enum�� ���� �뵵�� ��� / ����ȯ �Ұ���(����ȯ�� ������ ����Ѵ�.)
*/

/*
	����
	����!!!!!!!!!!!!!

	���Ǳ� �����

	enum ���� Ÿ��
	{
		��� ����
		������ ����
	}

	1. ���� 2. ���� 3. ����
	2. switch ������ ������ ���Ḧ ���

	*/

enum FRUIT_TYPE  // ������
{
	APPLE = 1, // 0
	ORANGE = 5, // 1
	PINEAPPLE, // 2
	PEAR // 3
};

// �ڷ��� : int / double / long / short /float

// ����



//int num;
//FRUIT_TYPE fruit;
//cin >> ;
/*
enum class FRUIT_TYPE  // ������
{
	APPLE, // 0
	ORANGE, // 1
	PINEAPPLE, // 2
	PEAR // 3
};
*/
int main()
{
	// ���ǹ� : if / switch

	/*
	switch �� Ư¡
	break�� ����ؼ� Ż������ ������ �Ʒ� �ִ� ������ ����ȴ�.
	�ȿ��� ���� �ʱ�ȭ �Ұ� - �ϰ����ϸ� �߰�ȣ �ֱ�

	if VS switch

	if���� ������ ���� ó�� ����
	switch���� ���� �����ΰ��� ���� ���Ǹ� ����


	if���� ������ ���� ��� �� ������.
	switch���� ������ ���� ��� �� ������.
	
	switch - Jump Table����� ����� - �̸� ���� ���̺��� ���� �ٷ� ���� ó�� ����
	*/

	if (false)
	{
		int a;
	}
	else if (false)
	{
		int a;
	}
	else if (false)
	{
		int a;
	}
	else
	{
		int a;
	}
	int num = 6;

	switch (num)
	{
	case APPLE:

		break;
	case ORANGE:

		break;
	case PINEAPPLE:

		break;
	case PEAR:
		break;
	default:
		break;
	}

	switch (num)
	{
	case 1:
	case 2:
	{
		cout << "1�� �����Ͽ����ϴ�." << endl;
		cout << "2�� �����Ͽ����ϴ�." << endl;
		int temp = 100;
	}
		break;
	case 3:
		cout << "3�� �����Ͽ����ϴ�." << endl;
		break;
	default:
		cout << "�߸� �����Ͽ����ϴ�." << endl;
		break;
	}
	

	FRUIT_TYPE myFruit;

	myFruit = APPLE;

	int myType = myFruit;

	cout << myType << endl;

	switch (myFruit)
	{
	case APPLE:
		cout << "�� ��� �����ϴ±���." << endl;
		break;
	case ORANGE:
		cout << "�� ������ �����ϴ±���." << endl;
		break;
	case PINEAPPLE:
		cout << "�� ���ξ��� �����ϴ±���." << endl;
		break;
	case PEAR:
		cout << "�� �� �����ϴ±���." << endl;
		break;
	default:
		break;
	}

	
	system("pause");
}

// ����!!!!
/*
	1. ���� �ð��� ������ �ߴ��� ����
	2. cpp�� �ϳ� ���� ���� ������ ���� �� �ߴ� ������ ���� �Է��ؼ� ����غ���
	3. �ִ��� ���� �ʰ� ����� ����� �غ���
*/