#include<iostream>

using namespace std;

/* //Enclusion/Exclusion
o/p:
	lenght = 1000

	a = 5

	b = 7
	The total count is = 314
*/
// 5 & 7 doghanipan divide honare number.

int Divisible(int iLenght,int a,int b)
{
	int c1 = iLenght/a;
	int c2 = iLenght/b;
	int c3 = iLenght/(a*b);

	return c1+c2-c3;
}

int main(void)
{
	int n,a,b;

	cout << "lenght = ";
	cin >> n;

	cout << "\na = ";
	cin >> a;

	cout << "\nb = ";
	cin >> b;

	cout << "The total count is = " << Divisible(n, a, b);


/*
2nd approach
	int iCount = 0;

	for(int i = 1;i<=1000;i++)
	{
		if(i%5 == 0 && i%7 == 0)
		{
			cout << i << ", ";
			iCount++;	
		}
	}

	cout << endl <<"Total Number = " << iCount;
*/
	return 0;
}