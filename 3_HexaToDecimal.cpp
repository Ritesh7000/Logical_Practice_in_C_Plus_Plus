#include<iostream>
#include<string>
#include<string.h>

using namespace std;

int HexaToDec(string);


int main(void)
{
	string iNo;

	cout << "Enter HexaDecimal Numer : ";
	cin >> iNo;

	cout  <<"Decimal is = " << HexaToDec(iNo);

	return 0;
}

int HexaToDec(string iNo)
{
	int iSum = 0;
	int iPow = 1;
	int iDi;
	int iCount = iNo.length();

	cout << endl << iCount;

	for(int i = iCount-1;i >= 0;i--)
	{
		if(iNo[i] >= '0' && iNo[i] <= '9')				//yanchya ascii value var apan kaam kartoy
		{
			iSum = iSum + ((iNo[i] - '0') * iPow);    
		}
		if(iNo[i] >= 'A' && iNo[i] <= 'F')
		{
			iSum = iSum + ((iNo[i] - 'A' + 10) * iPow);		
		}

		iPow = iPow * 16;
	}

	return iSum;
}