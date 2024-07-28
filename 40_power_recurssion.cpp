#include<iostream>

using namespace std;

int power(int n,int p)
{
	if(p == 0)
		return 1;

	return n * power(n,p-1);
}

int main(void)
{
	int n,p;

	cout << "Enter number = ";
	cin >> n;

	cout << "Enter number = ";
	cin >> p;

	cout << "The power is :- " << power(n,p);
	return 0;
}