#include<iostream>

using namespace std;

/*
Enter number = 5
The power is :- 120
*/

int fact(int n)
{
	if(n == 1)
		return 1;

	return n * fact(n-1);
}

int main(void)
{
	int n;

	cout << "Enter number = ";
	cin >> n;

	cout << "The power is :- " << fact(n);
	return 0;
}