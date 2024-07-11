#include<iostream>

using namespace std;

//yaat array madhe max konti te print karat rahuu

/* o/p:
Enter size of array = 4
2
1
0
4

2 2 2 4
*/
int main(void)
{
	int iSize;
	int iMax = -1;

	cout <<"Enter size of array = ";
	cin >> iSize;

	int *arr = new int[iSize];

	for(int i = 0;i < iSize; i++)
	{
		cin >> arr[i];
	}

	cout << endl;
	for(int i = 0;i < iSize; i++)
	{
		if(arr[i] > iMax)
			iMax = arr[i];

		cout << iMax << " ";                                      
	}


	return 0;
}