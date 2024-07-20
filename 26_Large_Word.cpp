#include<iostream>

using namespace std;

int main(void)
{
	char arr[100];
	int iPriv = 0;
	int imax = 0;

	cin.getline(arr,100);		//charater enter karnar ahe tyasathi 'getline' ghetala.

	int i = 0;

	while(1)
	{
		if(arr[i] == ' ' || arr[i] == '\0')
		{
			imax = max(iPriv,imax);
			iPriv = 0;
		
			if(arr[i] == '\0')
				break;
		}
		else
			iPriv++;

		i++;
	}
	cout << imax;

	return 0;
}