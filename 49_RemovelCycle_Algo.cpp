//Hare and Tortose Algo or Floy's Algo or Removel Cycle Algo
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

class Node
{
public:
    int iData;
    Node *pNext;

    Node(int data = 0)
    {
        iData = data;
        pNext = NULL;
    }
};

class List
{
    Node *pHead;
public:
    List() : pHead(NULL) {}

    void InsertFirst(int iNo)
    {
        Node *pNewNode = new Node(iNo);
        
        if(pNewNode == NULL)
        {
            cout << "Memory Allocation Failed." << endl;
            return;
        }

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

       // cout << "NULL" << endl;
    }

    void MakeCycle(int iNo)
    {
    	Node *pTemp = pHead;
    	Node *pCycle = NULL;
    	int iCount = 1;

    	while(pTemp->pNext != NULL)
    	{
    		if(iCount == iNo)
    			pCycle = pTemp;
    		
    		pTemp = pTemp->pNext;
    		iCount++;
    	}

    	pTemp->pNext = pCycle;
    	pTemp = pCycle = NULL;
    }

    bool FindCycle()
    {
    	Node *pFast = pHead;
    	Node *pSlow = pHead;

    	while(pFast != NULL && pSlow->pNext != NULL)
    	{
    		pFast = pFast->pNext->pNext;
    		pSlow = pSlow->pNext;

    		if(pFast == pSlow)
    		{
    			return true;
    		}
    	}

    	return false;
    }

    void RemoveCycle()
    {
   	   	Node *pFast = pHead;
    	Node *pSlow = pHead;


    	while(pFast != NULL && pSlow->pNext != NULL)
    	{
    		pFast = pFast->pNext->pNext;
    		pSlow = pSlow->pNext;

    		if(pFast == pSlow)
    			break;
    	}

    	pFast = pHead;

    	while(pFast->pNext != pSlow->pNext)
    	{
    		pFast = pFast->pNext;
    		pSlow = pSlow->pNext;
    	}

    	pSlow->pNext = NULL;

    	pSlow = pFast = NULL;
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
    obj.InsertFirst(70);
    obj.InsertFirst(80);
    obj.InsertFirst(90);
    obj.InsertFirst(100);
    cout << "Original List =   \t";
    obj.Display();

    obj.MakeCycle(5);

//   cout << "\nAfter MakeCycle :\t";
//    obj.Display();

    if(obj.FindCycle())
    	cout << "\n\nCycle Ahe\n";
    else
    	cout << "\n\nxCycle Nahi ahe\n";
   
    obj.RemoveCycle();

    cout << "\nAfter Removeing Cycle =\t";
    obj.Display();


    return 0;
}

/*
O/P:
Original List =         100->90->80->70->60->50->40->30->20->10->

Cycle Ahe

After Removeing Cycle = 100->90->80->70->60->50->40->30->20->10->

*/
