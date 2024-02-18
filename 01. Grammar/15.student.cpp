#include <iostream>

using namespace std;

enum SelectType
{
	ADD = 1,
	DELETE,
	SEARCH,
	VIEW
};

struct tStudent
{
	char name[20];
	int age;
	char sex[5];
	int korScore;
	int mathScore;
	int engScore;
};

tStudent studentList[10];

void AddStudent()
{
	tStudent student;
	cout << "�̸��� �Է����ּ���." << endl;
	cin >> student.name;
	cout << "���̸� �Է����ּ���." << endl;
	cin >> student.age;
	cout << "������ �Է����ּ���." << endl;
	cin >> student.sex;
	cout << "���� ������ �Է����ּ���." << endl;
	cin >> student.korScore;
	cout << "���� ������ �Է����ּ���." << endl;
	cin >> student.engScore;
	cout << "���� ������ �Է����ּ���." << endl;
	cin >> student.mathScore;

	studentList[0] = student;
}

int b = 0; // ���� ���� - ������ ����

int main()
{
	while (true)
	{
		int select = 0; // 4byte
		cout << "1. �л� �߰� 2. �л� ���� 3. �л� �˻� 4. ��ü ���" << endl;
		cin >> select;
		
		if (cin.fail()) // cin �Է� ����
		{
			cin.clear(); // cin �Է� ���� ������ ����
			// cin�� ����(\n)�� �Է��� ���� ���¶� ���� / ���ϸ� ��� ���ʹ���
			cin.ignore((std::numeric_limits<std::streamsize>::max)(), '\n'); 
		}

		switch (select)
		{
		case ADD:
			AddStudent();
			break;
		case DELETE:
			break;
		case SEARCH:
			break;
		case VIEW:

			break;
		default:
			break;
		}
	}

	return 0;
}

/* 0217 ����
1. �л� �߰� ��ɿ��� �ε����� �÷��� ����� ����ǰԲ� ����
2. �л��� �迭�� ������ ���̻� �������� ���ϰ� ����
3. ��ü ��� ��� ���� - ����ִ� �л��� ������� �ʱ�
4. �˻� ��� ���� - �л� �̸��� �Է��ϸ� �ش� �л��� ������ ���
5. ���� ��� ���� - �л� �̸��� �Է��ϸ� �ش� �л� ����

6. ����~!!!
*/

/*
�ϵ��ũ / SSD X
�� O
�޸� ���� - �����ϴ� ���� ���� ����
4������
1. �ڵ� ����
 - ���� �ڵ尡 ������ �Ǵ� ����

2. ������ ����
 - ���� ���� 
  -- �߰�ȣ �ٱ����� ������ ����
  -- ���α׷��� ó�� ���۵� �� ����
  -- ���α׷��� ����Ǹ� ����

3. �� ����
 - �����Ҵ��� ������ ����Ǵ� ����
  -- ����ڰ� ���Ҷ� ���� new
  -- ����ڰ� ���Ҷ� ���� delete

4. ���� ����
 - ���� ���� 
  -- �߰�ȣ �ȿ� ������ ����
  -- �߰�ȣ ������ ���� ���� ����
  -- �߰�ȣ �ٱ����� ������ ���� ����
*/







/*
�л� ���� ���α׷�
1. �л� �߰�
2. �л� ����
3. �л� �˻�
4. ��ü ���

 �̸�  / ���� / ���� / ���� / ���� / ���� / ���� / ���
���ÿ�    16     ��     95     98    100    293    97.6

*/