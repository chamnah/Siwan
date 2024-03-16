#include <iostream> // VISUAL STUDIO / C++ 라이브러리
using namespace std;
struct Node
{
	Node* pNext;
	int data;
};

struct TreeNode
{
	Node* pParent;
	Node* pChild[10];
	int data;
};

int arrayInt[10];
int pushIndex = 0;
int popIndex = 0;

// 0 번쨰 -> 0번 = 10 1번째

int PushStack(int value)
{
	arrayInt[pushIndex] = value;
	return arrayInt[pushIndex++];
}

int PopStack(int value)
{
	return arrayInt[--pushIndex];
}

int PushQueue(int value)
{
	arrayInt[pushIndex] = value;
	return arrayInt[pushIndex++];
}

int PopQueue(int value)
{
	arrayInt[popIndex] = value;
	return arrayInt[popIndex++];
}

int main()
{
	/*
	1. 배열
	장점 : 원하는 인덱스를 안다면 빠른 접근 가능
	단점 : 삽입 삭제가 느리다.(삭제나 삽입 후 뒤에 있는 값들 위치를 변경)
	
	int arrayInt[10] = {0,1,2,3,4,5,6};
	arrayInt[1] = 10;

	2. 리스트
	포인터 -> 만든 형태
	장점 : 삽입 삭제 속도가 빠르다(삭제 후 가리키는 노드만 변경)
	단점 : 탐색 속도가 느리다. (처음부터 순회하며 찾아야됨)


	// 첫번쨰
	Node nodeList;
	nodeList.data = 10;

	//값 추가
	Node* pSearchNode = nodeList.pNext;
	while (true)
	{
		if (pSearchNode == nullptr)
		{
			pSearchNode = new Node;
			pSearchNode->data = 10;
			break;
		}
		else
		{
			++pSearchNode;
		}
	}

	pSearchNode = &nodeList;

	while (pSearchNode != nullptr)
	{
		if (pSearchNode->data == 10)
		{
			//pSearchNode;
			break;
		}

		pSearchNode = pSearchNode->pNext;
	}
	// [10] = 20;

	3. 트리(나무 모양 생각) -> 그래프의 한 종류
	리스트를 구조에서 탐색 속도를 비약적으로 올린 구조
	장점 : 탐색 속도가 빠르다.(리스트보다 빠르다 배열보단 느리다.)
	단점 : 삽입 삭제 속도가 느리다.(매번 정렬을 한다.)
	*/
	
	/* 스택
	LIFO(Last Input First Output)
	마지막에 들어온 자료가 먼저 나온다.

	FILO(First Input Last Output)
	먼저 들어온 자료가 마지막 나온다.
	
	cout << "Insert : ";
	for (size_t i = 0; i < 3; i++)
	{
		cout << PushStack(i + 1) << ", ";
	}

	cout << endl;

	cout << "Delete : ";
	for (size_t i = 0; i < 3; i++)
	{
		cout << PopStack(i + 1) << ", ";
	}

	큐
	FIFO(First Input First Output)
	먼저 들어온 자료가 먼저 나온다.

	cout << "Insert : ";
	for (size_t i = 0; i < 3; i++)
	{
		cout << PushQueue(i + 1) << ", ";
	}

	cout << endl;

	cout << "Delete : ";
	for (size_t i = 0; i < 3; i++)
	{
		cout << PopQueue(i + 1) << ", ";
	}

	*/

	
}