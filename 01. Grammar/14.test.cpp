#include <iostream>

using namespace std;

int globalValue = 10; // ���� ���� - ������ ����

int main()
{
// �ʱ��; ���ǽ�; ������
//for (size_t i = 0; i < length; i++)
//{
//
//}

/*
if��

if(true/false)
{
}

while(true/false)
{
 // true�� ����
}



int arrInt

*/

//int arr[10] = { 1,2,3,4,5,6 }; //0 ~ 9

//char arrChar[4] = "abc"; //\0 : ���ڿ� ��

//sizeof("abc"); // 4
//strlen("abc"); // 3
/*
strlen : string length - ���ڿ� ���̸� ��ȯ
strcpy : string copy - ���ڿ� ����
strcat : - ���ڿ� �̾���̱�
strcmp : string compare - ���ڿ� ��
- ���ڿ��� ������ 0�� ��ȯ
- ������ ��� / ���� ��ȯ
*/

// ����Ʈ �е�
/*
struct AA
{
	int a; //4byte - 4�� ����
	int b; //4byte - 4�� ����
	char c; // 1byte - 1�� ����
			//3byte - bytepadding
};
*/
//#pragma pack(1) //

	/*
	struct B
	{
		int a;
		long long c; // 8byte
		int b;
	};

	//cpu 1byte�� 9�� ����
	//cpu 4byte�� 3�� ����
	//cout << sizeof(B);

	B temp = {1,2,3};
	temp.a = 10;

	int a = 10; // 4byte
	//4byteũ���� �޸� ������ 10�� ����
	//�ش� ���� �̸��� a��� ��Ī

	//������ : �޸� �ּ� ����
	char* ptrChar;
	ptrChar + 1; // 1byte

	char arrChar[3];
	arrChar[2];
	int* ptr = &a; //int �ڷ��� ũ���� �޸� �ּҸ� ����
	*ptr = 20;

	int** pptr; // ���� ������
	int*** ppptr;

	int arr[3];
	ptr = arr; // �迭�� �̸��� �ּ�
	ptr = &arr[0]; // ���� ����

	ptr[1];
	arr + 1;

	cout << a;
	*/
	/*
	char arr[10] = "abcd";
	const char* pChar = "�ȳ��ϼ���";

	//x86 : 32bit 4byte
	//x64 : 64bit 8byte
	cout << sizeof(L"�ȳ��ϼ���"); // L""�����ڵ�
	//�ѱ� 2byte ������ ���� 1byte ��Ƽ ����Ʈ
	*/

	//32�Ⱑ - os / ���ͳ� / ���α׷�(�Ҵ�)

	/*
	���� �Ҵ� : ����ڰ� ���ϴ� ������ �Ҵ�
			  : ����� ������ ������ ������Ѵ�.
	*/

	//C ��Ÿ��
	/*
	int* ptr = static_cast<int*>(malloc(sizeof(int)));//c��Ÿ�� �����Ҵ� �Լ�
	*ptr = 10;

	cout << *ptr;
	free(ptr);
	*/
	/*
	int* ptr = static_cast<int*>(malloc(sizeof(int)*10));
	ptr[0] = 20;
	ptr[9] = 30;
	free(ptr);
	*/
	//C++ ��Ÿ��
	/*
	int* ptr = new int;
	*ptr = 10;
	delete ptr;
	*/
	/*
	int* ptr = new int[10]; // �迭 �Ҵ�
	delete[] ptr; // �迭 ����
	*/

	/*
	�޸� ���� 4��

	�ڵ� ���� : ���� �ڵ尡 �ö󰡴� ����
	������ ���� : �������� - ���α׷��� ������ �� �Ҵ� / ������ ����
	���� ���� : �������� - �߰�ȣ ������ �� �Ҵ� / ������ ����
	�� ���� : �����Ҵ�� ����� ����
	*/
	{
		int ababab = 0; //���� ����
		//�������� Ư¡ : �߰�ȣ ������ �� �Ҵ�
		//                �߰�ȣ ������ ����
	}
	
	return 0;
}