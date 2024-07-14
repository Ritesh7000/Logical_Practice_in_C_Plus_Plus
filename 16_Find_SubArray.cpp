#include<iostream>

using namespace std;

/*
o/p:
#Find All subarray.
Enter number = 4
-1 4 7 2

-1
-1 4
-1 4 7
-1 4 7 2
4
4 7
4 7 2
7
7 2
2
*/

int main(void)
{
	int iNo;

	cout << "Enter number = ";
	cin >> iNo;

	int *arr = new int[iNo];

	for(int i= 0;i < iNo;i++)
	{
		cin >> arr[i];
	}

	cout << endl;

	for(int i = 0;i < iNo;i++)
	{
		for(int j = i;j < iNo;j++)
		{

			for(int k = i; k <= j;k++)	
			{
				cout << arr[k] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}