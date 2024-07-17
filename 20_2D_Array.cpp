#include<iostream>

using namespace std;

/*
o/p:
Enter Row = 3

Enter iColumn = 3
arr[0][0] = 1
arr[0][1] = 2
arr[0][2] = 3

arr[1][0] = 4
arr[1][1] = 5
arr[1][2] = 6

arr[2][0] = 7
arr[2][1] = 8
arr[2][2] = 9

1 2 3
4 5 6
7 8 9
which number position you find = 5

iRow = 2
iColumn = 2
*/

int main(void)
{
	int iRow;
	int iColumn;

	cout << "Enter Row = ";
	cin >> iRow;

	cout << "\nEnter iColumn = ";
	cin >> iColumn;

	int **arr = NULL;

	arr = new int*[iRow];

	if(arr == NULL)
	{
		cout << "Memory allocation is failed\n";
		return -1;
	}

	for(int i = 0;i < iRow;i++)
	{
		arr[i] = new int[iColumn];

		if(arr[i] == NULL)
		{
			cout << "Memory Allocation is Failed.";
			return -1;
		}
	}


	for(int i = 0;i < iRow;i++)
	{
		for(int j = 0;j < iColumn;j++)
		{
			cout << "arr[" << i <<"][" << j << "] = ";
			cin >> arr[i][j];
		}
		cout << endl;
	}

    cout << endl;
	for(int i = 0;i < iRow;i++)
	{
		for(int j = 0;j < iColumn;j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	int iNo;
	cout << "which number position you find = ";
	cin >> iNo;

	for(int i = 0;i < iRow;i++)
	{
		for(int j = 0;j < iColumn;j++)
		{
			if(arr[i][j] == iNo)
			{
				cout << "\n\niRow = " << i+1 <<"\niColumn = " << j+1;
				break;
			}
		}
		cout << endl;
	}


	return 0;
}
