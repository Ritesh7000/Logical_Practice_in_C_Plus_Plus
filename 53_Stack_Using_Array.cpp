#include<iostream>
#define MAX 10

using std::cout;
using std::cin;
using std::endl;

class CStack
{
	int arr[MAX]; 
	int pTop;
public:
	CStack()
	{
		pTop = -1;
	}

	void Push(int iNo)
	{
		if(isFull())
		{
			cout << "\nThere is no space.";
			return;
		}

		arr[++pTop] = iNo;
	}

	int Pop()
	{
		int iDeldata = 0;

		if(isEmpty())
		{
			cout << "\nStack is Empty.";
			return -1;
		}

		iDeldata = arr[pTop--];

		return iDeldata;
	}

	int isEmpty()
	{
		if(pTop == -1)
			return 1;
		return 0;
	}

	int isFull()
	{
		if(pTop == MAX-1)
			return 1;
		return 0;

	}

	void Dispaly()
	{
		if(pTop == -1)
		{
			cout << "\nStack is Empty.";
			return;
		}
		for(int i=0;i<=pTop;i++)
		{
			cout << arr[i] << "<-";
		}

		cout << endl;
	}
};


int main(void)
{
	int iNo;
	CStack obj;

	obj.Push(10);
	obj.Push(20);
	obj.Push(30);
	obj.Push(40);
	obj.Push(50);
	obj.Push(60);
	obj.Push(30);
	obj.Push(40);
	obj.Push(50);
	obj.Push(670);
//	obj.Push(100);

	obj.Dispaly();

    iNo	= obj.Pop();
    cout << endl << iNo;

    return 0;
}