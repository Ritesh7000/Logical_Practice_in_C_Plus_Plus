#include<iostream>

using namespace std;


int fibo(int n)
{
	if(n == 0 || n == 1)
		return n;
	
	return fibo(n-1) + fibo(n-2);
}

int main(void)
{
	int n;

	cout << "Enter number = ";
	cin >> n;

	cout <<endl << n <<"Fibonacci number is = " << fibo(n);

	return 0;
}