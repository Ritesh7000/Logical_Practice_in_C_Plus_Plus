#include<iostream>

using namespace std;

/*
#Find Maximum subarray sum.

o/p:
1.	Enter number = 4
	-1 4 7 2

	Maximum Subarray Sum = 13

2.	Enter number = 5
	1 -4 2 3 1

	Maximum Subarray Sum = 6
*/

/*
//type 1: 
int main(void)
{
	int iNo;
	int iSum = 0;
	int iMax = 0;

	cout << "Enter number = ";
	cin >> iNo;

	int *arr = new int[iNo];

	for(int i= 0;i < iNo;i++)
	{
		cin >> arr[i];
	}

	for(int i = 0;i < iNo;i++)
	{
		for(int j = i;j < iNo;j++)
		{
			iSum = iSum + arr[j];
		}

		iMax = max(iSum,iMax);
		iSum = 0;
	}

	cout << "\nMaximum Subarray Sum = " << iMax;

	return 0;
}
*/
/*
//type 2:(optimising purpose)
int main(void)
{
	int iNo;
	int iSum = 0;
	int iMax = 0;

	cout << "Enter number = ";
	cin >> iNo;

	int *arr = new int[iNo];

	for(int i= 0;i < iNo;i++)
	{
		cin >> arr[i];
		iSum = iSum + arr[i];
	}

	iMax = max(iSum,iMax);
	
	for(int i = 0;i < iNo;i++)
	{
		iSum = iSum - arr[i];
		iMax = max(iSum,iMax);
	}

	cout << "\nMaximum Subarray Sum = " << iMax;

	return 0;
}
*/



int main(void)
{
	int iNo;
	int iSum = 0;
	int iMax = 0;

	cout << "Enter number = ";
	cin >> iNo;

	int *arr = new int[iNo];

	for(int i= 0;i < iNo;i++)
	{
		cin >> arr[i];
	}

	for(int i = 0; i < iNo;i++)
	{
		iSum += arr[i];

		if(iSum < 0)
			iSum = 0;

		iMax = max(iSum ,iMax);
	}

	cout << "\nMaximum Subarray Sum = " << iMax;

	return 0;
}