#include<iostream>
#include<climits>

using namespace std;

void MaxMin(int , int *);
int main(void)
{
	int iNo;

	cout << "Enter count = ";
	cin >> iNo;

	int  *arr = new int[iNo];

	for(int i = 0;i < iNo;i++)
	{
		cout << "arr[" << i << "] =";
		cin >> arr[i];
	}

	cout << endl;
	for(int i = 0;i < iNo;i++)
	{
		cout << "arr[" << i << "] ="<< arr[i] << endl;
	}

	MaxMin(iNo ,arr);

	return 0;
}

void MaxMin(int iCount, int *pPtr)
{
	int Min = pPtr[0];
	int Max = pPtr[0];

	for(int i = 1;i<iCount;i++)
	{
/*		if(pPtr[i] < Min)
		{
			Min = pPtr[i];
		}
		else if(pPtr[i] > Max)
		{
			Max = pPtr[i];
		}
		OR
*/

		Max = max(Max,pPtr[i]);
		Min = min(Min,pPtr[i]);
	}

	cout << endl << "Max = " << Max << endl;
	cout << endl << "Min = " << Min;
}