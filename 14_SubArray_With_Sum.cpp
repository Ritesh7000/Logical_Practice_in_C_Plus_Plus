//aka array asel ani aplyala s(number) dila asel tar, to kiti subarray che addition ne hoto tyachi start and end index show kara.

#include<iostream>

using namespace std;


/*
o/p:

Enter Number = 5

Enter find sum = 12
1 2 3 7 5
baher ala

star = 2
end = 4

*/
int main(void)
{
	int iNo;
	int S;
	int iSum = 0;


	cout <<"Enter Number = ";
	cin >> iNo;

	cout <<"Enter find sum = ";
	cin >> S;


	int *arr = new int[iNo];

	for(int i = 0;i < iNo; i++)
	{
		cin >> arr[i];
	}

	for(int i=  0;i < iNo;i++)
	{
		for(int j = i;j < iNo;j++)
		{
			iSum += arr[j];

			if(iSum > S)		//jar iSum jast jhala S peksha tar "break" karu extra loops chi garajach nahi.
				break;
		
			if(iSum == S)
			{
				cout << "\nstar = " << i+1;
				cout << "\nend = " << j+1;
				return 0;
			}
		}

		iSum = 0;
	}

	cout  << "\nThere is no matching addtion of numbers.";


	return 0;
} 