#include<iostream>

using namespace std;

void Bubble(int [],int );

int main(void)
{
	int iNo;

	cout  << "Enter array size = ";
	cin >> iNo;

	int *arr = new int[iNo];

	for(int i = 0; i < iNo; i++)
	{
		cout << endl << "arr[" << i  << "] = "; 
		cin >> arr[i];
	}


	cout << endl <<"Before Sorting = ";
	for(int i = 0; i < iNo; i++)
	{ 
		cout <<  arr[i] <<",";
	}

	Bubble(arr,iNo);

	
	cout << endl << "After Sorting = ";
	for(int i = 0; i < iNo; i++)
	{ 
		cout <<  arr[i] <<",";
	}
	return 0;
}

void Bubble(int arr[],int iNo)
{
	for(int i = iNo-1;i >= 0;i--)
	{
		for(int j = 0;j < i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				int iTemp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = iTemp;
			}
		}
	}
}