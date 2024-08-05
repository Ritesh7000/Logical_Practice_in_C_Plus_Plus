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

    void IntersectList(List obj2,int iPos)
    {
        Node *pTemp1 = pHead;
        Node *pTemp2 =  obj2.pHead;

        while(--iPos)
            pTemp1 = pTemp1->pNext;

        while(pTemp2->pNext != NULL)
            pTemp2 = pTemp2->pNext;

        pTemp2->pNext = pTemp1;

        pTemp1 = pTemp2 = NULL;
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

    int IntersectData(List obj2)
    {
        Node *pTemp1 = pHead;
        Node *pTemp2 = obj2.pHead;

        int l1 = Count();
        int l2 = obj2.Count();

        if(l1 > l2)
        {
            l1 = l1 - l2;
        }
        else
        {
            pTemp1 = pTemp2;
            pTemp2 = pHead;

            l1 = l2 - l1;
        }

        l2 = 0; //reuse of variable

        while(l1--)
        {
            pTemp1 = pTemp1->pNext;
        }

        while(pTemp1 != NULL )
        {
            if(pTemp1 == pTemp2)
                return pTemp2->iData;
            pTemp1 = pTemp1->pNext;
            pTemp2 = pTemp2->pNext;
        }

        return -1;
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
    obj.InsertFirst(5);
    obj.InsertFirst(4);
    obj.InsertFirst(3);
    obj.InsertFirst(2);
    obj.InsertFirst(1);
    cout << "List1 =   \t";
    obj.Display();

    obj2.InsertFirst(7);
    obj2.InsertFirst(6);
    obj2.InsertFirst(5);
    obj2.InsertFirst(4);
    obj2.InsertFirst(3);
    obj2.InsertFirst(2);
    cout << "\n\nList2 =   \t";
    obj2.Display();
    
    obj.IntersectList(obj2,8);

    cout << "\n\nList1 =   \t";
    obj.Display();

    cout << "\n\nList2 =   \t";
    obj2.Display();

    iData = obj.IntersectData(obj2);
    
    cout <<"\n\nData =\t" << iData;
    return 0;
}