#include <iostream>
using std::cout;
using std::endl;
int main()
{
	/*
	int a = 0;
	int* ptr = &a;

	cout << a << endl;
	*ptr = 10;
	int** pptr = &ptr;

	*(*pptr) = 10;
	cout << a << endl;
	int*** ppptr = &pptr;
	***ppptr = 20;
	cout << a << endl;
	//int****************************** ptrTemp3;
	*/

	/*int arr[10];
	arr[0];
	arr[1];*/

	int arr[10][10];
	int (*ptr)[10] = arr;
	ptr[0][9] = 10;

	return 0;
}