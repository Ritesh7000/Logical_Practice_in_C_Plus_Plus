#include<iostream>

using namespace std;

int main(void)
{
	int arr[7] = {1,1,4,2,2};
	int j = 0;

	for(int i = 0;i < 5;i++)
	{
		j = j ^ arr[i];
	}

	cout << j;		//o/p : 4 //ha fqt ashya element var chalu shakato
/*	for(int i =0;i < 5;i++)
	{
		for(j = i+1;j < 6;j++)
		{
			if(arr[i] ^ arr[j] == 0)
			{
				break;
			}
		}
		if(j == 6)
			cout << arr[i];
	}

*/
	return 0;
}