#include <iostream>
#include <Windows.h>
using namespace std;

void main()
{
	//char; // 1byte ���� �Ѱ�

	/*
	��Ƽ ����Ʈ - ���� �� ������/����(�ƽ�Ű �ڵ�)���� 1byte�� ǥ��
				- �ܱ���(�ѱ���, ��� �ƴ� ����) �� Ư������ 2byteǥ��
				//char; ""; - ��Ƽ����Ʈ
				char text[10] = "��a��";
				cout << text[2];
	*/
	// ���ڿ� �ڿ��� ������ �ʴ� ���ڰ� ������ �ִ�. \0
	// \0 - ���ڿ��� �����ٸ� ǥ��
	//char text[20] = "�ȳ��ϼ���.";
	//char text2[2] = "ab";
	//cout << sizeof("�ȳ�");

	/*
	�����ڵ� - ��� ���ڸ� 2byte�� ǥ��
				//wchar_t  L""
				wchar_t text2[20] = L"�ȳ�";
			 - �޸𸮰� ��Ƽ����Ʈ�� ���� �� ũ��.

			 cout << sizeof(L"AB"); // \0 - 2byte
	*/

	//TCHAR text[10] = L""; - ������ ���� ���� �ڷ���

	/*
	��Ƽ����Ʈ �� ���ڿ� �Լ�
	- strlen(string length) : ���ڿ� ���� ��ȯ
	  cout << strlen("abab"); // \0������ ���� ��ȯ

	- strcpy(string copy) : ���ڿ� ����
	  char a[10] = "abcd";
	  char b[10];

	  strcpy_s(b,a); //b���ٰ� a�� �����Ѵ�.
	  cout << b;

	- strcat(string concatenation) : ���ڿ� ��ġ��
		char a[10] = "abcd";
		char b[10] = "efgh";

		strcat_s(a, b);//a�ڿ� b�� �ٿ� �־��.
		cout << a;

	- strcmp(string compare) : ���ڿ� ��

	���ϴ� ����� b�� ���������� �ڿ� �ִ� ��� -1
	*/
	/*
	char a[10] = "";

	char a[10] = "abcd";
	char b[10] = "abca";

	if (strcmp(a, b) == 0)
	{
		cout << "�� ���ڿ��� �����մϴ�.";
	}
	else if (strcmp(a, b) > 0) // ���
	{
		cout << "�ι�° ������ ���ڿ��� ù��° ������ ���ڿ� ���� ���������� �տ� �����մϴ�.";
	}
	else if (strcmp(a, b) < 0) // ����
	{
		cout << "�ι�° ������ ���ڿ��� ù��° ������ ���ڿ� ���� ���������� �ڿ� �����մϴ�.";
	}

	char text[10];
	cin >> text;
	*/
	/*
	���ڿ� �ٸ� ��Ȳ
	abcd - 4
	hg   - 2
	hgabcd

	���ڿ� ���� ��Ȳ
	abcd
	abcf
	abcdabcf
	*/

	/*
	����
	1. �� ���� ���ڿ��� �Է� �޴´�.
	2. �� ���� ���ڿ� �� ���̰� �� ª�� ���ڿ��� �տ� �����ϵ��� ���ļ� ����Ѵ�.
	3. ���࿡ ���ڿ��� ���̰� ���� �����ϴٸ�, ������ �� �� ������ �����ϴ� ���ڿ��� �տ� �����ϵ��� ���ļ� ���
	
	strcpy - ���ڿ� ����
	strcat - ���ڿ� �̾� ���̱�
	strcmp - ���ڿ� �� - 0, 
	strlen - ���ڿ��� ���� - \0 : ���� ���� �ȵ�
	*/

	char arr[10] = "";
	char brr[10] = "";

	cin >> arr;
	cin >> brr;
	//1. arr ���ڿ� ���� ��� / brr ���ڿ� ���� ���
	//2. arr ���ڿ� ���� ��� / brr ���ڿ� ���� ���

	int arrLength = strlen(arr);
	int brrLength = strlen(brr);

	if (arrLength < brrLength)
	{
		strcat(arr, brr);
		cout << arr;
	}
	else if (arrLength == brrLength)
	{
		if (strcmp(arr, brr) < 0)
		{
			strcat(arr, brr);
			cout << arr;
		}
		else
		{
			strcat(brr, arr);
			cout << brr;
		}
	}
	else
	{
		strcat(brr, arr);
		cout << brr;
	}
}