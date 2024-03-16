#include <iostream> // VISUAL STUDIO / C++ ���̺귯��
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

// 0 ���� -> 0�� = 10 1��°

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
	1. �迭
	���� : ���ϴ� �ε����� �ȴٸ� ���� ���� ����
	���� : ���� ������ ������.(������ ���� �� �ڿ� �ִ� ���� ��ġ�� ����)
	
	int arrayInt[10] = {0,1,2,3,4,5,6};
	arrayInt[1] = 10;

	2. ����Ʈ
	������ -> ���� ����
	���� : ���� ���� �ӵ��� ������(���� �� ����Ű�� ��常 ����)
	���� : Ž�� �ӵ��� ������. (ó������ ��ȸ�ϸ� ã�ƾߵ�)


	// ù����
	Node nodeList;
	nodeList.data = 10;

	//�� �߰�
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

	3. Ʈ��(���� ��� ����) -> �׷����� �� ����
	����Ʈ�� �������� Ž�� �ӵ��� ��������� �ø� ����
	���� : Ž�� �ӵ��� ������.(����Ʈ���� ������ �迭���� ������.)
	���� : ���� ���� �ӵ��� ������.(�Ź� ������ �Ѵ�.)
	*/
	
	/* ����
	LIFO(Last Input First Output)
	�������� ���� �ڷᰡ ���� ���´�.

	FILO(First Input Last Output)
	���� ���� �ڷᰡ ������ ���´�.
	
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

	ť
	FIFO(First Input First Output)
	���� ���� �ڷᰡ ���� ���´�.

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