#include<iostream>
using namespace std;

/*
o/p:
	Enter Number = 6

	Ascending order = 1 2 3 4 5 6
	Descending Order = 6 5 4 3 2 1
*/

void Asce(int iNo)
{
	if(iNo == 0)
		return;

	Asce(iNo -1);

	cout << iNo <<" ";
}

void Desc(int iNo)
{
	if(iNo == 0)
		return;

	cout << iNo <<" ";

	Desc(iNo -1);
}

int main(void)
{
	int iNo;

	cout << "Enter Number = ";
	cin >> iNo;

	cout << "\nAscending order = ";
	Asce(iNo);

	cout << "\nDescending Order = ";
	Desc(iNo);


	return 0;
}