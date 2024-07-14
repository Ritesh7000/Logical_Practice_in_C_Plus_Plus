#include<iostream>
using namespace std;
/*
In this code we should the print missing smallest integer after ther present smallest initeger(including 0,ignore negative).
*/

/*
o/p:
1.	Enter Number = 5
	3 5 2 4 1

	Small value = 1
	all elements present.

2.	Enter Number = 5
	3 5 2 6 1

	Small value = 1
	Missing element = 4

3.  Enter Number = 6
	0 -9 1 3 -4 5

	Small value = 0
	Missing element = 2
*/

int main(void)
{
	int iNo;
	int iMin;

	cout << "Enter Number = ";
	cin >> iNo;


	int *arr = new int[iNo];

	if(arr == NULL)
	{
		cout << "Memory allocation is Failed\n";
		return -1;
	}

	for(int i = 0;i < iNo;i++)
	{
		cin >> arr[i];
	}

	iMin = arr[0];
	int iMax = arr[0];
	for(int i = 1;i < iNo;i++)
	{
		if(arr[i] >= 0)
			iMin = min(iMin,arr[i]);
		iMax = max(iMax,arr[i]);
	}

	cout << "\nSmall value = " << iMin;

	for(int i = 0;i < iNo;i++)
	{
		for(int j = 0;j < iNo; j++)
		{
			if(arr[j] == iMin+i+1)		//extra loops use nahi honar ya cond.
			{
				break;
			}
			else if(j == iNo-1 && iMax > iMin+i+1)		//'jar iMax > iMin+i+1' as jhal tar sarv elements present astil array madhe
			{
				cout << "\nMissing element = " << iMin+i+1;
				return 0;
			}
		}

		if(i == iNo-1)
			cout << "\nall elements present.\n";
	}




	if(arr != NULL)
	{
		free(arr);
		arr = NULL;
	}
	return 0;
}