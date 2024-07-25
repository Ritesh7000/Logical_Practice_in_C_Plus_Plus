//#write a program to count the number of ones in binary representation of a number

#include<iostream>
#include<string>

using namespace std;


/*
o/p:
15

the count is = 4
*/

/*
Logic
1.	15     = 1 1 1 1
	&
	15-1   = 1 1 1 0		

2.	14     = 1 1 1 0			//(n & (n - 1))
	&
	14-1   = 1 1 0 1

3,	12	   = 1 1 0 0
	&
	12-1   = 1 0 0 1

4.	8  	   = 1 0 0 0 
	&
	8-1    = 0 1 1 1

	0 = 0 0 0 0


	//jo pryant o yet nahi topryant kiti step hotat te count karayach ahe.
*/

int Count(int n)
{
	int Flag = 0;

	while(n != 0)    //or while(n)
	{
		n = n & (n-1);
		Flag++;
	}

	return Flag;
}

int main(void)
{
	int iNo;

	cin >> iNo;


	cout << endl << "the count is = " <<Count(iNo);
	
	return 0;
}
