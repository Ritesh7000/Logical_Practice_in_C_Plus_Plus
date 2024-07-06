#include<iostream>

using namespace std;

int BiToDec(int);

/*
Enter Binary Numer : 1010
Decimal = 10

Enter Binary Numer : 1111
Decimal = 15
*/
int main(void)
{
	int iNo;
	int iDec;

	cout << "Enter Binary Numer : ";
	cin >> iNo;

	iDec = BiToDec(iNo);

	cout << "Decimal = " << iDec;

	return 0;
}

int BiToDec(int iNo)
{
	int iRem;
	int iSum = 0;
	int iPow = 1;

	while(iNo > 0)
	{
		iRem = iNo%10;
		iSum = iSum + iRem * iPow;
		iPow = iPow * 2;

		iNo = iNo/10;
	}

	return iSum;
}