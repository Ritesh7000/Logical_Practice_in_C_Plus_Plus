#include<iostream>
#define MAX 5

using std::cout;
using std::endl;

class CQueue
{   
	int Queue[MAX];
	int iFront;
	int iRare;
public:

	CQueue()
	{
		iFront = iRare = -1;
	}

	void Enqueue(int iNo)
	{
		if(isFull())
		{
			cout << "\nQueue is Full.";
			return;
		}

		if(iFront == -1)
			iFront++;
		
		Queue[++iRare] = iNo;
	}

	int Dequeue()
	{
		int iDelData;

		if(isEmpty())
		{
			cout << "\nQueue is Empty";
			return -1;
		}

		iDelData = Queue[iFront];

		if(iFront == iRare)
		{
			iFront = iRare = -1;
		}
		else 
		iFront++;

		return iDelData;
	}

	bool isFull()
	{
		if(iRare == MAX-1)
			return 1;
		return 0;
	}

	bool isEmpty()
	{
		if(iFront == -1)
			return 1;
		return 0;
	}

	void Dispaly()
	{
		cout << endl;
		if(isEmpty())
		{
			cout << "\nQueue is Empty";
			return;
		}

		for(int i=iFront;i<=iRare;i++)
		{
			cout <<Queue[i] << "<-";
		}
	}
};

int main(void)
{
	CQueue obj;

	obj.Enqueue(10);

	obj.Dispaly();

	obj.Dequeue();
	
	obj.Dispaly();

	obj.Enqueue(10);
	obj.Enqueue(10);
	obj.Enqueue(10);
	obj.Enqueue(10);
	obj.Enqueue(10);
	obj.Enqueue(10);
	obj.Enqueue(10);


	obj.Dispaly();


	return 0;
}