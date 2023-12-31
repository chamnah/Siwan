#include <iostream>

int main()
{
	/*
	포인터와 배열과의 관계
	*/
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	/*
	int* ptrInt = &arr[0];
	ptrInt = arr; // 배열의 이름은 주소 0번째 주소
	ptrInt = &arr[1];
	*/

	// 0번째
	int* ptrInt = arr;
	//std::cout << ptrInt;
	//std::cout << *ptrInt;

	/*
	ptrInt = &arr[3];
	std::cout << *ptrInt;
	*/
	//std::cout << ptrInt[3]; // 포인터를 배열처럼 사용 가능
	//std::cout << *(ptrInt + 3);
	std::cout << *(arr + 3);
	//arr[3];
	
	//arr이라는 0번째 주소로 부터 +3한 위치의 값
	//*(ptrInt + 3)
	return 0;
}