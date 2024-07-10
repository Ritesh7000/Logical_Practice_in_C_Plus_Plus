#include<iostream>

using namespace std;

int BinarySearch(int * ,int ,int );

int main(void)
{
	int iNo;
	int iKey;

	cout << "Enter Array count = ";
	cin >> iNo;

	int *arr = new int[iNo];

	for(int i = 0;i < iNo;i++)
	{
		cout << endl <<"arr[" << i << "] = ";
		cin >> arr[i]; 
	}

	cout << "\nNormal array = ";
	for(int i = 0;i < iNo;i++)
	{
		cout <<  arr[i] << ",";
	}

	for(int i = 0;i < iNo;i++)				//selection sort
	{
		for(int j = i+1;j < iNo; j++)
		{
			int iTemp;

			if(arr[i] > arr[j])
			{
				iTemp = arr[i];
				arr[i] =  arr[j];
				arr[j] = iTemp;
			}
		}
	}

cout << "\nSorted array = ";
	for(int i = 0;i < iNo;i++)
	{
		cout <<  arr[i] << ",";
	}


	cout << "\n\nwhich pos find = ";
	cin >> iKey;

	cout  << "\nData Pos is = " << BinarySearch(arr,iNo,iKey);

	return 0;
}

int BinarySearch(int *pPtr, int iCount, int iKey)
{
	int iStar = 0;
	int iEnd = iCount;
	int iMid;

	while(iStar <= iEnd)
	{
		iMid = (iStar+iEnd)/2;

		if(pPtr[iMid] == iKey)
			return iMid;
		else if(pPtr[iMid] > iKey)
		{
			iEnd = iMid-1;
		}
		else if(pPtr[iMid] < iKey)
		{
			iStar = iMid + 1;
		}
	}

	cout << "\nData is not present";
	return -1;
}

/*
time complexity
 = n/(2^k)

 after solving
 = O(log n and 2)

*/
 