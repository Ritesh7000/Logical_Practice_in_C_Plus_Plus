#include<iostream>

using namespace std;


/*
2 power aslele number.
1 (2^0)
2 (2^1)
4 (2^2)
8 (2^3)
16 (2^4)
32 (2^5)
64 (2^6)
128 (2^7)
256 (2^8)
512 (2^9)
1024 (2^10)

*/

int isPowerOf2(int n)
{
	return (n & (n-1));    //or return n && !(n & (n-1));  //for 0
}

int main(void)
{
	int iNo;
 
	cin >> iNo;

	if(iNo == 0)
	{
		cout << "is not power of 2";
		return 0;
	}

	if( isPowerOf2(iNo) == 0)
		cout << endl << iNo << "is power of 2";
	else
		cout << endl << iNo << "is not power of 2";

	return 0;
}