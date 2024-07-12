#include<iostream>

using namespace std;


/*

# yaat ak array ghya ani te number ghya 
1. jo motha ahe ani adhi repeat nahi jhala ahe and
2. tya value chya pudhachi value hi small asayala havi.
 --> Tar to Record break number ahe.  

o/p:
Enter size = 8
1 2 0 7 2 0 3 3
2,7,
--> yaat 1 ha motha ahe pan tyachya pudhachi value hi mothi(2) ahe 
--> 2 ha motha ahe and pudhachi value hi small(0) ahe.
--> same 7 sathi pan

Enter size = 8
1 2 0 7 2 0 2 9
2,7,9,
*/


int main(void)
{
	int iNo;
	int iMax;			//# iMax ha time loop rotation(complexcity) kami karnyasathi ghetla ahe.

	cout <<"Enter size = ";
	cin >> iNo;


	int *arr = new int[iNo+1];
	arr[iNo] = -1;

	for(int i = 0;i < iNo;i++)
	{
		cin >> arr[i];
	}

	if(iNo == 1)
	{
		cout << "\nThere is only one value";
		return 0;
	}

	iMax = 0;

	cout  << "\nRecord break values are = ";
	for(int i = 0;i < iNo;i++)
	{
		if(arr[i] > iMax)
		{
			iMax = arr[i];

			if(arr[i] > arr[i+1])
			{
				cout << arr[i] << ",";
			}
		}
	}

	return 0;
}