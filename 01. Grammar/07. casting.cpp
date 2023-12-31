#include <iostream>
using namespace std;

enum class MyEnum
{
	A
};

enum class MyEnum2
{
	A
};

enum class FRUIT_TYPE  // ������
{
	APPLE = 1, // 0
	ORANGE = 5, // 1
	PINEAPPLE, // 2
	PEAR // 3
};

void main()
{
	//FRUIT_TYPE fruit = FRUIT_TYPE::APPLE;
	int fruit = static_cast<int>(FRUIT_TYPE::APPLE);
	/*
	casting : ����ȯ
	
	�ڷ��� ��ȯ

	int -> float
	float -> int

	double -> short
	short -> long

	*/

	float num1 = 0.1f;
	int   num2 = 0;
	//num2 = num1; //������ ����ȯ

	// C ��Ÿ�� ����ȯ - �����Ѵ�. / �����ϴ�.
	//num2 = (int)num1;//����� ����ȯ
	
	// C++ ��Ÿ�� ����ȯ - �����ϴ�. / �����ϴ�.
	/*
	*static_cast - �Ϲ����� ����ȯ���� ���ȴ�. - ������ ����ȯ�� ����ϴ� ����
	int, float, short, long
	
	dynamic_cast - Ŭ����(����� ���� �ڷ���)���� �θ� �ڽİ��� ����ȯ 
	const_cast - const�� �����ϰų� const�� ���̴µ� ���ȴ�.
	- �ǵ��� ������� ����
	reinterpret_cast - ���� ����ȯ - C��Ÿ���� ĳ����ó�� ����ȯ
	- �ǵ��� ����� �������� �ʴ´�.
	- ������ Ŭ�󰣿� ����� �� ��()
	- �ڷ����� �˼��� ���� �� (template)
	*/

	num2 = static_cast<int>(num1);
}
