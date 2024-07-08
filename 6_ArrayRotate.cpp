#include<iostream>

using namespace std;

int main(void)
{
	int arr[] = {10,20,30,40,50};
	int iRotn;
	int iTemp;
	int iCount = sizeof(arr)/sizeof(arr[0]);

	cout << "Enter Rotation = ";
	cin >> iRotn;

    iRotn = iRotn % iCount;
	
	for(int i = 1; i <= iRotn; i++)
	{	
		iTemp = arr[iCount-1];

		for(int j = iCount-1; j > 0; j--)
		{
			arr[j] = arr[j-1];
		}

		arr[0] = iTemp;	
	}

	for(int i = 0;i < iCount;i++)
	{
		cout << arr[i] << ",";
	}

	return 0;
}

