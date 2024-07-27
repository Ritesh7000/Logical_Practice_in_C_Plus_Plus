#include<iostream>

using namespace std;

int sum(int iNo)
{
	if(iNo == 0)
		return 0;

	return iNo + sum(iNo-1);
}

int main(void)
{
	int n;

	cout << "Enter number = ";
	cin >> n;

	cout << "The sum is :- " << sum(n);
	return 0;
}