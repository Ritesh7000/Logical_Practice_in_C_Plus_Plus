#include<iostream>

using namespace std;


/*
o/p:
Enter iColumn = 5

The spiral array is =
1 2 3 4 5
16 17 18 19 6
15 24 25 20 7
14 23 22 21 8
13 12 11 10 9

*/
int main(void)
{
	int iRow;
	int No = 0;


	cout << "\nEnter iColumn = ";
	cin >> iRow;

	int **arr = NULL;

	arr = new int*[iRow];

	if(arr == NULL)
	{
		cout << "Memory allocation is failed\n";
		return -1;
	}

	for(int i = 0;i < iRow;i++)
	{
		arr[i] = new int[iRow];

		if(arr[i] == NULL)
		{
			cout << "Memory Allocation is Failed.";
			return -1;
		}
	}

	for(int i = 0; i < (iRow/2)+1;i++)
	{
		cout << endl;

		//upper row
		for(int j = i;j < iRow-i;j++)
		{
		/*	cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
			cout << endl;
		*/
			arr[i][j] = ++No;
		}

		//right column
		for(int k = i+1;k < iRow-i;k++)
		{
		/*	cout << "arr[" << k << "][" << iRow-i-1 << "] = ";
			cin >> arr[k][iRow-i-1]; 
			cout << endl;
			*/
			arr[k][iRow-i-1] = ++No;
		}

		//down row
		for(int l = iRow - i-2; l >= i;l--)
		{
		/*	cout << "arr[" << iRow-i-1 << "][" << l << "] = ";
			cin >> arr[iRow-i-1][l];
			cout << endl;
		*/
			arr[iRow-i-1][l] = ++No;
		}

		//left column
		for(int  m = iRow - i-2;m > i;m--)
		{
		/*	cout << "arr[" << m << "][" << i << "] = ";
			cin >> arr[m][i];
			cout << endl;
		*/
			arr[m][i] = ++No;
		}
	}

	cout << "The spiral array is = " << endl;

	for(int i = 0; i< iRow;i++)
	{
		for(int j = 0;j < iRow;j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}

	if(arr != NULL)
	{
		for(int i = 0;i < iRow;i++)
		{
			if(arr[i] != NULL)
			{
				free(arr[i]);
				arr[i] = NULL;
			}
		}

		free(arr);
		arr = NULL;
	}

	return 0;
}