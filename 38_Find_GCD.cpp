#include<iostream>

using namespace std;


/*
Enter n1 =24

Enter n2 =42
6
*/

int GCD(int a,int b)
{
	int rem = 1;

	while(rem != 0)
	{
		rem = a%b;
		a = b;
		b = rem;
	}

	return a;
}

int main(void)
{
	int n1,n2;

	cout << "Enter n1 =";
	cin >> n1;

	cout << "\nEnter n2 =";
	cin >> n2;

	cout << GCD(n1,n2);


	return 0;
}