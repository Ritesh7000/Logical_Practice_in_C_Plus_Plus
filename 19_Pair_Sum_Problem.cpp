//#Pair Sum Problem

#include<iostream>

using namespace std;

bool PairSum(int [], int, int);

/*
1.	Enter number = 8
	2 4 7 11 14 16 20 21

	Enter sum Find = 31
	3 & 6

	These are pairs.
*/
int main(void)
{
	int iNo;
	int iKey;

	cout << "Enter number = ";
	cin >> iNo;

	int *arr = new int[iNo];

	for(int i= 0;i < iNo;i++)
	{
		cin >> arr[i];
	}

	cout << endl << "Enter sum Find = ";
	cin >> iKey;

	if(PairSum(arr,iNo,iKey) == true)
		cout << "\nThese are pairs.";
	else
		cout << "\nThere is no pair available in the Array.";
	return 0;
}

bool PairSum(int arr[], int iNo, int iKey)
{
	for(int i = 0;i < iNo-1;i++)
	{
		for(int j = i+1;j < iNo;j++)
		{
			if(arr[i]+arr[j] == iKey)
			{
				cout << i << " & " << j << endl;
				return true;
			}
		}
	}

	return false;
}
