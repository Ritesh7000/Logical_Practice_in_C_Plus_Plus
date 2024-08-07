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

    int Count()
    {
        Node *pTemp = pHead;
        int iCount = 0;

        while(pTemp != NULL)
        {
            pTemp = pTemp->pNext;
            iCount++;
        }
        return iCount;
    }


    void SwapEvenOdd()
    {
        int iCount = 0;
        Node * pEven = NULL;
        Node * pOdd = NULL;
        Node * pTemp = pHead;
        Node * pTemp2 = NULL;
        Node * pTemp3 = NULL;
        pEven = pHead; 

        
        if(pEven == 0)
        {
            cout << "Linked List is Empty.";
            return;
        }

        while(pEven != NULL)
        {
            if(pEven->iData%2 == 0)
            {
                pOdd = pEven->pNext;
                pTemp3 = pEven;

                if(pOdd->pNext == NULL)
                    return;

                while(pOdd->iData%2 != 1)
                {
                    pOdd = pOdd->pNext;
                    pTemp3 = pTemp3->pNext;
                }

//                cout << pOdd->iData;

                pTemp->pNext = pOdd;
                pTemp3->pNext = pEven;

                pTemp2 = pOdd->pNext;
                pOdd->pNext = pEven->pNext;
                pEven->pNext = pTemp2;

                pTemp = pEven;
                pEven = pEven->pNext;
            }
            else
            {
                pTemp = pEven;
                pEven = pEven->pNext;
            }
        }

    }


};

int main(void)
{
    List obj;
    int iData;


    obj.InsertFirst(10);
    obj.InsertFirst(9);
    obj.InsertFirst(8);
    obj.InsertFirst(7);
    obj.InsertFirst(6);
    obj.InsertFirst(5);
    obj.InsertFirst(4);
    obj.InsertFirst(3);
    obj.InsertFirst(2);
    obj.InsertFirst(1);
    cout << "List1 =   \t";
    obj.Display();

    obj.SwapEvenOdd();


    cout << "\n\nAfter Swap =   \t";
    obj.Display();

    return 0;
}