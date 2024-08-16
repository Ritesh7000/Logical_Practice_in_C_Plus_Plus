#include<iostream>
#include<stack>

using namespace std;

class CQueue
{
	stack<int> st1;
	stack<int> st2;
public:
	CQueue()
	{

	}

	void Enqueue(int iNo)
	{
		st1.push(iNo);
	}

	int Dequeue()
	{
		int iDelData = 0;

		if(st1.empty() && st2.empty())
		{
			cout << "Queue is empty.";
			return -1;
		}

		if(st2.empty())
		{
			while(!st1.empty())
			{
				st2.push(st1.top());
				st1.pop();
			}
		}

		iDelData = st2.top();
		st2.pop();

		return iDelData;
	}
};


int main(void)
{
	CQueue obj;

	obj.Enqueue(10);
	obj.Enqueue(20);
	obj.Enqueue(30);
	obj.Enqueue(40);
	obj.Enqueue(50);

	cout << obj.Dequeue() << endl;
	cout << obj.Dequeue() << endl;
	cout << obj.Dequeue() << endl;
	cout << obj.Dequeue() << endl;
	cout << obj.Dequeue() << endl;
	cout << obj.Dequeue() << endl;





	return 0;
}