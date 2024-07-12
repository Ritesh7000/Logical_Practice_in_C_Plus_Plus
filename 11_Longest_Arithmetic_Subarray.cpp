#include<iostream>

using namespace std;


/*
o/p:
Enter Number = 7
10
7 4 6 8 10 11    // 4-7 = -3,6-4 = -3,.... sequence madhe jast same diff kiti ahet te print kara
ans = 4
*/
int main(void)
{
	int iNo;
	int pd;
	int cd = 2;
	int ans = 2;

	cout << "Enter Number = ";
	cin >> iNo;

	int *arr = new int[iNo];

	for(int i = 0;i < iNo; i++)
	{
		cin >> arr[i];
	}
	
	pd = arr[1] - arr[0];

	for(int i = 2;i < iNo; i++)
	{
		if(pd == arr[i] - arr[i-1])
		{
			cd++;
		}
		else
		{
			pd = arr[i] - arr[i-1];
			cd = 2;
		}

		ans = max(ans, cd);
	}
	cout << "ans = " << ans;

	return 0;
}