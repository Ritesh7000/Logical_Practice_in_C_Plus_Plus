#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Node
{
public:
	int iData;
	Node *pNext;

	Node()
	{
		iData = 0;
		pNext = NULL;
	}
};

class List
{
	Node *pHead;
public:

	List()
	{
		pHead = NULL;
	}

	void InsertFirst(int iNo)
	{
		Node *pNewNode = new Node();

		if(pNewNode == NULL)
		{
			cout << "Memory Allocation is Failed.";
			return;
		} 

		pNewNode->iData = iNo;
		pNewNode->pNext = pHead;
		pHead = pNewNode; 
	}


	void Display()
	{
		Node *pTemp = pHead;

		while(pTemp != NULL)
		{
			cout << pTemp->iData << "->";
			pTemp = pTemp->pNext;
		}
	}

	void Reverse_K()
	{
		Node *pTemp = pHead;
		int iCount = 0;

		while(pTemp != NULL && pTemp->pNext != NULL)
		{
			int iNo = pTemp->iData;
			pTemp->iData = pTemp->pNext->iData;
			pTemp->pNext->iData = iNo;

			pTemp = pTemp->pNext->pNext;

			iCount++;
		}
	}
};



int main(void)
{
	List obj;

	obj.InsertFirst(10);
	obj.InsertFirst(20);
	obj.InsertFirst(30);
	obj.InsertFirst(40);
	obj.InsertFirst(50);
	obj.InsertFirst(60);


    cout << "Original List            : ";
	obj.Display();

	obj.Reverse_K();

    cout << "\nReversed in Pairs List  : ";
	obj.Display();

	return 0;
}
