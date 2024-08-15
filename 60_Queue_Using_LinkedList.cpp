#include<iostream>
#define MAX 5

using std::cout;
using std::endl;


class CNode
{

public:
	int iData;
	CNode *pNext;

	CNode()
	{
		iData = 0;
		pNext = NULL;
    }
};


class CQueue
{   
	CNode * pFront;
	CNode * pLast;

public:

	CQueue()
	{
		pFront = NULL;
		pLast  = NULL;
	}

	void push(int iNo)
	{
		CNode * pNewNode = NULL;

		pNewNode = new CNode;

		if(pNewNode == NULL)
		{
			cout << "Memory Allocation is Failed";
			return;
		}

		pNewNode->iData = iNo;
		pNewNode->pNext = NULL;


		if(pLast == NULL)
		{
			pFront = pLast = pNewNode;
		}
		else
		{
			pLast->pNext = pNewNode;
			pLast = pLast->pNext;
		}

		pNewNode = NULL;
	}


	int pop()
	{
		int iDelData;
		CNode * pTemp = NULL;

		if(empty())
		{
			cout << "\nQueue is Empty\n";
			return -1;
		}

		pTemp = pFront;
		pFront = pFront->pNext;

		iDelData = pTemp->iData;

		delete pTemp;
		pTemp = NULL;

		if(pFront == NULL)
			pLast = NULL;

		return iDelData;
	}


	bool empty()
	{
		if(pFront == NULL)
			return 1;
		return 0;
	}


	void Display()
	{
		CNode *pTemp = pFront;

		if(empty())
		{
			cout << "\nQueue is Empty.";
			return;
		}

		while(pTemp != NULL)
		{
			cout << pTemp->iData << "<-";
			pTemp = pTemp->pNext;
		}
	}

	~CQueue()
	{
		while(pFront != NULL)
		{
			CNode * pTemp = pFront;
			pFront = pFront->pNext;
			delete pTemp;
		}

		pFront = pLast = NULL;
	}
};

int main(void)
{
	CQueue obj;
	int iNo; 

	obj.push(10);
	obj.push(20);
	obj.push(30);
	obj.push(40);
	obj.push(50);

	obj.Display();
	
	iNo = obj.pop();
	cout << endl << iNo << endl;

	obj.Display();

	return 0;
}


/*
o/p:

10<-20<-30<-40<-50<-
10
20<-30<-40<-50<-

*/



`````````
/*

class CQueue
{   
	CNode * pQueue;
	int Queue_Count;
public:

	CQueue()
	{
		pQueue = NULL;
		Queue_Count = 0;
	}

	void Enqueue(int iNo)
	{
		CNode *pNeNode = NULL;

		if(isFull())
		{
			cout << "\nQueue is Full.";
			return;
		}

		pNeNode = new CNode;

		if(pNeNode == NULL)
		{
			cout << "\nMemory allocation is FAILED\n";
			return;
		}

		pNeNode->iData = iNo;
		pNeNode->pNext = pQueue;

		pQueue = pNeNode;

		Queue_Count++;

		pNeNode = NULL;
	}

	int Dequeue()
	{
		int iDelData;
		CNode * pTemp = NULL;

		if(isEmpty())
		{
			cout << "\nQueue is Empty.";
			return -1;
		}

		pTemp = pQueue;

		if(pTemp->pNext == NULL)
		{
			iDelData = pTemp->iData;
			delete pTemp;
			pTemp = pQueue = NULL;
		}
		else
		{
			while(pTemp->pNext->pNext != NULL)
				pTemp = pTemp->pNext;
				
			iDelData = pTemp->pNext->iData;
		
			delete pTemp->pNext;
			pTemp->pNext = NULL;
			pTemp = NULL;
		}
		
		Queue_Count--;

		return iDelData;
	}

	bool isFull()
	{
		if(Queue_Count == MAX)
			return 1;
		return 0;
	}

	bool isEmpty()
	{
		if(pQueue == NULL && Queue_Count == 0)
			return 1;
		return 0;
	}

	int Count()
	{
		CNode * pTemp = NULL;
		int iCount = 0;

		pTemp = pQueue;

		while(pTemp != NULL)
		{
			pTemp = pTemp->pNext;

			iCount++;
		}

		return iCount;
	}

	void Display()
	{
		CNode *pTemp = pQueue;

		if(isEmpty())
		{
			cout << "\nQueue is Empty.";
			return;
		}

		cout << "\n";

		while(pTemp != NULL)
		{
			cout << pTemp->iData << "<-";
			pTemp = pTemp->pNext;
		}
	}

	void DeleteAll()
	{
		CNode * pPrev = NULL;
		CNode * pCurrent = pQueue;
		CNode *pNext = NULL;

		do
		{
			pNext = pCurrent->pNext;
			pCurrent->pNext = pPrev;
			pPrev = pCurrent;
			pCurrent = pNext;
		}while(pCurrent!=NULL);
	}

	~CQueue()
	{
		if(pQueue != NULL)
		{
			DeleteAll();

			delete pQueue;

			pQueue = NULL;
		}
	}
};

int main(void)
{
	CQueue obj;

	obj.Enqueue(10);
//	obj.Enqueue(20);
//	obj.Enqueue(30);


	obj.Display();

	obj.Dequeue();


	
	obj.Display();


	obj.Enqueue(10);
	obj.Enqueue(10);
	obj.Enqueue(20);
	obj.Enqueue(30);
	obj.Enqueue(40);
	obj.Enqueue(50);
	obj.Enqueue(60);


	obj.Dispaly();


	return 0;
}

*/