#include <iostream>
using namespace std;
int main()
{
	/*
	�����Ϳ� �迭���� ����
	*/
	//int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	
	/*
	int* ptrInt = &arr[0];
	ptrInt = arr; // �迭�� �̸��� �ּ� 0��° �ּ�(&arr[0])
	ptrInt = &arr[1];
	*/

	// 0��°
	//int* ptrInt = arr;
	//std::cout << ptrInt;
	//std::cout << *ptrInt;

	/*
	ptrInt = &arr[3];
	std::cout << *ptrInt;
	*/
	//std::cout << ptrInt[3]; // �����͸� �迭ó�� ��� ����
	//std::cout << *(ptrInt + 3);
	//std::cout << *(arr + 3);
	//arr[3];
	
	//arr�̶�� 0��° �ּҷ� ���� +3�� ��ġ�� ��
	//*(ptrInt + 3)

	int arr[5] = { 1,2,3,4,5 };
	/*int* ptrInt = &arr[4];
	*ptrInt = 100;*/

	/*int* ptrInt = arr;
	ptrInt[4] = 100;*/

	/*int* ptrInt = arr;
	*(ptrInt + 4) = 100;

	for (size_t i = 0; i < 5; i++)
	{
		cout << arr[i] << endl;
	}*/

	char* ptrChar = reinterpret_cast<char*>(&arr[0]);
	
	for (size_t i = 0; i < 20; i++)
	{
		cout << ptrChar[i] << endl;
	}
	
	return 0;
}