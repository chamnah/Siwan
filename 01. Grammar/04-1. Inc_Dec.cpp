#include <iostream>
using namespace std;

void main()
{
	// ���� ������ / ���� ������

	int num = 100;

	// ���� ���� : ���� ���� ������ �����Ѵ�.
	// ���� ���� : ���� �������� ������ �����Ѵ�.

	++num;// ���� ����  1���� 
	num++; // ���� ���� 1����

	--num;// ���� ����  1����
	num--; // ���� ���� 1����

	//cout << ++num << endl;
	
	int val = 0;

	//cout << ++val << endl; // 1
	//cout << val++ << endl; // 1
	//cout << val << endl;   // 2

	int result;

	//result = 100 + val++;
	//cout << result << endl; // 100

	//result = 100 + val;
	//cout << result << endl; // 101

	result = 100 + ++val;
	cout << result << endl; // 

	result = 100 + (val++);
	cout << result << endl;

	++val; //val += 1; val = val + 1; 

	// ������ ����Ʈ : ������ ��� ������ ���� ����.



}