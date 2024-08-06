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
    }

    void Merge_Sorted_LL(List obj2)
    {
    	Node *pTemp1 = pHead;
    	Node *pTemp2 = obj2.pHead;
    	Node *pNew = NULL;
    	Node *pLive = NULL;

// Approach-1:
    	pNew = new Node(0);
    	pLive = pNew;

// Approach-2:

/*
ya doghanpaiki konta hi use karu shakto apan.Madhe dummy node gheun pLive & pNew cha frist node banau ani,
pTemp1 & pTemp2 che node pDummy chya next la join karat jau.


    	if(pTemp1->iData < pTemp2->iData)
    	{
    		pNew = pTemp1;
    		pTemp1 = pTemp1->pNext;
    	}
    	else
    	{
      		pNew = pTemp2;
    		pTemp2 = pTemp2->pNext;
    	}

    	pLive = pNew;
*/
    	
    	while(pTemp1 != NULL && pTemp2 != NULL)
    	{
    		if(pTemp1->iData < pTemp2->iData)
    		{
  		 		pLive->pNext = pTemp1;
   		 		pTemp1 = pTemp1->pNext;
    		}
			else
    		{
   				pLive->pNext = pTemp2;
    			pTemp2 = pTemp2->pNext;
    		}

   			pLive = pLive->pNext;
    	}

    	while(pTemp1 != NULL)
    	{
    		pLive->pNext = pTemp1;
    		pTemp1 = pTemp1->pNext;
    		pLive = pLive->pNext; 
    	}

    	while(pTemp2 != NULL)
    	{
    		pLive->pNext = pTemp2;
    		pTemp2 = pTemp2->pNext;
    		pLive = pLive->pNext; 
    	}

    	pTemp1 = pHead;		//backup sathi fkt.
    	pHead = pNew->pNext;

    	cout << "\nJhal re bhai = \n";
    	Display();

    	pHead = pTemp1;		//backup cha use.
    }
};

int main(void)
{
    List obj;
    List obj2;
    int iData;


    obj.InsertFirst(10);
    obj.InsertFirst(9);
    obj.InsertFirst(9);
    obj.InsertFirst(7);
    obj.InsertFirst(6);
    obj.InsertFirst(4);
    obj.InsertFirst(2);
    cout << "List1 =   \t";
    obj.Display();

    obj2.InsertFirst(13);
    obj2.InsertFirst(12);
    obj2.InsertFirst(11);
    obj2.InsertFirst(8);
    obj2.InsertFirst(5);
    obj2.InsertFirst(3);
    obj2.InsertFirst(1);
    cout << "\n\nList2 =   \t";
    obj2.Display();
    
    cout << endl;

    obj.Merge_Sorted_LL(obj2);

    return 0;
}