//Given an array a[] of size n. output sum of each subaaray of the give array.

#include<iostream>

using namespace std;

/*
o/p:
Enter Array size = 5
1 2 4 3 1

1
3
7
10
11

2
6
9
10

4
7
8

3
4

1

*/

int main(void)
{
	int iNo;
	int iSum = 0;

	cout << "Enter Array size = ";
	cin >> iNo;

	int *arr = new int[iNo];

	for(int i = 0;i < iNo; i++)
	{
		cin >> arr[i];
	}

	cout << endl;

	for(int i = 0;i < iNo; i++)
	{
		iSum = 0;
		for(int j = i; j < iNo; j++)
		{
			iSum += arr[j];

			cout << iSum << endl;
		}

		cout << endl;
	}

	return 0;
}
