#include<iostream>
using std::cout;
using std::cin;
using std::endl;


struct Node
{
	int iData;
	Node *pLeft;
	Node *pRight;
};


		void InsertBST(struct Node **ppRoot,int iNo)
		{
			struct Node *pNewNode  = NULL;
			struct Node *pParent = NULL;
			struct Node *pPtr = NULL;

			pPtr = *ppRoot;

				while(pPtr != NULL)
				{
					pParent = pPtr;

					if(iNo < pPtr->iData)
						pPtr = pPtr->pLeft;
					else if(iNo > pPtr->iData)
						pPtr = pPtr->pRight;
					else
					{
						cout << "Duplicate Data.";
						return;				
					}
				}

			pNewNode = new Node ;

			if(pNewNode == NULL)
			{
				cout << "Memory Allocation is Failed.";
				return;
			}

			pNewNode->iData = iNo;

			pNewNode->pLeft = NULL;
			pNewNode->pRight = NULL;

				if(NULL == pParent)
					*ppRoot = pNewNode;
				else if(iNo < pParent->iData)
					pParent->pLeft = pNewNode;
				else 
					pParent->pRight = pNewNode;

		}

		void PreOrder(struct Node *pRoot)
		{
			if(pRoot == NULL)
				return;

			cout << pRoot->iData << "-";

			PreOrder(pRoot->pLeft);
			PreOrder(pRoot->pRight);
		}

		void InOrder(struct Node *pRoot)
		{
			if(pRoot == NULL)
				return;

			InOrder(pRoot->pLeft);
			cout << pRoot->iData << "-";
			InOrder(pRoot->pRight);
		}

		void PostOrder(struct Node *pRoot)
		{
			if(pRoot == NULL)
				return;

			PostOrder(pRoot->pLeft);
			PostOrder(pRoot->pRight);
			cout << pRoot->iData << "-";
		}


int main(void)
{
	struct Node *pRoot = NULL;

	InsertBST(&pRoot,10);
	InsertBST(&pRoot,14);
	InsertBST(&pRoot,6);
	InsertBST(&pRoot,7);
	InsertBST(&pRoot,11);
	InsertBST(&pRoot,18);
	InsertBST(&pRoot,3);


	printf("PreOrder\t=\t");
	PreOrder(pRoot);

	printf("\nInOrder\t\t=\t");
	InOrder(pRoot);

	printf("\nPostOrder\t=\t");
	PostOrder(pRoot);

	return 0;
}

/*
o/p:

PreOrder        =       10-6-3-7-14-11-18-
InOrder         =       3-6-7-10-11-14-18-
PostOrder       =       3-7-6-11-18-14-10-

*/