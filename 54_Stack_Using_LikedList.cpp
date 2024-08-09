#include<iostream>
#define MAX 5

using std::cout;
using std::cin;
using std::endl;

class CNode
{
	int iData;
	CNode *pNext;

	public:
		CNode()
		{
			iData = 0;
			pNext = NULL;
		}

		friend class CStack;
};

class CStack
{
	int iCount;
	CNode *pTop;
public:
	CStack()
	{
		pTop = NULL;
		iCount = 0;
	}

	void Push(int iNo)
	{
		CNode *pNewNode = NULL;

		if(isFull())
		{
			cout << "Stack is Full";
			return;
		}

		pNewNode = new CNode;

		if(pNewNode == NULL)
		{
			cout << "Memory allocation is Falied.";
			return;
		}

		iCount++;
		pNewNode->iData = iNo;
		pNewNode->pNext = pTop;

		pTop = pNewNode;
		pNewNode = NULL;
	}

	int Pop()
	{
		CNode *pTemp = NULL;
		int iDelData = 0;

		if(isEmpty())
		{
			 cout << "\nStack is Empty";
			 return -1;
		}

		pTemp = pTop;
		pTop = pTop->pNext;
	
		iCount--;

		iDelData = pTemp->iData;

		pTemp->pNext = NULL;
		delete pTemp;

		pTemp = NULL;
		
		return iDelData;
	}
	
	int isEmpty()
	{
		if(iCount == 0)
			return 1;
		return 0;
	}

	int isFull()
	{
		if(iCount == MAX)
			return 1;
		return 0;
	}

	void Display()
	{
		CNode *pTemp = NULL;

		if(pTop == NULL)
		{
			cout << "Stack is Empty";
			return;
		}

		pTemp = pTop;

		while(pTemp != NULL)
		{
			cout << pTemp->iData << "<-";
			pTemp = pTemp->pNext;
		}
	}
};



int main(void)
{
	CStack obj;
	int iNo;

	obj.Push(10);
	obj.Push(20);
	obj.Push(30);
	obj.Push(40);
	obj.Push(50);
	
	obj.Display();

	iNo = obj.Pop();

	cout << "\n" << iNo << endl;

	obj.Display();

	return 0;
}